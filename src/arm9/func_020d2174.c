#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02159468;
extern u32 data_02142ea4;

typedef volatile s16 vs16;

s32 func_020c8cd0(void);
void func_020cf9c8(s32 a, s32 b, s32 c, s32 d);
void func_02044ca0(s32 a);

void func_020d2174(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar4;
    s32 iVar3;
    s16 sVar1;
    s32 bVar2;

    iVar4 = *(s16 *)(*(u8 **)&data_02159444 + 0x7a);
    if (iVar4 < 0 || *(s16 *)(*(u8 **)&data_02159468 + 0x20) <= iVar4) {
        iVar4 = 0;
    } else {
        iVar4 = *(s32 *)(*(u8 **)&data_02159468 + iVar4 * 4 + 4);
    }
    iVar3 = func_020c8cd0();
    if (((u16)(s16)(*(s16 *)(iVar4 + 0x90) - 2)) <= 1) {
        *(s32 *)((u8 *)&data_02142ea4 + 4) = 0;
        func_020cf9c8((s32)param_1, 16, -1, 0);
        return;
    }
    if (*(s16 *)(iVar4 + 0x90) == 6) {
        sVar1 = *(s16 *)(iVar4 + 0x98);
        if (*(s32 *)((u8 *)&data_02142ea4 + 4) != 0) {
            func_020cf9c8((s32)param_1, 26, sVar1, 0);
            return;
        }
        func_02044ca0(0);
        if (sVar1 != -1) {
            func_020cf9c8((s32)param_1, 25, sVar1, 0);
        }
        if (8 < *(s32 *)(*(u8 **)&data_02159444 + 0x98)) {
            if (0x50 < *(s16 *)(*(u8 **)&data_02159444 + 0x88)) {
                *(s32 *)((u8 *)&data_02142ea4 + 4) = 1;
            }
            return;
        }
        return;
    }
    if (iVar3 != -1) {
        if (iVar3 == *(s16 *)(iVar4 + 0x98)) {
            func_020cf9c8((s32)param_1, 18, *(s16 *)(iVar4 + 0x98), 0);
            return;
        }
        return;
    }
    sVar1 = *(s16 *)(iVar4 + 0x92);
    if (sVar1 != 3) goto na;
    if (*(vs16 *)((u8 *)iVar4 + 0x90) == 1) {
        bVar2 = 1;
        goto ja;
    }
na:
    bVar2 = 0;
ja:
    if (bVar2 != 0) goto yes;
t2:
    if (sVar1 == 3) goto b1;
    if (sVar1 == 6) goto b1;
    if (sVar1 != 8) goto t3;
b1:
    if (*(s16 *)((u8 *)iVar4 + 0x90) != 4) goto t3;
    bVar2 = 1;
    goto join;
t3:
    if (sVar1 != 5) goto t4;
    if (*(s16 *)((u8 *)iVar4 + 0x90) != 7) goto t4;
    bVar2 = 1;
    goto join;
t4:
    if (sVar1 != 5) goto no;
    if (*(s16 *)((u8 *)iVar4 + 0x90) == 1) {
        bVar2 = 1;
        goto join;
    }
no:
    bVar2 = 0;
join:
    if (bVar2 == 0) {
        goto cd;
    }
yes:
    func_020cf9c8((s32)param_1, 21, -1, param_3);
    *(s32 *)&data_02142ea4 = (s16)param_2;
    return;
cd:
    iVar4 = *(s32 *)&data_02142ea4;
    *(s32 *)&data_02142ea4 = iVar4 - 1;
    if (iVar4 - 1 > 0) {
        return;
    }
    func_020cf9c8((s32)param_1, 2, -1, 0);
    *(s32 *)&data_02142ea4 = -1;
    return;
}
