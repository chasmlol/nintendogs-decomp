#include "ctx.h"

typedef struct {
    u16 a;
    u8 pad[14];
    u16 b;
} Obj;

extern u32 data_02150e30;
extern void func_020699dc(u32 v);

void func_020693ec(u32 param_1)
{
    u32 uVar2;
    u32 uVar1;
    u32 nv;

    uVar2 = ((Obj *)(u8 *)&data_02150e30)->a;
    nv = ~param_1;
    uVar1 = ((Obj *)(u8 *)&data_02150e30)->b;
    ((Obj *)(u8 *)&data_02150e30)->a = (nv & (uVar2 | uVar1));
    ((Obj *)(u8 *)&data_02150e30)->b = param_1;
    if (0 == param_1) goto zero;
    if (0x20 == param_1) goto b20;
    if (param_1 != 0x40) goto done;
    goto b40;
b20:
    *(u32 *)0x04000000 = *(u32 *)0x04000000 | 0x80000000;
    *(u8 *)0x04000245 = 0x85;
    goto done;
b40:
    *(u32 *)0x04000000 = *(u32 *)0x04000000 | 0x80000000;
    *(u8 *)0x04000246 = 0x85;
    goto done;
zero:
    *(u32 *)0x04000000 = *(u32 *)0x04000000 & 0x7fffffff;
done:
    func_020699dc(*(u16 *)(u8 *)&data_02150e30);
}
