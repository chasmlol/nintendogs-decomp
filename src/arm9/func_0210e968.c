#include "ctx.h"

extern u32 data_0215bfbc;
extern u32 data_02148710;
extern u32 data_021486e8;
extern u32 func_0208c5b4(u8 *p);
extern void func_0205f050(u8 *b, u32 n, u32 f, u32 v, u8 *s);
extern s32 func_0207df48(u8 *b);

u32 func_0210e968(u32 param_1, u8 *param_2)
{
    u32 local_6c;
    u8 acStack_68[68];
    s32 i;
    s32 t;
    u32 *tabA;
    u8 *bp;
    u32 csz;
    u32 *tabB;
    u32 rec;
    local_6c = 0;
    if (*param_2 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        local_6c = func_0208c5b4(param_2);
    } else {
        if (**(u32 **)&data_0215bfbc != 0) {
            i = local_6c;
            tabA = &data_02148710;
            asm { ldr tabB, =data_021486e8 }
            bp = acStack_68;
            asm { mov csz, #64 }
            do {
                rec = *(u32 *)(*(u8 **)&data_0215bfbc + (u32)i * 16 + 8);
                if (rec == param_1) {
                    func_0205f050(bp, csz, (u32)tabA, tabB[i], param_2);
                    t = func_0207df48(bp);
                    if (t != 0) {
                        return t;
                    }
                }
                i = i + 1;
            } while (i < 10);
        }
    }
    return local_6c;
}
