#include "ctx.h"

extern u8 data_027c03ac[];
extern void func_020dc918(u32 p);

void func_020dc624(u32 param_1, u32 param_2, u32 *param_3, s32 *param_4)
{
    u32 *p3c;
    u32 uVar3;
    u32 p1c;
    u32 p;
    u32 n;
    s32 iVar2;
    u32 t8;
    s32 iVar6;
    u32 w;

    n = param_2;
    p3c = param_3;
    p1c = param_1;
    t8 = n - 0x80;
    uVar3 = 0;
    if (t8 != 0) {
        w = (u32)data_027c03ac;
        p = p1c;
        do {
            func_020dc918(p);
            iVar2 = *(s32 *)(w + 0xc);
            if (((iVar2 >= 30) || (iVar2 + (*(s32 *)(w + 4) + *(s32 *)(w + 8)) >= 50) ||
                 (*(s32 *)(w + 0x74) + (*(s32 *)(w + 0x7c) + *(s32 *)(w + 0x78)) >= 30)) &&
                ((*(s32 *)(w + 8) >= 64) || (iVar2 >= 64))) {
                *p3c = uVar3;
                break;
            }
            uVar3 += 0x80;
            p += 0x100;
        } while (uVar3 < t8);
    }
    w = n - 0x80;
    if (uVar3 >= w) {
        *param_4 = 0;
        return;
    }
    if (w > *p3c + 0x80) {
        t8 = p1c + w * 2;

        do {
            iVar6 = 0;
            func_020dc918(t8);
            iVar2 = 1;
            do {
                if (((s32 *)data_027c03ac)[iVar2] > 42) {
                    iVar6 = iVar6 + 1;
                    if (iVar6 > 1) {
                        break;
                    }
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < 17);
            if (iVar6 > 1) {
                if (w == n - 0x81) {
                    *param_4 = n - *p3c;
                } else {
                    *param_4 = (w - *p3c) + 0x80;
                }
                break;
            }
            w = w - 0x80;
            t8 = t8 - 0x100;
        } while (w > *p3c + 0x80);
    }
    if (w <= *p3c + 0x80) {
        *param_4 = 0;
    }
}
