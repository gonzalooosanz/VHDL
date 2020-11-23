library IEEE;
use IEEE.std_logic_1164.all;

entity unidadDeControl is
	port( 
		clk		: in  std_logic;
		rst_n		: in  std_logic;
		control	: out std_logic_vector(20 downto 0);
		Zero		: in  std_logic;
		op			: in  std_logic_vector(5 downto 0);
		modo		: in  std_logic;
		siguiente: in  std_logic		
	);
end unidadDeControl;

architecture unidadDeControlArch of unidadDeControl is

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
  --alias salida_FF_2 	: std_logic is control_aux(21);
  alias JUMP 	: std_logic is control_aux(20);
  
  TYPE states IS (S0, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, S14, S15, S16, S17, S18, S19);
  SIGNAL currentState, nextState: states;
  ---- Crear señaés para los sw de la placa ext y sup
  SIGNAL sw_ext : std_logic_vector(3 downto 0);
  SIGNAL sw_sup : std_logic_vector(3 downto 0);

begin

	control <= control_aux;

  stateGen:
  PROCESS (currentState, op , zero, modo, siguiente)
  BEGIN

    nextState <= currentState;
	 control_aux <= (OTHERS=>'0');
		  
    CASE currentState IS
		
		WHEN S0 =>
			PCWrite <= '1';
			MemRead <= '1';
			ALUScrB <= "01";
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S1;
			
		WHEN S1 =>
			IRWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			if (modo = '0' or (modo = '1' and siguiente = '1')) then
				nextState <= S2;
			end if;
			
		WHEN S2 =>
			AWrite <= '1';
			BWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			if (op = "000000") then -- tipo-R
				nextState <= S8;
			elsif (op = "100011") then -- lw
				nextState <= S3;
			elsif (op = "101011") then --sw
				nextState <= S6;
			elsif (op = "000100") then --beq
				nextState <= S10;
			elsif (op = "010001") then --sw_lectura
				nextState <= S12;-------------- Crear estado
			elsif (op = "010000") then --mv_inmed
				nextState <= S16;
			elsif (op = "010010") then --mv_rg
				nextState <= S18; ------------ En teoria llegara como max hasta el 21
			elsif(op="000001") then 
				nextState <= S18;
			end if;
		WHEN S3 =>
			ALUScrA <= "01";
			ALUScrB <= "10";
			OutWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S4;
			
		WHEN S4 =>
			MemRead <= '1';
			IorD <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S5;
		
		WHEN S5 =>
			MemtoReg <= "01";
			RegWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
		
		WHEN S6 =>
			ALUScrA <= "01";
			ALUScrB <= "10";
			OutWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S7;
			
		WHEN S7 =>
			MemWrite <= '1';
			IorD <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
		
		WHEN S8 =>
			ALUScrA <= "01";
			ALUOp <= "10";
			OutWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S9;
		
		WHEN S9 =>
			RegDst <= '1';
			RegWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
			
		WHEN S10 =>
			ALUScrA <= "01";
			ALUOp <= "01";
			mux_SW <= "00";
			JUMP <= '0';
			if (Zero = '0') then
				nextState <= S0;
			else
				nextState <= S11;
			end if;
			
		WHEN S11 =>
			PCWrite <= '1';
			ALUScrB <= "11";
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
			
		WHEN S12 => -- Si inmed = 0 /1 Crear cable del ir al AluScrcB
			ALUScrA <= "10";
			ALUScrB <= "10";
			ALUOp <= "00"; -- resta
			mux_SW <= "00";
			JUMP <= '0';
			if (Zero = '0') then
				nextState <= S13;
			else
				nextState <= S14;
			end if;
		
		WHEN S13 => --- rt <- SignExt (sw ext)
			ALUScrA <= "10";
			ALUScrB <= "10";---------Tengo que meter el sw en el sign ext
			OutWrite <= '1';--------- Lo meto en el ALUOut
			mux_SW <= "01";
			JUMP <= '0';
			nextState <= S15;
		
		WHEN S14 => --- rt <- SignExt (sw sup)
			ALUScrA <= "10";
			ALUScrB <= "10";---------Tengo que meter el sw en el sign ext
			OutWrite <= '1';--------- Lo meto en el ALUOut
			mux_SW <= "10";
			JUMP <= '0';
			nextState <= S15;
			
		WHEN S15 => --- Br(rt)<-Aluot
			MemtoReg <= "00";
			RegWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
			
		WHEN S16 => ---AluOut <- SignExt (inmed)
			ALUScrA <= "10";
			ALUScrB <= "10";
			OutWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S17;
		WHEN S17 => ---rt <- rs
			MemtoReg <= "01";
			RegWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;

		WHEN S18 => ---Aluout <- rs // MOV
			MemtoReg <= "11";
			RegWrite <= '1';
			mux_SW <= "00";
			JUMP <= '0';
			nextState <= S0;
		WHEN S19 =>  -- pc <- 4 * ir[25:0]
			PCWrite <= '1';
			mux_SW <= "00";
			JUMP <= '1'; 
			nextState <= S0;
			
    END CASE;
  END PROCESS stateGen;

  state:
  PROCESS (rst_n, clk)
  BEGIN
	 IF (rst_n = '0') THEN
		currentState <= S0;
    ELSIF RISING_EDGE(clk) THEN
		currentState <= nextState;
    END IF;
  END PROCESS state;

end unidadDeControlArch;