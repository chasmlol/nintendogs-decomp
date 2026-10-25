#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern s32 func_020927e0(u8 *p);
extern s32 func_02092048(u8 *p, u32 *a, s32 *b);
extern u64 func_02080cf4(void);
extern void func_02080d08(u8 *p);
extern void func_02080d84(u8 *p);

void func_02094b54(u8 *param_1, u32 *param_2, s32 *param_3)
{
    u8 *puVar4;
    s32 iVar3;
    u64 uVar5;
    u8 abStack_68[80];

    puVar4 = param_1 + 0x7f8;
    iVar3 = func_020927e0(puVar4);
    if (iVar3 == 0) {
        goto zero;
    }
    if (func_02092048(puVar4, param_2, param_3) != 0) {
        ((s8 *)param_1)[138] = 1;
        goto join;
    }
    ((s8 *)param_1)[138] = ((s8 *)param_1)[138] + 1;
    if (((s8 *)param_1)[138] >= 3) {
        ((s8 *)param_1)[138] = 3;
    }
    goto join;
zero:
    ((s8 *)param_1)[138] = 1;
join:
    uVar5 = func_02080cf4();
    func_02080d08(abStack_68);
    {
        u32 s = (u32)uVar5;
        u32 lo;
        u32 m;
        asm { mvn m, #0 }
        asm { and lo, s, m }
        *(u32 *)puVar4 = lo;
        *(u32 *)(puVar4 + 4) = (u32)(uVar5 >> 32) & m;
    }
    func_02080d84(puVar4 + 8);
    puVar4[14] = (u8)param_3[2];
    puVar4[15] = (u8)param_3[1];
    puVar4[16] = (u8)param_3[0];
    puVar4[17] = (u8)param_2[2];
    puVar4[18] = (u8)param_2[1];
    puVar4[19] = (u8)param_2[0];
}
