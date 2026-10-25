#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159060;
extern s32 func_02111b58(void);
extern void func_020fcf48(void);
extern void func_02111b3c(void);
extern u8 func_020039f4(void);

void func_0211ece4(void)
{
    u8 bVar1;
    s32 iVar2;

    switch (*(s32 *)(*(u8 **)&data_0215be48 + 0xbc)) {
    case 0x18:
        iVar2 = func_02111b58();
        if (iVar2 == 0) {
            return;
        }
        func_020fcf48();
        func_02111b3c();
        return;
    case 0x1a:
        iVar2 = func_02111b58();
        if (iVar2 == 0) {
            return;
        }
        bVar1 = 1;
        if (*(s16 *)(*(u8 **)&data_02159060 + 0x6c) != 1 && *(s16 *)(*(u8 **)&data_02159060 + 0x6c) != 8) {
            bVar1 = 0;
        }
        if (bVar1) {
            return;
        }
        func_020fcf48();
        func_02111b3c();
        return;
    case 0x19:
    case 0x1b:
        break;
    default:
        goto LAB_def;
    }
    iVar2 = func_02111b58();
    if (iVar2 == 0) {
        return;
    }
    bVar1 = func_020039f4();
    if (bVar1 == 0) {
        return;
    }
    func_020fcf48();
    func_02111b3c();
    return;
LAB_def:
    func_020fcf48();
    func_02111b3c();
}
