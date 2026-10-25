#include "ctx.h"
#pragma opt_lifetimes off

extern u32 data_0215be48;
extern void *func_01ffdb08(s32 x);
extern s32 func_020280f4(void *p);
extern s32 func_021210c8(void *p, s32 v);
extern s32 func_02024114(void *p, s32 v);

s32 func_02125958(s32 param_1)
{
    s32 r;
    void *obj;
    u8 *sub;
    u8 *base;
    s32 fv;
    s32 pc;
    pc = param_1;
    base = *(u8 **)&data_0215be48;
    fv = *(u32 *)(base + 0x1dd4);
    sub = base + 196;
    obj = func_01ffdb08((s16)fv);
    r = 0;
    switch (pc) {
    case 0x30002:
        if (obj) {
            r = func_020280f4(obj);
        }
        break;
    case 0x3000d:
        r = func_021210c8(sub, *(s32 *)(sub + 0x8c));
        r = func_02024114(obj, *(s16 *)(sub + 0x68 + r * 2));
        r = r + 0x12;
        break;
    }
    return r;
}
