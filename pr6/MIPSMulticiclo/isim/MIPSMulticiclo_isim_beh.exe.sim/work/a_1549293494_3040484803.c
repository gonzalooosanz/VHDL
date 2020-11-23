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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/hlocal/pr6/MIPSMulticiclo/hdl/unidadDeControl.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1549293494_3040484803_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 22U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4768);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1549293494_3040484803_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t19;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21};

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(22U);
    memset(t1, 0, 22U);
    t2 = t1;
    memset(t2, (unsigned char)2, 22U);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 22U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t4, 21U, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 18U, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 8135);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 8137);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 17U, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 8139);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB25;

LAB26:    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB28;

LAB29:    t11 = (unsigned char)0;

LAB30:    t3 = t11;

LAB27:    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 12U, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 8141);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8143);
    t3 = 1;
    if (6U == 6U)
        goto LAB34;

LAB35:    t3 = 0;

LAB36:    if (t3 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8149);
    t3 = 1;
    if (6U == 6U)
        goto LAB42;

LAB43:    t3 = 0;

LAB44:    if (t3 != 0)
        goto LAB40;

LAB41:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8155);
    t3 = 1;
    if (6U == 6U)
        goto LAB50;

LAB51:    t3 = 0;

LAB52:    if (t3 != 0)
        goto LAB48;

LAB49:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8161);
    t3 = 1;
    if (6U == 6U)
        goto LAB58;

LAB59:    t3 = 0;

LAB60:    if (t3 != 0)
        goto LAB56;

LAB57:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8167);
    t3 = 1;
    if (6U == 6U)
        goto LAB66;

LAB67:    t3 = 0;

LAB68:    if (t3 != 0)
        goto LAB64;

LAB65:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8173);
    t3 = 1;
    if (6U == 6U)
        goto LAB74;

LAB75:    t3 = 0;

LAB76:    if (t3 != 0)
        goto LAB72;

LAB73:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 8179);
    t3 = 1;
    if (6U == 6U)
        goto LAB82;

LAB83:    t3 = 0;

LAB84:    if (t3 != 0)
        goto LAB80;

LAB81:
LAB32:    goto LAB2;

LAB6:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 8185);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 8187);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 8189);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 18U, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 20U, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8191);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8193);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 14U, 2U, 0LL);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 8195);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 8197);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 8199);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 8201);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 19U, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 20U, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 8203);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 8205);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 8207);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 4U, 2U, 0LL);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 8209);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 16U, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8211);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 8213);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 8215);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 4U, 2U, 0LL);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 8217);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB88;

LAB90:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);

LAB89:    goto LAB2;

LAB14:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 21U, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 8219);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 8221);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB15:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 8223);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 8225);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 8227);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 4U, 2U, 0LL);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 8229);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)2);
    if (t9 != 0)
        goto LAB91;

LAB93:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)14;
    xsi_driver_first_trans_fast(t1);

LAB92:    goto LAB2;

LAB16:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 8231);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8233);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 8235);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)15;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB17:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 8237);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 8239);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 8241);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)15;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB18:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 8243);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 14U, 2U, 0LL);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 8245);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB19:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 8247);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 9U, 2U, 0LL);
    xsi_set_current_line(181, ng0);
    t1 = (t0 + 8249);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 7U, 2U, 0LL);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 8251);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)17;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 8253);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 14U, 2U, 0LL);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 8255);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB21:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 8257);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 14U, 2U, 0LL);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 5008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 8259);
    t4 = (t0 + 5008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 2U, 2U, 0LL);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 4944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB22:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4944);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    t3 = (unsigned char)1;
    goto LAB27;

LAB28:    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB30;

LAB31:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)8;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB34:    t17 = 0;

LAB37:    if (t17 < 6U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t17 = (t17 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB42:    t17 = 0;

LAB45:    if (t17 < 6U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB43;

LAB47:    t17 = (t17 + 1);
    goto LAB45;

LAB48:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB50:    t17 = 0;

LAB53:    if (t17 < 6U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB51;

LAB55:    t17 = (t17 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)10;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB58:    t17 = 0;

LAB61:    if (t17 < 6U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t17 = (t17 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(81, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)12;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB66:    t17 = 0;

LAB69:    if (t17 < 6U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB67;

LAB71:    t17 = (t17 + 1);
    goto LAB69;

LAB72:    xsi_set_current_line(83, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)16;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB74:    t17 = 0;

LAB77:    if (t17 < 6U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB75;

LAB79:    t17 = (t17 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(85, ng0);
    t7 = (t0 + 4944);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)18;
    xsi_driver_first_trans_fast(t7);
    goto LAB32;

LAB82:    t17 = 0;

LAB85:    if (t17 < 6U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t2 + t17);
    t6 = (t1 + t17);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t17 = (t17 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 4944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB89;

LAB91:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    goto LAB92;

}

static void work_a_1549293494_3040484803_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 5072);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 5072);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}


extern void work_a_1549293494_3040484803_init()
{
	static char *pe[] = {(void *)work_a_1549293494_3040484803_p_0,(void *)work_a_1549293494_3040484803_p_1,(void *)work_a_1549293494_3040484803_p_2};
	xsi_register_didat("work_a_1549293494_3040484803", "isim/MIPSMulticiclo_isim_beh.exe.sim/work/a_1549293494_3040484803.didat");
	xsi_register_executes(pe);
}
