#include "ctx.h"

typedef struct V3 {
    u32 a;
    u32 b;
    u32 c;
} V3;

extern u32 *data_0214f464;
extern s32 func_020f5220(void);
extern void func_020f3bdc(s32);
extern s32 func_02035770(int, int);
extern s32 func_02035744(int, int);
extern void func_0202b2c0(int, V3 *);
extern s32 func_0203567c(int);
extern void func_0203e8cc(int, int, int);
extern void func_0202fd38(int);

void func_ov004_021650f0(int param_1)
{
    V3 loc;
    u32 uVar2;
    s32 iVar1;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    loc = *(V3 *)(param_1 + 0x490);
    iVar1 = func_02035770(param_1, 12);
    if (iVar1 != 0) {
        iVar1 = func_02035744(param_1, 18);
        if (iVar1 != 0) {
            uVar2 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar2;
            if ((u16)((((u32)(u16)uVar2) * 0xb4u) >> 16) == 0) {
                func_0202b2c0(param_1, &loc);
                return;
            }
        }
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 0, 0x138);
        func_0202fd38(param_1);
    }
}
