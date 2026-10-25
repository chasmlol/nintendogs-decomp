#include "ctx.h"

extern u32 data_021593c0;
extern u32 data_02142018;
extern u32 data_0214203c;
extern void func_02088364(s32 *a);
extern void func_0205f050(u8 *buf, s32 n, u32 fmt, u32 x);
extern s32 func_02088014(s32 *a, u8 *b);
extern void func_02087e90(s32 *a, u32 p1, s32 x);
extern void func_02087fcc(s32 *a, s32 z);

typedef struct {
    s32 arr[10];
    u8 pad[28];
    u8 buf[132];
} Frame;

void func_020a355c(u32 param_1, s32 param_2)
{
    Frame f;
    u32 *puVar1;
    s32 iVar2;

    puVar1 = (u32 *)&data_021593c0;
    func_02088364(f.arr);
    func_0205f050(f.buf, 0x80, (u32)&data_0214203c, ((u32 *)&data_02142018)[param_2]);
    iVar2 = func_02088014(f.arr, f.buf);
    if (iVar2 != 0) {
        iVar2 = f.arr[9] - f.arr[8];
        func_02087e90(f.arr, param_1, iVar2);
        *puVar1 = param_1;
        *(u16 *)(puVar1 + 1) = (u16)param_2;
        puVar1[0xd] = 1;
        *(u16 *)(puVar1 + 0xf) = 0;
        puVar1[0x10] = 0;
        func_02087fcc(f.arr, 0);
    }
}
