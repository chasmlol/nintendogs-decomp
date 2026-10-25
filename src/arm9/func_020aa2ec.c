#include "ctx.h"

extern s32 func_020bc3c4(void);
extern void func_02068db4(u32 a);
extern void func_02068bcc(void);
extern void func_02068edc(u32 a);
extern void func_02068384(u32 a, u32 b, u32 c);
extern void func_02068368(u32 a);
extern void func_02068e30(u32 a);
extern void func_02068bb8(void);

void func_020aa2ec(u8 *param_1)
{
    u16 uVar1;

    uVar1 = *(u16 *)(param_1 + 6);
    *(u16 *)(func_020bc3c4() + 0x26) = uVar1;
    *(u16 *)(param_1 + 6) = *(u16 *)(param_1 + 6) ^ 1;
    if (*(u16 *)(param_1 + 6) == 0) {
        *(vu16 *)0x04000304 = *(vu16 *)0x04000304 | 0x8000;
        func_02068db4(8);
        func_02068bcc();
        func_02068edc(4);
        *(vu32 *)0x04000064 = 0x80360010;
        func_02068384(1, 0, 1);
        *(vu32 *)0x04000000 = (*(vu32 *)0x04000000 & ~0x1f00u) | (*(u32 *)(param_1 + 0x10) << 8);
        *(vu16 *)0x04000008 = (*(vu16 *)0x04000008 & ~3u) | 3;
        func_02068368(3);
        *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & ~0x1f00u) | 0x1000;
        return;
    }
    *(vu16 *)0x04000304 = *(vu16 *)0x04000304 & ~0x8000u;
    func_02068e30(4);
    func_02068bb8();
    func_02068edc(8);
    *(vu32 *)0x04000064 = 0x80370010;
    func_02068384(1, 0, 1);
    *(vu32 *)0x04000000 = (*(vu32 *)0x04000000 & ~0x1f00u) | (*(u32 *)(param_1 + 0x10) << 8);
    *(vu16 *)0x04000008 = (*(vu16 *)0x04000008 & ~3u) | 3;
    func_02068368(3);
    *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & ~0x1f00u) | 0x800;
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & 0x43) | 0x4284;
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & ~3u) | 3;
    *(vu16 *)0x0400100e = *(vu16 *)0x0400100e & ~0x40u;
}
