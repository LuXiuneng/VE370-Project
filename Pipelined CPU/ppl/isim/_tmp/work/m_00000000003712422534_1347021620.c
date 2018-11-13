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
static const char *ng0 = "***";
static const char *ng1 = "C:/Users/jy/Desktop/20171123/test_pipe.v";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};

void M32_2(char *);
void M32_2(char *);


static void M32_2_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, ng0, 1, t0);

LAB1:    return;
}

static void I27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng1);

LAB4:    xsi_set_current_line(28, ng1);
    t2 = (t0 + 1260);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(28, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 776);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(28, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 868);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng1);
    t2 = (t0 + 1260);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(29, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 868);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void A32_1(char *t0)
{
    char t3[8];
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

LAB0:    t1 = (t0 + 1472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng1);

LAB4:    xsi_set_current_line(32, ng1);
    t2 = (t0 + 1388);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(32, ng1);
    t4 = (t0 + 776);
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
    t17 = (t0 + 776);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    xsi_set_current_line(32, ng1);
    M32_2(t0);
    goto LAB2;

LAB7:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB6;

}

static void I33_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng1);
    t2 = (t0 + 1516);
    xsi_process_wait(t2, 2500000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng1);
    xsi_vlog_stop(1);
    goto LAB1;

}

void M32_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1644);
    t2 = (t0 + 1908);
    xsi_vlogfile_monitor((void *)M32_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003712422534_1347021620_init()
{
	static char *pe[] = {(void *)I27_0,(void *)A32_1,(void *)I33_3,(void *)M32_2};
	xsi_register_didat("work_m_00000000003712422534_1347021620", "isim/_tmp/work/m_00000000003712422534_1347021620.didat");
	xsi_register_executes(pe);
}
