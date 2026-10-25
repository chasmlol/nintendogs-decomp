#include "ctx.h"

u8 *func_020038b8(u32 *p, s32 size);
void func_0208f5c4(u8 *p, s32 v);
void func_0208f544(u8 *p, void *fn);
void func_ov019_0215c000(void);

u8 *func_ov019_0215cbd0(u32 *param_1, u16 param_2)
{
    u8 *puVar2;

    puVar2 = func_020038b8(param_1, 196);
    if (puVar2 != 0) {
        func_0208f5c4(puVar2, 255);
        *(u16 *)(puVar2 + 0x1c) = param_2;
        *(u16 *)(puVar2 + 0x1e) = 0;
        *(s16 *)(puVar2 + 0x20) = -1;
        *(u16 *)(puVar2 + 0x22) = param_2;
        *(u16 *)(puVar2 + 0x24) = param_2;
        *(u16 *)(puVar2 + 0x26) = 0xe;
        *(u16 *)(puVar2 + 0x28) = 0;
        *(u32 *)(puVar2 + 0x2c) = 0;
        *(u32 *)(puVar2 + 0x30) = 0;
        *(u32 *)(puVar2 + 0x34) = 0;
        *(u32 *)(puVar2 + 0x38) = 0;
        *(u32 *)(puVar2 + 0x3c) = 0;
        *(u32 *)(puVar2 + 0x40) = 0;
        *(u32 *)(puVar2 + 0x44) = 0;
        *(u32 *)(puVar2 + 0x48) = 0;
        *(u32 *)(puVar2 + 0x4c) = 0;
        *(u32 *)(puVar2 + 0x50) = 0;
        *(u32 *)(puVar2 + 0x54) = 0;
        *(u32 *)(puVar2 + 0x58) = 0;
        *(u32 *)(puVar2 + 0x5c) = 0;
        *(u32 *)(puVar2 + 0x60) = 0;
        *(u32 *)(puVar2 + 0x64) = 0;
        *(u32 *)(puVar2 + 0x68) = 0;
        *(u32 *)(puVar2 + 0x6c) = 0;
        *(u32 *)(puVar2 + 0x70) = 0;
        *(u32 *)(puVar2 + 0x74) = 0;
        *(u32 *)(puVar2 + 0x78) = 0;
        *(u32 *)(puVar2 + 0x7c) = 0;
        *(u32 *)(puVar2 + 0x80) = 0;
        *(u32 *)(puVar2 + 0x84) = 0;
        *(u32 *)(puVar2 + 0x88) = 0;
        *(u16 *)(puVar2 + 0xbc) = 0;
        *(u16 *)(puVar2 + 0xbe) = 0;
        *(u16 *)(puVar2 + 0xc0) = 0;
        func_0208f544(puVar2, (void *)func_ov019_0215c000);
    }
    return puVar2;
}
