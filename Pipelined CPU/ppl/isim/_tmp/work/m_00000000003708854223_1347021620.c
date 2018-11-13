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
static const char *ng0 = "C:/Users/My/Desktop/ve370/project/pipeline/finaldraft/finaldraft/test_pipe.v";
static const char *ng1 = "===============================================";
static int ng2[] = {1, 0};
static const char *ng3 = "Time: %d, CLK = %d, PC = %h";
static int ng4[] = {50, 0, 0, 0};
static int ng5[] = {0, 0};



static void I27_0(char *t0)
{
    char t5[16];
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 1524U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(28, ng0);
    xsi_vlogfile_write(1, 0, ng1, 1, t0);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1440);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 864);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 956);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = xsi_vlog_time(t5, 1000000.000000000, 1000.000000000000);
    t3 = ((char*)((ng4)));
    xsi_vlog_unsigned_divide(t6, 64, t5, 64, t3, 32);
    t4 = (t0 + 864);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t0 + 640U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, ng3, 4, t0, (char)118, t6, 64, (char)118, t8, 1, (char)118, t10, 32);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1440);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 956);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void A34_1(char *t0)
{
    char t3[8];
    char t18[16];
    char t19[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 1652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);

LAB4:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1568);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 864);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB6:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 864);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = xsi_vlog_time(t18, 1000000.000000000, 1000.000000000000);
    t4 = ((char*)((ng4)));
    xsi_vlog_unsigned_divide(t19, 64, t18, 64, t4, 32);
    t5 = (t0 + 864);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t0 + 640U);
    t17 = *((char **)t8);
    xsi_vlogfile_write(1, 0, ng3, 4, t0, (char)118, t19, 64, (char)118, t7, 1, (char)118, t17, 32);
    goto LAB2;

LAB7:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB6;

}

static void I35_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1780U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1696);
    xsi_process_wait(t2, 2500000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(1, 0, ng1, 1, t0);
    xsi_set_current_line(35, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003708854223_1347021620_init()
{
	static char *pe[] = {(void *)I27_0,(void *)A34_1,(void *)I35_2};
	xsi_register_didat("work_m_00000000003708854223_1347021620", "isim/_tmp/work/m_00000000003708854223_1347021620.didat");
	xsi_register_executes(pe);
}
