#include "ctx.h"

extern u8 *data_ov028_0215df90;
extern s32 func_020d60c8(u8 *p);

void func_ov028_0215d02c(u8 *param_1)
{
    s32 iVar2;
    void (*pcVar3)(u8 *);

    iVar2 = func_020d60c8(param_1);
    if (iVar2 == 0) {
        return;
    }
    switch (*(u16 *)(param_1 + 4)) {
    case 10:
        break;
    case 11:
        return;
    case 12:
        return;
    default:
        return;
    }
    iVar2 = (s32)data_ov028_0215df90;
    switch (*(s32 *)((u8 *)iVar2 + 0x20)) {
    case 1:
        if (*(s16 *)((u8 *)iVar2 + 0x2c) == 0) {
            *(u16 *)((u8 *)iVar2 + 0x2c) = 1;
        }
        return;
    case 2:
        *(u32 *)((u8 *)iVar2 + 0x30) = 1;
        iVar2 = (s32)data_ov028_0215df90;
        *(u32 *)((u8 *)iVar2 + 0x1c) = *(u32 *)((u8 *)iVar2 + 0x20);
        pcVar3 = *(void (**)(u8 *))((u8 *)data_ov028_0215df90 + 0x18);
        if (pcVar3 != NULL) {
            (*pcVar3)(param_1);
            return;
        }
        return;
    }
    return;
}
