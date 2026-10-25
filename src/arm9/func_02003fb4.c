#include "ctx.h"
extern u8 data_0213695c[];
extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern u8 data_0214e778[];
extern u8 data_0214f138[];
extern u64 func_02080858(void);
extern void func_02080074(void);
extern u64 func_0205e068(u32 lo, u32 hi, u32 a, u32 b);
extern void func_0207e9f8(u32 a, u32 b);
extern void func_0206833c(u32 a, s32 b);

void func_02003fb4(void)
{
    s16 sVar1;
    s16 sVar2;
    u8 *p;
    u8 *iVar5;
    u64 t;
    u64 lv;
    u16 uVar8;

    sVar1 = *(s16 *)(data_0214e858 + 0x18);
    sVar2 = *(s16 *)(data_0214e77c + 0x18);
    ((void (*)(void))(*(u32 *)(data_0213695c + 4)))();
    if (*(u32 *)(data_0214e858 + 0x10) != 0) {
        ((void (*)(void *))(*(u32 *)(data_0214e858 + 0x10)))(data_0214e858);
    }
    if (*(u32 *)(data_0214e77c + 0x10) != 0) {
        ((void (*)(void *))(*(u32 *)(data_0214e77c + 0x10)))(data_0214e77c);
    }
    func_02080074();
    p = *(u8 **)data_0214e778;
    if (*(u16 *)(p + 10) == 1) {
        iVar5 = *(u8 **)(p + 0x74);
        *(vu32 *)0x04000540 = ((u32)iVar5[3] << 1) | (u32)iVar5[2];
    }
    p = *(u8 **)data_0214e778;
    t = func_02080858();
    lv = (t - *(u64 *)(p + 0xc4)) * 64000;
    *(u32 *)(p + 0xd4) = (u32)func_0205e068((u32)lv, (u32)(lv >> 32), 0x82ea, 0);
    uVar8 = 0;
    if (uVar8 < *(u16 *)(*(u8 **)data_0214e778)) {
        do {
            func_0207e9f8(1, 1);
            uVar8 = (u16)(uVar8 + 1);
        } while (uVar8 < *(u16 *)(*(u8 **)data_0214e778));
    }
    if (*(u32 *)(data_0214f138 + 0xc) != 0) {
        ((void (*)(void *))(*(u32 *)(data_0214f138 + 0xc)))(data_0214f138);
    }
    t = func_02080858();
    p = *(u8 **)data_0214e778;
    *(u64 *)(p + 0xcc) = t;
    if (sVar1 != *(s16 *)(data_0214e858 + 0x18)) {
        func_0206833c(0x0400006c, *(s16 *)(data_0214e858 + 0x18));
    }
    if (sVar2 != *(s16 *)(data_0214e77c + 0x18)) {
        func_0206833c(0x0400106c, *(s16 *)(data_0214e77c + 0x18));
    }
    ((void (*)(void))(*(u32 *)(data_0213695c + 8)))();
}
