----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date:	15:30:37 10/11/2018
-- Design Name:
-- Module Name:	cerrojo_8_bits - Behavioral
-- Project Name:
-- Target Devices:
-- Tool versions:
-- Description:
--
-- Dependencies:
--
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity cerrojo_8_bits is
    generic (width : natural := 8);
    port	(clave : in std_logic_vector((width - 1) downto 0);
   			 habilitar : in std_logic;
   			 rst : in std_logic; --asincrono a bajo nivel
   			 clk : in std_logic; --25MHz
   			 display : out std_logic_vector(6 downto 0);
   			 led : out std_logic);
end cerrojo_8_bits;

architecture Behavioral of cerrojo_8_bits is
    type clave_st is (inicial_st, tres_st, dos_st, uno_st, final_st);
    signal actual_st, siguiente_st: clave_st;
    signal habilitar_1: std_logic;
    signal intentos: std_logic_vector(3 downto 0);
    signal clave_pwd : std_logic_vector((width - 1) downto 0);	-- !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 signal clave_aux : std_logic_vector((width - 1) downto 0);
	 signal clk_int : std_logic;
	
	--componentes: 

	component divisor is
		port(rst : in std_logic;
		  clk : in std_logic;
			  clk_1hz : out std_logic);
	end component;

	
    component debouncer
		port (
			rst         	: in  std_logic;
			clk         	: in  std_logic;
			x           	: in  std_logic;
			xdeb        	: out std_logic;
			xdebfallingedge : out std_logic;
			xdebrisingedge  : out std_logic);
	end component;
	
	
    component conv_7seg
		port (x			: in  std_logic_vector (3 downto 0);
			  display 	: out std_logic_vector (6 downto 0));
   end component;
   
   
begin

	--Descomentar al implementar en fpga

 i_clk_int : divisor port map(
	rst => rst,
	clk => clk,
	clk_1hz => clk_int);
	
--comentar al realizar implementacion en fpga
--clk_int <= clk;

   mod_ded: debouncer port map (
   	 rst => rst,
   	 clk => clk_int,
   	 x => habilitar,
   	 xdeb => habilitar_1);
    mod_conv: conv_7seg port map (
   	 x => intentos,
   	 display => display);
p_comb : process (actual_st, habilitar_1, clave_aux, clave)
   begin	 
   	case actual_st is  		
			when inicial_st =>
				clave_pwd <= ( others => '0'); -- !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				clave_aux <= ( others => '0');
				intentos <= "0000";		
   			if habilitar_1 = '0' then
   				 clave_pwd <= clave;
   				 siguiente_st <= tres_st;
				else 
					siguiente_st <= inicial_st;
   		 	end if;		
				
			 when tres_st =>
				intentos <= "0011";
				  
				if habilitar_1 = '0' then	
					clave_aux <= clave;				
					if clave_pwd = clave_aux then	
						siguiente_st <= inicial_st;
					else
					 siguiente_st <= dos_st;
					end if;
				else 
					siguiente_st <= tres_st;				 
				end if;
   		
			when dos_st =>
   			intentos <= "0010";
   			if habilitar_1 = '0' then				
					clave_aux <= clave;
					if clave_pwd = clave_aux then	
						siguiente_st <= inicial_st;
					else
					 siguiente_st <= uno_st;
					end if;
				else 
					siguiente_st <= dos_st;				 
   			end if;
   		
   		 when uno_st =>
   			 intentos <= "0001";
   			 if habilitar_1 = '0' then			
					clave_aux <= clave;	
					if clave_pwd = clave_aux then
						siguiente_st <= inicial_st;
					else
					 siguiente_st <= final_st;
					end if;
				else 
					siguiente_st <= uno_st;				 
   			 end if;
   		
			when final_st =>
   			 intentos <= "0000";
   			 siguiente_st <= final_st; 
				 
			when others => --volvemos al estado inicial  
				intentos <= "0000";			
   				 clave_aux <= ( others => '0');
   				 siguiente_st <= inicial_st;
   	 end case;
    end process;    

p_salidas: process (actual_st)
   begin
   	 if actual_st = inicial_st then led <= '1';
		 else led <= '0'; 
   	 end if;
    end process;


p_reg: process(clk_int, rst)
   begin
   	 if rst = '0' then 
		    actual_st <= inicial_st;
   	 elsif rising_edge(clk_int) then
   		 actual_st <= siguiente_st;
		 end if;
   end process;
	
end Behavioral;
