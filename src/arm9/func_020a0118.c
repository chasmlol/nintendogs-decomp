#include "ctx.h"

extern u8 data_02159198[];
extern void func_02070838(u8 *p, s32 i, s16 *q);
extern u8 *func_01ffdb08(s32 i);
extern void func_020a2fc0(u8 *p, s32 v);

void func_020a0118(void)
{
    u8 *base;
    s32 i;
    s16 *q;
    s16 s1;
    s16 s2;
    u8 *p;

    base = data_02159198;
    if (*(u16 *)(base + 0x36) != 0) {
        return;
    }
    if (*(s32 *)base != 0) {
        q = (s16 *)(base + 0x12);
        i = 0;
        do {
            s1 = *(volatile s16 *)(base + i * 2 + 0x12);
            func_02070838(base, i, q);
            s2 = *(s16 *)((u8 *)base + (i << 1) + 0x12);
            if (s1 != s2 && s2 > 0) {
                p = func_01ffdb08(i);
                if (p != NULL) {
                    func_020a2fc0(p, *(s16 *)((u8 *)base + (u32)i * 2 + 0x12) + 0x3d);
                }
            }
            i = (s16)(i + 1);
            q = q + 1;
        } while (i < 3);
    }
}
