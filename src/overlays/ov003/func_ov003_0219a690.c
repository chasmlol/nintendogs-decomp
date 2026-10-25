#pragma avoid_byte strb
#include "ctx.h"

extern int func_02034750(int a, int b, int c);
extern void func_02027e64(int a, int b, int c);
extern int func_02027ec8(int a, int b);
extern int func_020388a8(int a, int b);
extern void func_0203e908(int a, int b);

typedef struct { u8 pad[0xb6]; u8 f; } S;

u32 func_ov003_0219a690(int param_1, int param_2)
{
    int iVar1;
    u32 flag;

    iVar1 = func_02034750(param_1, param_2, 1);
    if (iVar1 != 0) {
        if (((S *)param_1)->f & 0x10) {
            ((S *)param_1)->f &= ~0x10;
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag) {
            func_02027e64(param_1, 4, 0x32);
        }
    }
    iVar1 = func_02027ec8(param_1, 4);
    iVar1 = func_020388a8(param_1, iVar1);
    func_0203e908(param_1, (s16)(iVar1 + 0x3ba));
    return 1;
}
