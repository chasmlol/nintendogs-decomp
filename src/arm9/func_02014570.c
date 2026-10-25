#include "ctx.h"

typedef void (*Fn)(u8 *, u32);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 v);
extern Fn data_0213b40c[];

void func_02014570(u8 *param_1)
{
    s32 c;
    s32 iVar2;

    func_0201d1f0(param_1);
    c = *(s8 *)(param_1 + 0x93);
    if (c != 0 && c != 1 && c != 23 && c != 24) {
        *(u16 *)(param_1 + 0x12e) = 0x2000;
    }
    iVar2 = 1;
    if (param_1[0x93] <= 24 && ((1 << param_1[0x93]) & 0x1800003) != 0) {
        iVar2 = 0;
    }
    func_02035c98(param_1, iVar2);
    data_0213b40c[*(s8 *)(param_1 + 0x8c)](param_1, 12);
}
