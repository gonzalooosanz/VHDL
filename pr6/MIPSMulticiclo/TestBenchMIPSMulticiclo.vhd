library ieee;
use ieee.std_logic_1164.all;

entity TestBenchMIPSMulticiclo is
end TestBenchMIPSMulticiclo;

architecture behavior of TestBenchMIPSMulticiclo is

  -- Component Declaration for the Unit Under Test (UUT)

  component MIPSMulticiclo
  port(
    clk       : in  std_logic;
    rst_n     : in  std_logic;
    displayD  : out std_logic_vector(6 downto 0);
    displayI  : out std_logic_vector(6 downto 0);
    modo      : in  std_logic;
    siguiente : in  std_logic;
	 sw_ext :in std_logic_vector(3 downto 0);
	sw_sup :in std_logic_vector(3 downto 0);
    displayS  : out std_logic_vector(6 downto 0)
    );
  end component MIPSMulticiclo;

  --Inputs
  signal clk   : std_logic := '0';
  signal rst_n : std_logic := '0';

  -- Clock period definitions
  constant clk_period : time := 100 ns;

begin

  -- Instantiate the Unit Under Test (UUT)
  uut : MIPSMulticiclo port map (
    clk   => clk,
    rst_n => rst_n,
	 modo  => '0',
	 siguiente => '0',
	 sw_ext => open,
	 sw_sup => open,
	 displayD => open,
	 displayI => open,
	 displayS => open
    );

  -- Clock process definitions
  clk_process : process
  begin
    clk <= '0';
    wait for clk_period/2;
    clk <= '1';
    wait for clk_period/2;
  end process;


  -- Stimulus process
  stim_proc : process
  begin
    -- hold reset state for 200 ns.
    rst_n <= '0';
    wait for 200 ns;

    rst_n <= '1';
    wait for clk_period*10;

    -- insert stimulus here 

    wait;
  end process;

end;
