#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern s32 *func_020038b8(s32 *a, s32 b);
extern u8 *func_ov019_0215ccd8(u8 *a);
extern u8 *func_ov019_021611a0(void);

typedef struct { u32 w[3]; } T3;

void func_ov019_0215f790(u8 *param_1, s32 *param_2)
{
    s32 iVar5;
    s32 iVar6;
    s32 iVar2;
    s32 iVar4;
    s32 iVar8;
    s16 sVar3;
    s32 nx;
    u8 *pt;
    u8 *pp;

    pp = param_1;
    *(s32 *)(pp + 0xac) = (s32)func_020038b8(param_2, 0x150);
    if (*(s32 *)(pp + 0xac) != 0) {
        iVar5 = 0;
        iVar6 = 0;
        do {
            iVar4 = *(s32 *)(pp + 0xac);
            *(s32 *)(iVar4 + iVar6) = 0;
            iVar4 = iVar4 + iVar6;
            *(s32 *)(iVar4 + 4) = 0;
            *(s32 *)(iVar4 + 8) = -32768;
            iVar4 = *(s32 *)(pp + 0xac) + 0x18;
            *(s32 *)(iVar4 + iVar6) = 0;
            iVar4 = iVar4 + iVar6;
            *(s32 *)(iVar4 + 4) = 0;
            *(s32 *)(iVar4 + 8) = 0;
            iVar6 = iVar6 + 12;
            iVar5 = (s16)(iVar5 + 1);
        } while (iVar5 < 2);
        iVar2 = 0;
        iVar6 = iVar2;
        do {
            iVar5 = *(s32 *)(pp + 0xac) + 0x30;
            *(s32 *)(iVar5 + iVar6) = 0;
            iVar5 = iVar5 + iVar6;
            *(s32 *)(iVar5 + 4) = 0;
            *(s32 *)(iVar5 + 8) = iVar2 * -4096;
            iVar5 = *(s32 *)(pp + 0xac) + iVar6;
            *(T3 *)(iVar5 + 0x90) = *(T3 *)(iVar5 + 0x30);
            nx = iVar2 + 1;
            iVar5 = *(s32 *)(pp + 0xac) + 0xf0;
            iVar2 = (s16)nx;
            *(s32 *)(iVar5 + iVar6) = 0;
            iVar5 = iVar5 + iVar6;
            *(s32 *)(iVar5 + 4) = 0;
            *(s32 *)(iVar5 + 8) = 0;
            iVar6 = iVar6 + 12;
        } while (iVar2 < 8);
    }
    pt = func_ov019_0215ccd8(pp);
    if (pt != 0) {
        *(s32 *)(pt + 0x24) = 0x100;
        *(s32 *)(pt + 0x28) = 0x100;
        *(s32 *)(pt + 0x2c) = 0xcd0;
    }
    pt = func_ov019_0215ccd8(pp);
    if (pt != 0) {
        *(u16 *)(pt + 0x20) = *(u16 *)(pt + 0x20) & ~1;
        pt[1] = (u8)(pt[1] & ~1);
    }
    iVar8 = (s16)(*(s16 *)(pp + 0x1c) + 1);
    if (iVar8 >= 7) {
        return;
    }
    do {
        if (iVar8 < 0 || iVar8 >= 50) {
            iVar2 = 0;
        } else {
            iVar4 = (s32)func_ov019_021611a0();
            iVar2 = *(s32 *)(iVar4 + iVar8 * 4 + 4);
        }
        if (iVar2 != 0) {
            if (iVar2 != 0) {
                sVar3 = *(s16 *)(iVar2 + 0x24);
            } else {
                sVar3 = -1;
            }
            if (sVar3 != 6) {
                *(s16 *)(iVar2 + 0x28) = 6;
                *(s16 *)(iVar2 + 0x1e) = 1;
            }
        }
        iVar8 = (s16)(iVar8 + 1);
    } while (iVar8 < 7);
}
