library IEEE;
use IEEE.std_logic_1164.all;

entity rutaDeDatos is
	port( 
		clk		: in  std_logic;
		rst_n		: in  std_logic;
		control	: in  std_logic_vector(20 downto 0);
		Zero		: out std_logic;
		sw_ext :in std_logic_vector(3 downto 0);
	   sw_sup :in std_logic_vector(3 downto 0);
		op			: out std_logic_vector(5 downto 0);
		R3			: out std_logic_vector(31 downto 0);
		PCout		: out std_logic_vector(31 downto 0)
	);
end rutaDeDatos;

architecture rutaDeDatosArch of rutaDeDatos is

	component registro
		generic(
			n : positive := 32
		);
		port( 
			clk	: in  std_logic;
			rst_n	: in  std_logic;
			load	: in  std_logic;
			din	: in  std_logic_vector( n-1 downto 0 );
			dout	: out std_logic_vector( n-1 downto 0 ) 
		);
	end component;
	
	
		component biestable
		port( 
			clk	: in  std_logic;
			rst_n	: in  std_logic;
			load	: in  std_logic;
			din	: in  std_logic;
			dout	: out std_logic
		);
	end component;
	
	component multiplexor2a1
		generic(
			bits_entradas: positive := 32
		); 
		port( 
			entrada0	: in  std_logic_vector(bits_entradas-1 downto 0); 
			entrada1	: in  std_logic_vector(bits_entradas-1 downto 0);
			seleccion: in  std_logic; 
			salida	: out std_logic_vector(bits_entradas-1 downto 0)  
		); 
	end component; 

	component multiplexor3a1
		generic(
			bits_entradas: positive := 32
		); 
		port( 
			entrada0	: in  std_logic_vector(bits_entradas-1 downto 0); 
			entrada1	: in  std_logic_vector(bits_entradas-1 downto 0);
			entrada2	: in  std_logic_vector(bits_entradas-1 downto 0);-- Metemos un 0
			seleccion: in  std_logic; 
			salida	: out std_logic_vector(bits_entradas-1 downto 0)  
		); 
	end component; 

	component multiplexor4a1 
		generic(
			bits_entradas: positive := 32
		); 
		port( 
			entrada0	: in  std_logic_vector(bits_entradas-1 downto 0);
			entrada1	: in  std_logic_vector(bits_entradas-1 downto 0);
			entrada2	: in  std_logic_vector(bits_entradas-1 downto 0);
			entrada3	: in  std_logic_vector(bits_entradas-1 downto 0);
			seleccion: in  std_logic_vector(1 downto 0); 
			salida	: out std_logic_vector(bits_entradas-1 downto 0)  
		); 
	end component;

	component memoria is
		port( 
			clk		: in  std_logic;
			ADDR		: in  std_logic_vector(31 downto 0 );
			MemWrite	: in  std_logic;
			MemRead	: in  std_logic;
			DW			: in  std_logic_vector(31 downto 0 );
			DR			: out std_logic_vector(31 downto 0 ) 
		);
	end component;	
  
  
	component bancoDeRegistros
		port( 
			clk		: in  std_logic;
			rst_n		: in  std_logic;
			RA			: in  std_logic_vector(4 downto 0);
			RB			: in  std_logic_vector(4 downto 0);
			RegWrite	: in  std_logic;
			RW			: in  std_logic_vector(4 downto 0);
			busW		: in  std_logic_vector(31 downto 0);
			busA		: out std_logic_vector(31 downto 0);
			busB		: out std_logic_vector(31 downto 0);
			R3			: out std_logic_vector(31 downto 0)
		);
	end component;  
  
	component ALU
		port( 		
			A			: in  std_logic_vector(31 downto 0);
			B			: in  std_logic_vector(31 downto 0);
			ALUop		: in  std_logic_vector(1 downto 0);
			funct		: in  std_logic_vector(5 downto 0);
			Zero		: out std_logic;
			R			: out std_logic_vector(31 downto 0)
		);
	end component;  
	
	component reSync 
		port(
		clk		: in  std_logic;
		rst_n		: in  std_logic;
		rst_n_sync	: out  std_logic
		
		);
	end component;
  
 signal control_aux : std_logic_vector(20 downto 0);
  alias PCWrite	: std_logic is control_aux(0);
  alias IorD 		: std_logic is control_aux(1);
  alias MemWrite	: std_logic is control_aux(2);
  alias MemRead 	: std_logic is control_aux(3);
  alias IRWrite 	: std_logic is control_aux(4);
  alias RegDst 	: std_logic is control_aux(5);
  alias MemtoReg 	: std_logic_vector(1 downto 0) is control_aux(7 downto 6);
  alias RegWrite 	: std_logic is control_aux(8);
  alias AWrite 	: std_logic is control_aux(9);
  alias BWrite 	: std_logic is control_aux(10);  
  alias ALUScrA 	: std_logic_vector(1 downto 0) is control_aux(12 downto 11);
  alias ALUScrB 	: std_logic_vector(1 downto 0) is control_aux(14 downto 13);
  alias OutWrite 	: std_logic is control_aux(15);
  alias ALUop 		: std_logic_vector(1 downto 0) is control_aux(17 downto 16);
  alias mux_SW    : std_logic_vector(1 downto 0) is control_aux(19 downto 18);
 -- alias salida_FF_1 	: std_logic is control_aux(20);
 -- alias salida_FF_2 	: std_logic is control_aux(21);
  alias JUMP 	: std_logic is control_aux(20);
  
  signal salidaALU : std_logic_vector(31 downto 0);
   signal salidaJUMP : std_logic_vector(31 downto 0);
  signal PC : std_logic_vector(31 downto 0);
  signal ALUOut : std_logic_vector(31 downto 0);
  signal ADDR : std_logic_vector(31 downto 0);
  signal A : std_logic_vector(31 downto 0);
  signal B : std_logic_vector(31 downto 0);
  signal salidaMem : std_logic_vector(31 downto 0);
  signal IR : std_logic_vector(31 downto 0);
  signal OPA : std_logic_vector(31 downto 0);
  signal OPB : std_logic_vector(31 downto 0);
  signal RW : std_logic_vector(4 downto 0);
  signal salida_switch : std_logic_vector(15 downto 0);
  signal busW : std_logic_vector(31 downto 0);
  signal signo_extendido : std_logic_vector(31 downto 0);
  signal signo_extendido_A_16_sup : std_logic_vector(15 downto 0);
  signal signo_extendido_A_16_ext : std_logic_vector(15 downto 0);
  signal desplazado : std_logic_vector(31 downto 0);
  signal desplazado_2 : std_logic_vector(27 downto 0);
  signal final : std_logic_vector(31 downto 0);
  signal salidaBancoRegA : std_logic_vector(31 downto 0);
  signal salidaBancoRegb : std_logic_vector(31 downto 0);
  signal salida_rst_sync : std_logic;
  
