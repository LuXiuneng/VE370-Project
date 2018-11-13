/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/My/Desktop/project2/alucontrol.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {32, 0};
static int ng7[] = {34, 0};
static int ng8[] = {36, 0};
static int ng9[] = {37, 0};
static int ng10[] = {42, 0};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {15U, 0U};



static void C28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 1440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 964);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1800);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    t10 = (t9 + 4U);
    t11 = 15U;
    t12 = t11;
    t13 = (t4 + 4U);
    t14 = *((unsigned int *)t4);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967280U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 | t11);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967280U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 | t12);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t20 = (t0 + 1748);
    *((int *)t20) = 1;

LAB1:    return;
}

static void A29_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;

LAB0:    t1 = (t0 + 1568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1756);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);

LAB5:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t5 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 4, 0LL);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t7, t6, 2, 0, 0, 4, 0LL);
    goto LAB16;

LAB8:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 4, 0LL);
    goto LAB16;

LAB10:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t6, t3, 2, 0, 0, 4, 0LL);
    goto LAB16;

LAB12:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);

LAB17:    t3 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t3, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 4, 0LL);

LAB30:    goto LAB16;

LAB18:    xsi_set_current_line(36, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t9, t7, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t7, t3, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t7, t3, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t7, t3, 2, 0, 0, 4, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng11)));
    t7 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t7, t3, 2, 0, 0, 4, 0LL);
    goto LAB30;

}


extern void work_m_00000000003806553322_0123199990_init()
{
	static char *pe[] = {(void *)C28_0,(void *)A29_1};
	xsi_register_didat("work_m_00000000003806553322_0123199990", "isim/_tmp/work/m_00000000003806553322_0123199990.didat");
	xsi_register_executes(pe);
}
