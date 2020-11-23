/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3620187407;
char *IEEE_P_3564397177;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_2300308817_2435158829_init();
    work_a_1126928572_0412679505_init();
    std_textio_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_0748378587_2959432447_init();
    xilinxcorelib_a_0112419257_2959432447_init();
    xilinxcorelib_a_1150314257_1709443946_init();
    xilinxcorelib_a_2064353273_0543512595_init();
    xilinxcorelib_a_0485819371_3212880686_init();
    work_a_2997868442_4033024876_init();
    work_a_3276747723_0037780368_init();
    work_a_2241032164_0412679505_init();
    work_a_2235865403_2068367467_init();
    work_a_0675608940_2068367467_init();
    work_a_3875472964_1686119627_init();
    work_a_0832606739_2134123543_init();
    work_a_2490904768_0294139648_init();


    xsi_register_tops("work_a_2490904768_0294139648");

    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
