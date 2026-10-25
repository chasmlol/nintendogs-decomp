#include "ctx.h"
typedef volatile s16 vs16;
extern u8 data_02159444[];
extern u8 data_0214efdc[];
extern u8 data_0215be48[];
extern void func_020ad77c(u8 *p);
extern void func_020ad7c8(u8 *p, s32 a);
extern void func_020ad6fc(u8 *p, s32 a);
extern void func_0209fa4c(s32 a);
extern void func_020a1a40(s32 a);
extern void func_0210828c(void);
extern s32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);

void func_020b84cc(u8 *param_1)
{
    s32 bVar2;
    s16 sVar1;
    s32 iVar3;
    s32 cnt;

    sVar1 = *(s16 *)(param_1 + 0x2e);
    bVar2 = 0;
    if (sVar1 == 0) {
        goto c0;
    }
    if (sVar1 == 1) {
        goto c1;
    }
    if (sVar1 == 4) {
        goto c4;
    }
    return;
c0:
    func_020ad77c(param_1);
    *(u16 *)(param_1 + 0x30) = 0;
    return;
c1:
    {
        if (*(s16 *)(param_1 + 0x30) < 3000) {
            *(s16 *)(param_1 + 0x30) = (s16)(*(s16 *)(param_1 + 0x30) + 1);
        }
        cnt = *(vs16 *)(param_1 + 0x30);
        if (cnt >= 120) {
            if ((*(u16 *)(*(u8 **)data_02159444 + 132) & 2) != 0) {
                bVar2 = 1;
            } else if ((u16)(*(u16 *)data_0214efdc & 0xc0b) != 0) {
                bVar2 = 1;
            }
        }
        if (cnt >= 3000) {
            bVar2 = 1;
        }
        if (bVar2 != 0) {
            func_020ad7c8(param_1, 2);
            func_020ad6fc(param_1, 0);
            *(u16 *)(param_1 + 0x30) = 0;
            func_0209fa4c(120);
            func_020a1a40(0x40);
            func_0210828c();
        }
        return;
    }
c4:
    bVar2 = func_020ad690(param_1);
    if (bVar2 != 0) {
        iVar3 = 0;
        if (*(s32 *)(*(u8 **)data_0215be48 + 0xb8) == 3) {
            iVar3 = *(s32 *)(*(u8 **)data_0215be48 + 0x3c4);
        }
        if (iVar3 != 0) {
            func_020ad8f0(param_1);
        }
    }
}
