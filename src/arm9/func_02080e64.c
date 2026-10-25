#include "ctx.h"

extern void func_0206c9b8(void *dst, void *src, u32 n);
extern void func_020800f0(void *p, u32 n);

u32 func_02080e64(u8 *param_1)
{
    vu16 auStack_10[4];

    if (param_1 == NULL) {
        return 0;
    }
    if (*(u16 *)(param_1 + 60) == 0) {
        return 0;
    }
    func_0206c9b8(param_1 + 80, (void *)auStack_10, 8);
    func_020800f0((void *)auStack_10, 8);
    if (*(s32 *)(param_1 + 0x44) == 0) {
        if (auStack_10[0] == 0x2348 || auStack_10[0] == 0xbd8a) {
            if (auStack_10[3] == 4) {
                return 1;
            }
        }
    }
    return 0;
}
