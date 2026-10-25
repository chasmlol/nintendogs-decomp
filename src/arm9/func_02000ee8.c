#include "ctx.h"

extern u32 data_0214e5a4;
extern u8 data_0214e5a0[];
extern u8 data_0214e5c0[];
extern u8 data_0214e5c4[];

extern u32 func_0207ec4c(u32 a);
extern void func_02000bd4(u32 a, u32 *b);
extern void func_02000c88(u32 *a);
extern void func_020800d4(u8 *a, u32 b);
extern void func_0206c258(u32 a, u32 b, u8 *c, u32 d);
extern void func_02000c54(u32 *a);
extern void func_02000bac(u32 a, u32 *b);
extern void func_0206c804(u32 a, u8 *b, u32 c);
extern void func_020800a0(void);
extern void func_02000b48(u32 a);
extern void WaitByLoop(u32 n);

void func_02000ee8(void)
{
    u32 uVar10;
    s32 r5;
    u16 uVar1;
    s32 i;
    u8 *pd;
    vu8 *dst;
    u32 auStack_28[2];
    u32 aiStack_20[3];

    if (data_0214e5a4 != 0) {
        return;
    }
    data_0214e5a4 = 1;
    if ((*(vu16 *)0x04000300 & 1) == 0) {
        return;
    }
    uVar10 = func_0207ec4c(0x40000);
    uVar1 = *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = 1;
    func_02000bd4(*(u16 *)(data_0214e5a0 + 2), auStack_28);
    r5 = (*(vu16 *)0x04000204 & 0x8000) >> 15;
    func_02000c88(aiStack_20);
    *(vu16 *)0x04000204 = *(vu16 *)0x04000204 & ~0x8000;
    pd = (u8 *)data_0214e5c0;
    pd += 0x80;
    func_020800d4(pd, 0x40);
    pd = (u8 *)data_0214e5c0;
    pd += 0x80;
    func_0206c258(1, 0x08000080, pd, 0x40);
    *(vu16 *)0x04000204 = (*(vu16 *)0x04000204 & ~0x8000) | (r5 << 15);
    func_02000c54(aiStack_20);
    func_02000bac(*(u16 *)(data_0214e5a0 + 2), auStack_28);
    *(vu16 *)0x027ffc30 = *(u16 *)(data_0214e5c0 + 190);
    for (i = 0; i < 3; i++) {
        *(vu8 *)(0x027ffc32 + i) = *((u8 *)(data_0214e5c0 + (u32)i) + 0xb5);
    }
    dst = (vu8 *)0x027ffc30;
    *(vu16 *)(dst + 6) = *(u16 *)(data_0214e5c0 + 176);
    *(vu32 *)(dst + 8) = *(u32 *)(data_0214e5c0 + 0xac);
    func_0206c804(0xffff0020, data_0214e5c4, 156);
    func_020800a0();
    func_02000b48((((u32)data_0214e5c0 + 0xfe000000u) >> 5) << 6 | 1);
    if (*(u16 *)data_0214e5a0 != 1) {
        do {
            WaitByLoop(1);
        } while (*(u16 *)data_0214e5a0 != 1);
    }
    (void)*(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = uVar1;
    func_0207ec4c(uVar10);
}
