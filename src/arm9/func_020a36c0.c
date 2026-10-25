#include "ctx.h"

extern u32 data_02159074;
extern u32 data_0214f130;
extern u32 data_0213248c;
extern u32 data_021325ac;
extern u32 data_0213252c;
extern u32 data_0213262c;
extern u32 data_021324ac;
extern u32 func_020a091c(u8 *p);

u8 func_020a36c0(u8 *param_1)
{
    u8 *iVar1;
    u32 uVar2;
    u8 *r0;

    r0 = (u8 *)data_0214f130 + 28;
    uVar2 = *(u16 *)((u8 *)&data_02159074 + 24);
    if (uVar2 == 0x18) {
        iVar1 = (u8 *)&data_0213248c + func_020a091c(r0) * 4;
    } else {
        switch (*(u32 *)(r0 + 4)) {
        case 3:
        case 4:
        case 5:
            iVar1 = (u8 *)&data_021325ac + uVar2 * 4;
            break;
        case 6:
        case 7:
        case 8:
            iVar1 = (u8 *)&data_0213252c + uVar2 * 4;
            break;
        case 9:
        case 10:
        case 11:
            iVar1 = (u8 *)&data_0213262c + uVar2 * 4;
            break;
        case 1:
        case 2:
        case 12:
            iVar1 = (u8 *)&data_021324ac + uVar2 * 4;
            break;
        case 0:
        default:
            iVar1 = (u8 *)&data_021325ac + uVar2 * 4;
            break;
        }
    }
    return *(u8 *)(iVar1 + (u32)param_1);
}
