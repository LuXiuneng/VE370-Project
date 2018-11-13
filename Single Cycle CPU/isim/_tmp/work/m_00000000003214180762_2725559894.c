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
static int ng0[] = {0, 0};
static int ng1[] = {1, 0};
static const char *ng2 = "C:/Users/My/Desktop/project2/alu.v";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};



static void C27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 1704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 828U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 2336);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    t44 = (t43 + 4U);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4U);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 4294967294U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 | t45);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 4294967294U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 | t46);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t54 = (t0 + 2268);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng0)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void C28_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 828U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 2372);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    t44 = (t43 + 4U);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4U);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 4294967294U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 | t45);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 4294967294U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 | t46);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t54 = (t0 + 2276);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng0)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void C30_2(char *t0)
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

LAB0:    t1 = (t0 + 1960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1228);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2284);
    *((int *)t10) = 1;

LAB1:    return;
}

static void A31_3(char *t0)
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

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng2);
    t2 = (t0 + 2292);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng2);
    t3 = (t0 + 564U);
    t4 = *((char **)t3);

LAB5:    t3 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng7)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(38, ng2);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    t2 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 32, 0LL);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng2);
    t6 = (t0 + 652U);
    t7 = *((char **)t6);
    t6 = (t0 + 740U);
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
        goto LAB19;

LAB20:
LAB21:    t40 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t40, t9, 2, 0, 0, 32, 0LL);
    goto LAB18;

LAB8:    xsi_set_current_line(34, ng2);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 740U);
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
        goto LAB22;

LAB23:
LAB24:    t23 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t23, t9, 2, 0, 0, 32, 0LL);
    goto LAB18;

LAB10:    xsi_set_current_line(35, ng2);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 740U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t3, t9, 2, 0, 0, 32, 0LL);
    goto LAB18;

LAB12:    xsi_set_current_line(36, ng2);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 740U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t7, 32);
    t3 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t3, t9, 2, 0, 0, 32, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(37, ng2);
    t3 = (t0 + 652U);
    t6 = *((char **)t3);
    t3 = (t0 + 740U);
    t7 = *((char **)t3);
    memset(t42, 0, 8);
    t3 = (t42 + 4U);
    t8 = (t6 + 4U);
    t13 = (t7 + 4U);
    if (*((unsigned int *)t8) != 0)
        goto LAB26;

LAB25:    if (*((unsigned int *)t13) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB27;

LAB28:    memset(t41, 0, 8);
    t14 = (t41 + 4U);
    t22 = (t42 + 4U);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t42);
    t15 = (t12 & t11);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t22) != 0)
        goto LAB32;

LAB33:    t23 = (t41 + 4U);
    t17 = *((unsigned int *)t41);
    t18 = *((unsigned int *)t23);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB34;

LAB35:    t20 = *((unsigned int *)t41);
    t21 = (~(t20));
    t24 = *((unsigned int *)t23);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t23) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t41) > 0)
        goto LAB40;

LAB41:    memcpy(t9, t43, 8);

LAB42:    t44 = (t0 + 1228);
    xsi_vlogvar_generic_wait_assign_value(t44, t9, 1, 0, 0, 32, 0LL);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t9);
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
    goto LAB21;

LAB22:    t20 = *((unsigned int *)t9);
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
    goto LAB24;

LAB26:    *((unsigned int *)t42) = 1;
    *((unsigned int *)t3) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB30:    *((unsigned int *)t41) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t41) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB33;

LAB34:    t40 = ((char*)((ng1)));
    goto LAB35;

LAB36:    t43 = ((char*)((ng0)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t9, 32, t40, 32, t43, 32);
    goto LAB42;

LAB40:    memcpy(t9, t40, 8);
    goto LAB42;

}


extern void work_m_00000000003214180762_2725559894_init()
{
	static char *pe[] = {(void *)C27_0,(void *)C28_1,(void *)C30_2,(void *)A31_3};
	xsi_register_didat("work_m_00000000003214180762_2725559894", "isim/_tmp/work/m_00000000003214180762_2725559894.didat");
	xsi_register_executes(pe);
}
