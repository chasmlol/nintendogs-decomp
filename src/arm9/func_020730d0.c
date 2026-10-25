#include "ctx.h"

extern void func_02071aa4(void);
extern u8 *func_020718b0(s32 i);
extern void func_02070ce0(s32 i, u32 v);
extern void func_02070cc8(s32 i, u32 v);
extern s32 func_02070c28(s32 i, s32 *p, s32 v);

u32 func_020730d0(s32 *p)
{
    s32 i;
    u8 *e;
    s32 k;

    func_02071aa4();
    i = 0;
    do {
        e = func_020718b0(i);
        if (e != 0) {
            func_02070ce0(i, *e);
            func_02070cc8(i, *(u16 *)(e + 2));
            if (*(s32 *)(e + 4) != 0 && p != 0) {
                k = 0;
                if (0 < (s32)*e) {
                    do {
                        if (func_02070c28(i, p, *(s32 *)(e + 4)) == 0) {
                            return 0;
                        }
                        k = k + 1;
                    } while (k < *e);
                }
            }
        }
        i = i + 1;
    } while (i < 0x20);
    return 1;
}
