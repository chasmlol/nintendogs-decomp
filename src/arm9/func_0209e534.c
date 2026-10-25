#include "ctx.h"

extern u32 data_02159198;
extern void func_0207307c(u8 *o, u32 v);
extern void func_02070800(u8 *o, u32 a, s32 b);

typedef struct {
    u8 pad[0x30];
    s16 s30;
    u8 pad2[0xa];
    s32 s3c;
    s32 s40;
} Obj;

void func_0209e534(s16 param_1)
{
    s32 r12;
    s32 iVar1;

    r12 = param_1 * 300;
    iVar1 = r12 << 8;
    ((Obj *)(u8 *)&data_02159198)->s30 = param_1;
    ((Obj *)(u8 *)&data_02159198)->s3c = iVar1 / 127;
    func_0207307c((u8 *)&data_02159198, 0x41);
    func_02070800((u8 *)&data_02159198, 15, ((Obj *)(u8 *)&data_02159198)->s30);
    ((Obj *)(u8 *)&data_02159198)->s40 = 1;
}
