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
static const char *ng0 = "C:/Users/My/Desktop/ve370/project/pipeline/finaldraft/finaldraft/ALU_Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {32, 0};
static int ng6[] = {34, 0};
static int ng7[] = {36, 0};
static int ng8[] = {37, 0};
static int ng9[] = {42, 0};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {15U, 0U};
static unsigned int ng12[] = {3U, 0U};



static void A9_0(char *t0)
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

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1532);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t5 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(12, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 876);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(15, ng0);

LAB16:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);

LAB17:    t3 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t3, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t5 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 876);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB30:    goto LAB15;

LAB13:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB15;

LAB18:    xsi_set_current_line(17, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 876);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB30;

LAB20:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB30;

LAB22:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB30;

LAB24:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB30;

LAB26:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 876);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB30;

}


extern void work_m_00000000002518997566_3148384703_init()
{
	static char *pe[] = {(void *)A9_0};
	xsi_register_didat("work_m_00000000002518997566_3148384703", "isim/_tmp/work/m_00000000002518997566_3148384703.didat");
	xsi_register_executes(pe);
}
