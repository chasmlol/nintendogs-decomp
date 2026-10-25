#include "ctx.h"

extern u8 *data_ov005_02167f0c;
extern void func_020bdd1c(u8 *p, s32 v);
extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_ov005_02166fe0(void);
extern void func_ov005_02166b80(void);
extern void func_ov005_02166a78(void);
extern void func_ov005_02167390(void);

void func_ov005_02167430(u8 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar5;
    s16 *puVar4;
    u8 *uVar3;

    func_020bdd1c(param_1, (s16)param_3);
    *(u32 *)(param_1 + 500) = (u32)func_ov005_02166fe0;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_ov005_02166b80;
    *(u32 *)(param_1 + 0x1fc) = (u32)func_ov005_02166a78;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_ov005_02167390;
    uVar3 = func_020038b8(param_2, 0x1c);
    *(u32 *)(param_1 + 0x214) = (u32)uVar3;
    puVar4 = *(s16 **)(param_1 + 0x214);
    *puVar4 = -1;
    puVar4[12] = 0;
    iVar5 = 0;
    do {
        *(u32 *)((u8 *)puVar4 + 8 + iVar5 * 4) = 0;
        iVar5 = (s16)(iVar5 + 1);
    } while (iVar5 < 4);
    data_ov005_02167f0c = param_1;
}
