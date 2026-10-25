#include "ctx.h"

extern u8 *data_0215be48;

extern void func_0211323c(u32 *p);
extern void func_02113360(u8 *p);
extern void func_0211329c(u32 *p);
extern void func_020fbee4(u32 v);
extern void func_02113d64(u8 *p);
extern void func_02113ce8(u8 *p);
extern void func_02113ae8(u8 *p);
extern void func_02113ba8(u8 *p);
extern void func_0211392c(u8 *p);
extern void func_02113744(u8 *p);
extern void func_02113588(u8 *p);
extern void func_02113b4c(u8 *p);
extern void func_021138d0(u8 *p);
extern void func_021133cc(u8 *p);

#define REG_DISPCNT (*(vu32 *)0x04000000)
#define REG_SUBDISPCNT (*(vu32 *)0x04001000)

void func_020fcbb4(void)
{
    u8 *pC;
    u8 *pB;
    u8 *piVar6;
    u8 *piVar5;
    u8 *pA;
        u8 *ob = data_0215be48;

    {
        if (NULL == ob) {
            return;
        }
        if (*(s32 *)(0xb0 + ob) != 0) {
            return;
        }
        piVar5 = 0x1dec + ob;
    }
    {
        u8 *a5 = piVar5 + 0x294;
        REG_DISPCNT = (REG_DISPCNT & 0xffcfffef) | 0x00200010;
        piVar6 = 0x1e10 + ob;
        if (*(u32 *)a5 != 0) {
            func_0211323c((u32 *)a5);
        }
    }
    if (*(u32 *)piVar5 != 0) {
        func_02113360(piVar5);
    }
    if (*(u32 *)piVar6 != 0) {
        func_0211329c((u32 *)piVar6);
    }
    {
        u8 *ob2 = data_0215be48;
        u8 *q = ob2 + 0x11000;
        if (*(s32 *)(q + 0x15c) != 0) {
            switch (*(s32 *)(ob2 + 0xac)) {
            case 1:
            case 2:
                {
                    u16 cnt = *(u16 *)(ob2 + 0x11160);
                    if (cnt < 16) {
                        *(u16 *)(ob2 + 0x11160) = cnt + *(u16 *)(ob2 + 0x11162);
                        func_020fbee4(*(u16 *)(data_0215be48 + 0x11160));
                    }
                }
                goto dflt;
            case 0:
            case 3:
                break;
            default:
                goto dflt;
            }
            {
                u16 cnt2 = *(u16 *)(ob2 + 0x11160);
                if (cnt2 != 0) {
                    *(u16 *)(ob2 + 0x11160) = cnt2 - *(u16 *)(ob2 + 0x11162);
                    func_020fbee4(*(u16 *)(data_0215be48 + 0x11160));
                }
            }
        }
    }
dflt:
    {
        u8 *ob3 = data_0215be48;
        s32 iVar2 = *(s32 *)(ob3 + 0xb8);
        if (iVar2 == 1) {
            REG_DISPCNT = REG_DISPCNT & 0xfffffbff;
            REG_SUBDISPCNT = REG_SUBDISPCNT & 0xfffffdff;
            REG_SUBDISPCNT = REG_SUBDISPCNT & 0xfffffbff;
            return;
        }
        if (iVar2 == 10) {
            return;
        }
        if (iVar2 == 0x29) {
            return;
        }
        if (*(s32 *)(ob3 + 0xa8) == 0xb) {
            return;
        }
        if (iVar2 == 0x2a) {
            u8 *q42 = ob3 + 0x1dec;
            s32 v42 = *(s32 *)(q42 + 0x7bc);
            u8 *p42 = q42 + 0x7bc;
            if (v42 == 0) {
                return;
            }
            REG_SUBDISPCNT = (REG_SUBDISPCNT & 0xffcfffef) | 0x00200010;
            func_02113d64(p42);
            return;
        }
        {
            u8 *q7 = ob3 + 0x1dec;
            pA = q7 + 0x528;
            pB = q7 + 0x7bc;
        }
        REG_SUBDISPCNT = (REG_SUBDISPCNT & 0xffcfffef) | 0x00200010;
        pC = pA + 36;
        {
            u8 *q8 = data_0215be48 + 0xc000;
            switch (*(s32 *)(q8 + 0x838)) {
            case 0:
                break;
            case 1:
                func_02113ba8(pC);
                break;
            case 2:
                func_0211392c(pC);
                break;
            case 5:
                func_02113b4c(pC);
                break;
            case 6:
                func_021138d0(pC);
                break;
            case 3:
                func_02113744(pC);
                break;
            case 4:
                func_02113588(pC);
                break;
            case 7:
                func_021133cc(pC);
                break;
            }
        }
        {
            u8 *ob4 = data_0215be48;
            u8 *q9 = ob4 + 0xc000;
            *(s32 *)(q9 + 0x838) = 0;
        }
        if (*(u32 *)pB != 0) {
            func_02113d64(pB);
        }
        {
            s32 iVar9 = *(s32 *)(data_0215be48 + 0xb8);
            switch (iVar9) {
            case 10:
                return;
            case 35:
                return;
            case 41:
                return;
            case 42:
                return;
            default:
                break;
            }
        }
        if (*(u32 *)pA != 0) {
            func_02113ce8(pA);
        }
        if (*(u32 *)pC != 0) {
            func_02113ae8(pC);
        }
        {
            u8 *ob5 = data_0215be48;
            ((void (*)(u8 *))(*(u32 *)(*(u8 **)(ob5 + 0xc0) + 0x1c)))(ob5 + 0xc4);
        }
    }
}
