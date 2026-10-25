#include "ctx.h"

extern u8 *data_02159028;
extern u8 data_0213e690[];
extern u8 data_02159020[];
extern u8 data_027c005c[];
extern void func_01ffe9ac(void);
extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_02077950(u8 *p);
extern u8 *func_0208f518(s32 *p);
extern u32 func_020687ac(void);
extern void func_0207c640(u32 a, s32 b);
extern void func_0207c3d4(u8 *p);
extern u32 func_02068794(void);
extern void func_0207c8bc(u32 a, s32 b);
extern void func_0207c758(u8 *p);

void func_0208e398(s32 *param_1)
{
    u8 *puVar4;
    u32 uVar5;
    u32 uVar6;
    u32 old;

    data_02159028 = func_020038b8(param_1, 0x44);
    old = *(u32 *)(data_0213e690 + 0x18);
    *(u32 *)data_02159020 = old;
    *(u32 *)(data_0213e690 + 0x18) = (u32)func_01ffe9ac;
    func_02077950(data_027c005c);
    puVar4 = func_0208f518(param_1);
    *(u8 **)data_02159028 = puVar4;
    *(u32 *)(data_02159028 + 8) = 0;
    uVar5 = func_020687ac();
    func_0207c640((u16)(uVar5 >> 17), 1);
    func_0207c3d4(data_02159028 + 12);
    uVar6 = func_02068794();
    func_0207c8bc(uVar6, 1);
    func_0207c758(data_02159028 + 52);
    *(u32 *)(data_02159028 + 0x3c) = 0;
    *(u32 *)(data_02159028 + 0x40) = 0;
}
