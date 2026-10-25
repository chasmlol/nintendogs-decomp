#include "ctx.h"

extern void func_ov011_0215cb8c(void);
extern u32 func_020038b8(u8 *p, u32 v);
extern u32 func_0208d050(u8 *p, u32 a, u32 b, u32 c);
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern void func_0209c17c(u32 a, u32 b, u32 c);
extern void func_0209b18c(u32 a);

u32 *func_ov011_0215caa8(u8 *p)
{
    u32 *puVar2;
    u32 iVar1;
    vu16 z;

    puVar2 = (u32 *)func_020038b8(p, 0x908);
    *puVar2 = 0;
    puVar2[1] = func_0208d050(p, 0, 164, 0);
    *(u32 *)(puVar2[1] + 0x74) = (u32)func_ov011_0215cb8c;
    z = 0;
    func_0206c7bc(z, (u32)((u8 *)puVar2 + 8), 0x85c);
    *(u16 *)(puVar2 + 2) = 0;
    puVar2[4] = 0x1000;
    puVar2[5] = 0x1000;
    iVar1 = 0x87c;
    *(u16 *)((u8 *)puVar2 + 2048 + 100) = 0;
    *(u16 *)((u8 *)puVar2 + 2048 + 102) = 3;
    *(s16 *)((u8 *)puVar2 + 2048 + 104) = *(s16 *)((u8 *)puVar2 + 2048 + 102);
    *(u16 *)((u8 *)puVar2 + 2048 + 106) = 0;
    *(u16 *)((u8 *)puVar2 + 2048 + 108) = *(u16 *)((u8 *)puVar2 + 2048 + 106);
    *(u16 *)((u8 *)puVar2 + 2048 + 110) = 0;
    puVar2[0x21c] = 0;
    puVar2[0x21d] = 1;
    *(u16 *)((u8 *)puVar2 + 2048 + 120) = 0;
    *(u16 *)((u8 *)puVar2 + 2048 + 122) = 0;
    func_0209c17c((u32)((u8 *)puVar2 + iVar1), 0, (u32)(puVar2 + 2));
    func_0209b18c(*(u16 *)((u8 *)puVar2 + 2048 + 106));
    return puVar2;
}
