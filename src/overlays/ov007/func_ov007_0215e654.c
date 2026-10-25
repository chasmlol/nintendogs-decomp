#include "ctx.h"
extern u8 data_ov007_02160d9c[];
extern u8 data_ov007_02160da0[];
extern u32 func_0206fbc8(u32 a);
extern s32 func_0206f998(u16 a, s32 b, void *c, s32 d);
extern s32 func_0206f940(u16 a, s32 b, void *c, s32 d, void *e, s32 f);
extern u64 func_02080858(void);

void func_ov007_0215e654(u8 *param_1)
{
    u32 uVar2;
    s32 iVar3;
    u32 *puVar4;
    u8 *obj;

    uVar2 = func_0206fbc8(*(u16 *)(param_1 + 10));
    switch (*(u32 *)(param_1 + 4)) {
    case 10:
        if (*(u8 *)(param_1 + 0x14) != 1) {
            if (*(u8 *)(param_1 + 0x14) == 2) {
                *(u32 *)(*(u8 **)data_ov007_02160d9c + 0x124) = 2;
            }
            return;
        }
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 0x124) = 1;
        return;
    case 8:
        if (*(u32 *)(param_1 + 0x14) < 1000) {
            return;
        }
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 4) = 0;
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 0x10c) = 1;
        return;
    case 3:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        obj = *(u8 **)data_ov007_02160d9c;
        iVar3 = func_0206f998(*(u16 *)(obj + 0x10a), 0, obj + 0x80, (u32)func_ov007_0215e654);
        if (iVar3 == 0) {
            *(u32 *)(*(u8 **)data_ov007_02160d9c + 4) = 2;
        }
        return;
    case 7:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        obj = *(u8 **)data_ov007_02160d9c;
        puVar4 = *(u32 **)(obj + uVar2 * 4 + 0x80);
        iVar3 = func_0206f940(*(u16 *)(obj + 0x10a), puVar4[0], obj + 0x40, puVar4[1], obj + 0xc0, (u32)func_ov007_0215e654);
        if (iVar3 == 0) {
            *(u32 *)(*(u8 **)data_ov007_02160d9c + 4) = 2;
            return;
        }
        {
            u64 t64 = func_02080858();
            *(u32 *)data_ov007_02160da0 = (u32)t64;
            *(u32 *)(data_ov007_02160da0 + 4) = (u32)(t64 >> 32);
        }
        return;
    case 5:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 4) = 0;
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 0x110) = 1;
        return;
    case 11:
        obj = *(u8 **)data_ov007_02160d9c;
        if (*(u8 *)(obj + 0x100) != 1) {
            if (*(u8 *)(obj + 0x100) == 2) {
                *(u32 *)(obj + 0x128) = 2;
            }
            return;
        }
        *(u32 *)(obj + 0x128) = 1;
        return;
    case 16:
        *(u32 *)(*(u8 **)data_ov007_02160d9c + 4) = 0;
        return;
    default:
        return;
    }
}
