#include "ctx.h"

typedef void (*ObjFn)(u8 *p, s32 x);

extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, s32 x);
extern ObjFn data_0213b40c[];

void func_020144b8(u8 *p)
{
    s32 iVar1;
    func_0201d1f0(p);
    iVar1 = 1;
    if (*(u8 *)(p + 0x93) <= 24 && ((1 << *(u8 *)(p + 0x93)) & 0x01800003) != 0) {
        iVar1 = 0;
    }
    func_02035c98(p, iVar1);
    data_0213b40c[*(s8 *)(p + 0x8c)](p, 14);
}
