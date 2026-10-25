#include "ctx.h"

extern void *func_020038b8(s32 *p, u32 n);
extern void func_0208f5c4(u8 *p, u32 v);
extern u32 *func_02044468(void);
extern void func_0208f544(u8 *p, u32 v);
extern void func_0200c104(void);

u8 *func_0200c370(s32 *param_1)
{
    u8 *puVar4;
    u32 *piVar5;
    u32 iVar6;
    s64 lVar2;
    s32 v;
    u32 mask;
    u32 dv;

    mask = 0x0fff;
    puVar4 = (u8 *)func_020038b8(param_1, 0x38);
    func_0208f5c4(puVar4, 0xff);
    *(u16 *)(puVar4 + 0x1c) = 1;
    piVar5 = func_02044468();
    iVar6 = *piVar5 * 0x10dcd + 1;
    v = (s16)(u16)(iVar6 & mask);
    lVar2 = (s64)v * 81920 + 0x800;
    *piVar5 = iVar6;
    *(u32 *)(puVar4 + 0x20) = (u32)(lVar2 >> 12) - 0xa000;
    *(u32 *)(puVar4 + 0x24) = 0x3000;
    piVar5 = func_02044468();
    iVar6 = *piVar5 * 0x10dcd + 1;
    *piVar5 = iVar6;
    v = (s16)(u16)(iVar6 & mask);
    dv = (u32)func_0200c104;
    lVar2 = (s64)v * 81920 + 0x800;
    *(u32 *)(puVar4 + 0x28) = (u32)(lVar2 >> 12) - 0xa000;
    *(u32 *)(puVar4 + 0x2c) = 0;
    *(u32 *)(puVar4 + 0x30) = 0;
    *(u32 *)(puVar4 + 0x34) = 0;
    func_0208f544(puVar4, dv);
    return puVar4;
}
