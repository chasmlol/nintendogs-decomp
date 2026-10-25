#include "ctx.h"

extern u8 *data_ov028_0215df14;
extern u8 data_ov028_0215df18[];
extern void func_ov028_0215c674(u8 *p);
extern u32 func_0206fbc8(u32 a);
extern s32 func_0206f998(u32 a, int b, void *c, void *d);
extern s32 func_0206f940(u32 a, u32 b, void *c, u32 d, void *e, void *f);
extern u64 func_02080858(void);

void func_ov028_0215c674(u8 *param_1)
{
    u32 uVar2;
    s32 iVar4;
    u32 *puVar3;
    u64 uVar5;

    uVar2 = func_0206fbc8(*(u16 *)(param_1 + 10));
    switch (*(u32 *)(param_1 + 4)) {
    case 8:
        if (*(u32 *)(param_1 + 0x14) < 1000) {
            return;
        }
        *(u32 *)data_ov028_0215df14 = 0;
        *(u32 *)(data_ov028_0215df14 + 0x108) = 1;
        return;
    case 3:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        iVar4 = func_0206f998(*(u16 *)(data_ov028_0215df14 + 0x106), 0, data_ov028_0215df14 + 0x7c, (void *)func_ov028_0215c674);
        if (iVar4 == 0) {
            *(u32 *)data_ov028_0215df14 = 2;
        }
        return;
    case 7:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        puVar3 = (u32 *)*(u32 *)(data_ov028_0215df14 + uVar2 * 4 + 0x7c);
        iVar4 = func_0206f940(*(u16 *)(data_ov028_0215df14 + 0x106), puVar3[0], data_ov028_0215df14 + 0x3c, puVar3[1], data_ov028_0215df14 + 0xbc, (void *)func_ov028_0215c674);
        if (iVar4 == 0) {
            *(u32 *)data_ov028_0215df14 = 2;
            return;
        }
        uVar5 = func_02080858();
        *(u64 *)data_ov028_0215df18 = uVar5;
        return;
    case 5:
        if (*(u16 *)(param_1 + 8) != 0) {
            return;
        }
        *(u32 *)data_ov028_0215df14 = 0;
        *(u32 *)(data_ov028_0215df14 + 0x10c) = 1;
        return;
    case 0x10:
        *(u32 *)data_ov028_0215df14 = 0;
        break;
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    default:
        break;
    }
}
