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
static const char *ng0 = "C:/Users/My/Desktop/project2/pc.v";
static unsigned int ng1[] = {0U, 0U};



static void A28_0(char *t0)
{
    char t12[8];
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
    unsigned int t13;

LAB0:    t1 = (t0 + 1440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1620);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
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

LAB7:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4U);
    t4 = (t3 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (t5 >> 0);
    *((unsigned int *)t12) = t6;
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t2) = t8;
    t9 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t9 & 4294967295U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 4294967295U);
    t10 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t10, t12, 2, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 964);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 32, 0LL);
    goto LAB8;

}


extern void work_m_00000000002363550852_3383896982_init()
{
	static char *pe[] = {(void *)A28_0};
	xsi_register_didat("work_m_00000000002363550852_3383896982", "isim/_tmp/work/m_00000000002363550852_3383896982.didat");
	xsi_register_executes(pe);
}
