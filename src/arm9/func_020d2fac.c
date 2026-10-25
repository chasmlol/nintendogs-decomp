#include "ctx.h"

extern s32 func_020c81ac(u32 a, u32 b, u32 c);
extern void func_02067e68(u32 a, u32 b, u32 c);

u32 func_020d2fac(s32 *param_1, u32 param_2, s32 param_3)
{
    s32 one;
    s32 i;
    s32 off;
    s32 p3;
    s32 za;
    s32 zc;
    s32 z;
    u32 local_34;
    s32 local_30[3];
    s32 iVar1;
    s32 *q;

    z = 0;
    local_34 = z;
    i = z;
    if (i < param_1[0]) {
        off = z;
        p3 = param_3;
        zc = z;
        za = z;
        one = 1;
        do {
            if (*(s32 *)(param_1[3] + (u32)i * 4) != 1) {
                local_30[0] = za;
                local_30[1] = za;
                local_30[2] = za;
                iVar1 = func_020c81ac(param_1[1] + off, param_2, (u32)local_30);
                if (iVar1 != 0) {
                    func_02067e68(param_1[1] + off, (u32)local_30, param_1[1] + off);
                    q = (s32 *)(param_1[2] + off);
                    if (q[1] < 0) {
                        q[1] = zc;
                    }
                    local_34 = one;
                    *(u32 *)(param_1[2] + off) = (u32)(((s64)*(s32 *)(param_1[2] + off) * (s64)p3 + 0x800) >> 12);
                    *(u32 *)(param_1[2] + off + 8) = (u32)(((s64)*(s32 *)(param_1[2] + off + 8) * (s64)p3 + 0x800) >> 12);
                }
            }
            i = i + 1;
            off = off + 12;
        } while (i < param_1[0]);
    }
    return local_34;
}
