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
static const char *ng0 = "C:/Users/My/Desktop/ve370/project/pipeline/finaldraft/finaldraft/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};



static void A8_0(char *t0)
{
    char t9[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 1440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 1620);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t3 = (t0 + 740U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(26, ng0);

LAB49:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = (t0 + 964);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng0);

LAB20:    xsi_set_current_line(12, ng0);
    t6 = (t0 + 564U);
    t7 = *((char **)t6);
    t6 = (t0 + 652U);
    t8 = *((char **)t6);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t8);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t6 = (t7 + 4U);
    t13 = (t8 + 4U);
    t14 = (t9 + 4U);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB21;

LAB22:
LAB23:    t40 = (t0 + 964);
    xsi_vlogvar_assign_value(t40, t9, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(14, ng0);

LAB24:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t6 + 4U);
    t8 = (t7 + 4U);
    t13 = (t9 + 4U);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB25;

LAB26:
LAB27:    t23 = (t0 + 964);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(17, ng0);

LAB28:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 964);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(20, ng0);

LAB29:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 964);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(23, ng0);

LAB30:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 564U);
    t6 = *((char **)t3);
    t3 = (t0 + 652U);
    t7 = *((char **)t3);
    memset(t42, 0, 8);
    t3 = (t42 + 4U);
    t8 = (t6 + 4U);
    t13 = (t7 + 4U);
    if (*((unsigned int *)t8) != 0)
        goto LAB32;

LAB31:    if (*((unsigned int *)t13) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB33;

LAB34:    memset(t41, 0, 8);
    t14 = (t41 + 4U);
    t22 = (t42 + 4U);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t42);
    t15 = (t12 & t11);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t22) != 0)
        goto LAB38;

LAB39:    t23 = (t41 + 4U);
    t17 = *((unsigned int *)t41);
    t18 = *((unsigned int *)t23);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB40;

LAB41:    t20 = *((unsigned int *)t41);
    t21 = (~(t20));
    t24 = *((unsigned int *)t23);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t23) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t41) > 0)
        goto LAB46;

LAB47:    memcpy(t9, t43, 8);

LAB48:    t44 = (t0 + 964);
    xsi_vlogvar_assign_value(t44, t9, 0, 0, 32);
    goto LAB19;

LAB21:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t20 | t21);
    t22 = (t7 + 4U);
    t23 = (t8 + 4U);
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t34);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    goto LAB23;

LAB25:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t20 | t21);
    t14 = (t6 + 4U);
    t22 = (t7 + 4U);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t32 = (t26 & t25);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (t29 & t28);
    t30 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB27;

LAB32:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t3) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t42) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t41) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t41) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    t40 = ((char*)((ng6)));
    goto LAB41;

LAB42:    t43 = ((char*)((ng7)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t9, 32, t40, 32, t43, 32);
    goto LAB48;

LAB46:    memcpy(t9, t40, 8);
    goto LAB48;

}


extern void work_m_00000000002952016802_0886308060_init()
{
	static char *pe[] = {(void *)A8_0};
	xsi_register_didat("work_m_00000000002952016802_0886308060", "isim/_tmp/work/m_00000000002952016802_0886308060.didat");
	xsi_register_executes(pe);
}
