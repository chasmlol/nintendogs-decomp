#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern s32 *data_02157cc8;
extern u8 data_0213ec80[];
extern u8 data_0213ec94[];
extern u8 data_0213ecac[];
extern s32 *func_020038b8(s32 *a, s32 b);
extern s32 func_0208843c(s32 a, s32 b);
extern void func_02088364(s32 *a);
extern s32 func_02088014(s32 *a, u8 *b);
extern void func_02087e90(s32 *a, s32 b, s32 c);
extern void func_02087fcc(s32 *a);

void func_0208c3f4(s32 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;
    u8 *pcVar4;
    u32 name;
    s32 aiStack_98[17];
    s32 aiStack_54[17];

    piVar1 = func_020038b8(param_1, 0x1c);
    if (piVar1 == 0) {
        return;
    }
    iVar2 = func_0208843c(0, 0);
    iVar3 = (s32)func_020038b8(param_1, iVar2);
    piVar1[0] = iVar2;
    piVar1[1] = iVar3;
    *(u16 *)(piVar1 + 2) = 0xffff;
    *(u16 *)((u8 *)piVar1 + 10) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    func_0208843c(piVar1[1], piVar1[0]);
    name = (u32)data_0213ec80;
    func_02088364(aiStack_98);
    func_02088014(aiStack_98, (u8 *)name);
    iVar3 = aiStack_98[9] - aiStack_98[8];
    iVar2 = (s32)func_020038b8(param_1, iVar3);
    func_02087e90(aiStack_98, iVar2, iVar3);
    piVar1[5] = iVar2;
    func_02087fcc(aiStack_98);
    func_02088364(aiStack_54);
    iVar2 = func_02088014(aiStack_54, data_0213ec94);
    if (iVar2 == 0) {
        goto zarm;
    }
    {
        iVar2 = aiStack_54[9] - aiStack_54[8];
        pcVar4 = (u8 *)func_020038b8(param_1, iVar2);
        func_02087e90(aiStack_54, (s32)pcVar4, iVar2);
        func_02087fcc(aiStack_54);
        piVar1[6] = (s32)pcVar4;
        for (; (*pcVar4 != '\r' && (*pcVar4 != '\0')); pcVar4 = pcVar4 + 1) {
        }
        *pcVar4 = 0;
    }
    goto done;
zarm:
    piVar1[6] = (s32)data_0213ecac;
done:
    data_02157cc8 = piVar1;
}