begin

	PCout <= PC;
 	control_aux <= control;
	op <= IR(31 downto 26);

-- Extension de signo
	signo_extendido_A_16_sup(3 downto 0) <= sw_ext(3 downto 0);
	signo_extendido_A_16_sup(15 downto 4) <= x"FFF" when (sw_ext(3) = '1') else x"000";
	
	signo_extendido_A_16_ext(3 downto 0) <= sw_sup(3 downto 0);
	signo_extendido_A_16_ext(15 downto 4) <= x"FFF" when (sw_sup(3) = '1') else x"000";
	reg_PC : registro port map(clk => clk, rst_n => rst_n, load => PCWrite, din => salidaJUMP, dout => PC);
	--FF_1: biestable port map(clk => clk, rst_n => rst_n, load => clk, din =>clk, dout => salida_FF_1);
	--FF_2: biestable port map(clk => clk, rst_n => rst_n, load => clk, din => salida_FF_1, dout => salida_FF_2);
	--salida_rst_sync <= salida_FF_2 and rst_n;
	--final: reSync port map( clk => clk, rst_n => rst_n, rst_n_sync => salida_rst_sync); 
	
	mux_IorD : multiplexor2a1 port map(entrada0 => PC, entrada1 => ALUOut, seleccion => IorD, salida => ADDR); 

	mem : memoria port map(clk => clk, ADDR => ADDR, MemWrite => MemWrite, MemRead => MemRead, DW => B, DR => salidaMem);
	
	reg_IR : registro port map(clk => clk, rst_n => rst_n, load => IRWrite, din => salidaMem, dout => IR);
	
	mux_RW : multiplexor2a1 generic map (bits_entradas => 5) port map(entrada0 =>IR(20 downto 16), entrada1 => IR(15 downto 11), seleccion => RegDst, salida => RW);
	
	
	mux_MDR : multiplexor4a1 port map(entrada0 => ALUout, entrada1 => salidaMem, entrada2 => signo_extendido, entrada3 =>  A, seleccion => MemtoReg, salida => busW);
	
	mux_switches : multiplexor4a1 generic map (bits_entradas => 16) port map(entrada0 => IR(15 downto 0), entrada1 => signo_extendido_A_16_ext, entrada2 => signo_extendido_A_16_sup, entrada3 =>  x"0000", seleccion =>mux_SW, salida => salida_switch);
	
	-- Extension de signo
	signo_extendido(15 downto 0) <= salida_switch(15 downto 0);
	signo_extendido(31 downto 16) <= x"FFFF" when (salida_switch(15) = '1') else x"0000";
	
	
	
	-- <<2
	desplazado <= signo_extendido(29 downto 0)&"00";
	desplazado_2 <= IR(25 downto 0) &"00";
	final <= PC(31 downto 28) & desplazado_2(27 downto 0);
	
	MUX_JUMP:  multiplexor2a1 port map(entrada0 =>final , entrada1 => salidaALU, seleccion => JUMP, salida => salidaJUMP);
	
	banco_registros: bancoDeRegistros port map(clk => clk, rst_n => rst_n, RA => IR(25 downto 21), RB => IR(20 downto 16), RegWrite => RegWrite, RW => RW, busW => busW, busA => salidaBancoRegA, busB => salidaBancoRegB, R3 => R3);
	
	reg_A : registro port map(clk => clk, rst_n => rst_n, load => AWrite, din => salidaBancoRegA, dout => A);
	
	reg_B : registro port map(clk => clk, rst_n => rst_n, load => BWrite, din => salidaBancoRegB, dout => B);
	
	mux_opA : multiplexor4a1 port map(entrada0 => PC, entrada1 => A, entrada2 => x"00000000", entrada3 =>  x"00000000", seleccion => ALUScrA, salida => OPA);
	
	mux_opB : multiplexor4a1 port map(entrada0 => B, entrada1 => x"00000004", entrada2 => signo_extendido, entrada3 => desplazado, seleccion => ALUScrB, salida => OPB); --------------- Le metemos el ir para sacar el inmed
	
	ALU_i : ALU port map(A => OPA, B => OPB, ALUop => ALUop, funct => IR(5 downto 0), Zero => Zero, R => salidaALU);
	
	reg_ALUout : registro port map(clk => clk, rst_n => rst_n, load => OutWrite, din => salidaALU, dout => ALUout);

end rutaDeDatosArch;