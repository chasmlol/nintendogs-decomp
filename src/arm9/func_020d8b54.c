#include "ctx.h"

extern u8 *data_02159458;
extern u32 data_02159444;
extern s32 func_01ffdb08(s32 a);
extern s32 func_020f3b00(void);
extern s32 func_02034808(s32 a);
extern s32 func_020c81d4(s32 a, s32 *b, u32 c, s32 *d);
extern void func_020c5f4c(u8 *p, s32 a);
extern void func_0209f968(u32 a, u32 b);
extern s32 func_020f3af8(void);
extern void func_020af7f4(u32 a);
extern void func_ov004_0215c614(void);
extern void func_020be7b8(u8 *p);

void func_020d8b54(u8 *param_1)
{
    s16 sVar1;
    s32 iVar3;
    s32 uVar4;
    s32 aiStack_18[3];

    sVar1 = *(s16 *)(param_1 + 0x90);
    if (sVar1 == 1) {
        goto b1;
    }
    if (sVar1 == 2) {
        return;
    }
    if (sVar1 == 4) {
        goto b4;
    }
    return;
b1:
    iVar3 = func_01ffdb08((s32)*(s16 *)(data_02159458 + 2));
    uVar4 = func_020f3b00();
    *(s32 *)(param_1 + 0xbc) = *(s32 *)(param_1 + 0xbc) - uVar4;
    if (iVar3 != 0 && func_02034808(iVar3) != 0) {
        iVar3 = func_020c81d4(iVar3, (s32 *)(param_1 + 0xbc), 0x5ec, aiStack_18);
        if (iVar3 != 0) {
            func_020c5f4c(param_1, (s32)*(s16 *)(data_02159458 + 2));
            func_0209f968(0, 150);
            return;
        }
    }
    iVar3 = func_020f3af8();
    if (*(s32 *)(param_1 + 0xbc) < -iVar3) {
        func_020af7f4(data_02159444);
        func_ov004_0215c614();
    }
    return;
b4:
    func_020be7b8(param_1);
}
