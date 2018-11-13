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
static int ng0[] = {2, 0};
static int ng1[] = {0, 0};
static const char *ng2 = "C:/Users/My/Desktop/ve370/project/pipeline/finaldraft/finaldraft/Data_Memory.v";
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};



static void C14_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t26[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4U);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t12);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t43 = (t0 + 2376);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 2324);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t2) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1228);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t20 = (t0 + 1228);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1228);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t27 = (t0 + 828U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4U);
    t29 = (t28 + 4U);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 4294967295U);
    t36 = ((char*)((ng0)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_rshift(t37, 32, t26, 32, t36, 32);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t37, 32, 2);
    goto LAB9;

LAB10:    t42 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t42, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void I26_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(26, ng2);

LAB2:    xsi_set_current_line(27, ng2);
    xsi_set_current_line(27, ng2);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1412);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1412);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(27, ng2);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1228);
    t16 = (t0 + 1228);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    t19 = (t0 + 1228);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1412);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4U);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(27, ng2);
    t1 = (t0 + 1412);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1412);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_generic_wait_assign_value(t13, t12, 1, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void A30_2(char *t0)
{
    char t10[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng2);
    t2 = (t0 + 2332);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng2);

LAB5:    xsi_set_current_line(31, ng2);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng2);

LAB9:    xsi_set_current_line(32, ng2);
    t11 = (t0 + 828U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t10 + 4U);
    t13 = (t12 + 4U);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 4294967295U);
    t20 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_rshift(t21, 32, t10, 32, t20, 32);
    t22 = (t0 + 1320);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 30);
    xsi_set_current_line(33, ng2);
    t2 = (t0 + 916U);
    t3 = *((char **)t2);
    t2 = (t0 + 1228);
    t4 = (t0 + 1228);
    t11 = (t4 + 40U);
    t12 = *((char **)t11);
    t13 = (t0 + 1228);
    t20 = (t13 + 36U);
    t22 = *((char **)t20);
    t23 = (t0 + 1320);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t10, t21, t12, t22, 2, 1, t25, 30, 2);
    t26 = (t10 + 4U);
    t5 = *((unsigned int *)t26);
    t27 = (!(t5));
    t28 = (t21 + 4U);
    t6 = *((unsigned int *)t28);
    t29 = (!(t6));
    t30 = (t27 && t29);
    if (t30 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t7 = *((unsigned int *)t10);
    t8 = *((unsigned int *)t21);
    t31 = (t7 - t8);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t21), t32);
    goto LAB11;

}


extern void work_m_00000000001779268786_1124448613_init()
{
	static char *pe[] = {(void *)C14_0,(void *)I26_1,(void *)A30_2};
	xsi_register_didat("work_m_00000000001779268786_1124448613", "isim/_tmp/work/m_00000000001779268786_1124448613.didat");
	xsi_register_executes(pe);
}
