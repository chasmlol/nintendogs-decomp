#include "ctx.h"

extern u8 data_0214e5a0[];
extern void func_02000bd4(u32 a, u32 *b);
extern void func_02000c88(s32 *a);
extern void func_02000c54(s32 *a);
extern void func_02000bac(u32 a, u32 *b);

u32 func_02000cd0(void)
{
    u32 uVar1;
    u32 auStack_18[2];
    s32 aiStack_10[2];
    vu8 *dd;
    vu8 *io;
    u32 b2;

    uVar1 = 1;
    dd = (vu8 *)0x027ffc30;
    if (*(vu16 *)dd == 0xffff) {
        return 0;
    }
    if ((((u32)dd[5] << 30) >> 31) == 1) {
        return 0;
    }
    func_02000bd4(*(u16 *)(data_0214e5a0 + 2), auStack_18);
    func_02000c88(aiStack_10);
    io = (vu8 *)0x08000000;
    b2 = io[0xb2];
    if ((b2 == 0x96 && *(u16 *)dd != *(u16 *)(io + 0xbe)) ||
        (b2 != 0x96 && *(vu16 *)dd != *(vu16 *)0x0801fffe) ||
        (*(vu32 *)(dd + 8) != *(vu32 *)(io + 0xac) && ((((u32)dd[5] << 31) >> 31) != 0))) {
        uVar1 = 0;
        dd[5] = dd[5] | 2;
    }
    func_02000c54(aiStack_10);
    func_02000bac(*(u16 *)(data_0214e5a0 + 2), auStack_18);
    return uVar1;
}
