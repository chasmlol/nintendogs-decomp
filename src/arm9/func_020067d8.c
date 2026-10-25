#include "ctx.h"

extern u8 *data_0214f00c;
extern u8 data_0214f010[];
extern u8 *data_0214f008;
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_02002e50(s32 a);
extern void func_02003008(void);
extern void func_02003804(u8 *p);
extern void func_020037a8(u8 *p, s32 v);

void func_020067d8(void)
{
    u8 *piVar4;
    s32 iVar3;
    u32 uVar5;

    func_02003008();
    iVar3 = func_02002e60();
    piVar4 = func_02002e58(iVar3);
    func_02002e50(iVar3);
    func_02003804(piVar4);
    uVar5 = 0;
    do {
        func_020037a8(data_0214f00c, *(u16 *)(data_0214f010 + uVar5 * 8 + 4));
        uVar5 = (u16)(uVar5 + 1);
    } while (uVar5 < 8);
    uVar5 = 0;
    iVar3 = (s32)data_0214f008;
    if (uVar5 < *(u16 *)((u8 *)iVar3 + 0x10)) {
        do {
            func_020037a8(piVar4, *(u16 *)(*(u8 **)((u8 *)iVar3 + 0x30) + uVar5 * 8 + 4));
            iVar3 = (s32)data_0214f008;
            uVar5 = (u16)(uVar5 + 1);
        } while (uVar5 < *(u16 *)((u8 *)iVar3 + 0x10));
    }
}
