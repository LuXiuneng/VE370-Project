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
static const char *ng0 = "C:/Users/My/Desktop/ve370/project/pipeline/finaldraft/finaldraft/PC.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};



static void I29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1052);
    xsi_vlogvar_generic_wait_assign_value(t2, t1, 1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void A31_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 1656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1836);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 828U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1052);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1052);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 32, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1052);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 32, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 564U);
    t10 = *((char **)t4);
    t4 = (t0 + 1052);
    xsi_vlogvar_generic_wait_assign_value(t4, t10, 2, 0, 0, 32, 0LL);
    goto LAB11;

}


extern void work_m_00000000001471807360_1733832700_init()
{
	static char *pe[] = {(void *)I29_0,(void *)A31_1};
	xsi_register_didat("work_m_00000000001471807360_1733832700", "isim/_tmp/work/m_00000000001471807360_1733832700.didat");
	xsi_register_executes(pe);
}
