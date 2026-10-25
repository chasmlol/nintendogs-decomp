#include "ctx.h"

extern u8 *data_0215be48;
extern void func_0210ec9c(u8 *a, u8 **b, u8 *c);
extern void func_020fdc24(s32 a);

void func_020fdb24(void)
{
    u8 **piVar1;
    u8 *obj;
    u8 *puVar3;
    u8 *iv4;
    s32 iVar2;
    s32 bVar5;

    piVar1 = &data_0215be48;
    bVar5 = 0;
    obj = *piVar1;
    if (*(s32 *)(obj + 0xac) == 3 && *(s32 *)(obj + 0x4868) != 0) {
        *(u32 *)(obj + 0x4868) = 0;
        *(u32 *)(*piVar1 + 0xac) = 0;
        puVar3 = *piVar1;
        bVar5 = 1;
        *(u32 *)(puVar3 + 0xbc) = *(u32 *)(puVar3 + 0xb8);
        obj = *piVar1;
        *(u32 *)(obj + 0xb8) = 1;
        func_0210ec9c(obj, piVar1, puVar3);
    }
    iv4 = data_0215be48;
    iVar2 = *(s32 *)(iv4 + 0xb4);
    if (iVar2 == -1) {
        return;
    }
    if (*(s32 *)(iv4 + 0xb8) == 0) {
        goto check;
    }
    if (!bVar5) {
        goto body;
    }
check:
    if (iVar2 < 0) {
        return;
    }
    if (iVar2 < 0x2b) {
        func_020fdc24(iVar2);
        return;
    }
    return;
body:
    if (*(s32 *)(iv4 + 0xac) != 3) {
        *(u32 *)(iv4 + 0xac) = 3;
        *(u32 *)(data_0215be48 + 0x4884) = 1;
        *(u32 *)(data_0215be48 + 0x4868) = 0;
        if (*(s32 *)(data_0215be48 + 0xc83c) != 0) {
            *(u32 *)(data_0215be48 + 0xc844) = 1;
        }
    }
}
