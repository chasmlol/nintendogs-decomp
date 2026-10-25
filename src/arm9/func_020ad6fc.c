#include "ctx.h"

void func_02003be4(void);
void func_020a1a40(s32 v);
void func_02003c10(s32 v);

void func_020ad6fc(u8 *param_1, u16 param_2)
{
    *(u16 *)(param_1 + 44) = param_2;
    if (param_2 & 1) {
        func_02003be4();
        if ((((s32)(*(vu16 *)0x04000304 & 0x8000)) >> 15) == 1) {
            func_020a1a40(40);
        } else {
            func_020a1a40(68);
        }
        return;
    }
    if (param_2 & 2) {
        func_02003c10(20);
    }
}
