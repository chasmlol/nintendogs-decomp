#include "ctx.h"

typedef struct Tri { u32 a; u32 b; u32 c; } Tri;

extern s32 data_02142c38;
extern s32 data_02142c48;
extern s32 data_02142c44;
extern s32 data_02142c3c;
extern s32 func_ov006_0216210c(void);
extern u8 *func_01ffdb08(s32 a);
extern void func_020c8e4c(u8 *p, u32 *q);

void func_020c97a4(u32 *param_1, s32 param_2)
{
    s32 iVar2;
    u32 uVar3;

    iVar2 = func_ov006_0216210c();
    switch (iVar2) {
    case 1:
    case 2:
    case 3:
        uVar3 = data_02142c38;
        func_020c8e4c(func_01ffdb08(param_2), param_1 + 3);
        *(Tri *)param_1 = *(Tri *)(param_1 + 3);
        param_1[1] = param_1[1] + data_02142c48;
        param_1[2] = param_1[2] + data_02142c44;
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        param_1[9] = uVar3;
        return;
    }
    uVar3 = data_02142c3c;
    func_020c8e4c(func_01ffdb08(param_2), param_1 + 3);
    *(Tri *)param_1 = *(Tri *)(param_1 + 3);
    param_1[1] = param_1[1] + data_02142c48;
    param_1[2] = param_1[2] + data_02142c44;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = uVar3;
}
