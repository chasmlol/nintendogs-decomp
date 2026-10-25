#include "ctx.h"

typedef struct Frame {
    u32 l40;
    u32 l3c;
    u32 l38;
    u32 l34;
    u8 ab[2];
    u16 s2e;
    u16 s2c;
    u8 pad[10];
} Frame;

extern void func_0208a970(u32 *p);
extern s32 func_0208a798(s32 a, u8 *b, u32 *c);
extern s32 func_02072230(s32 a, u32 b, u32 c, s32 *d);

u32 func_02072160(s32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 *param_5)
{
    s32 iVar1;
    Frame F;
    u32 *pl;

    func_0208a970(&F.l38);
    F.l40 = F.l38;
    F.l3c = F.l34;
    pl = &F.l40;
    if (param_2 == 0) {
        return 0;
    }
    iVar1 = func_0208a798(param_2, F.ab, pl);
    while (iVar1 != 0) {
        if (F.ab[0] == 1 && param_3 == F.s2c) {
            iVar1 = func_02072230(param_1, F.s2e, param_4, param_5);
            if (iVar1 == 0) {
                return 0;
            }
        }
        iVar1 = func_0208a798(param_2, F.ab, &F.l40);
    }
    return 1;
}
