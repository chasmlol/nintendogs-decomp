#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_020ad77c(u8 *p);
extern s32 func_020ab4c0(u8 *p);
extern void func_020ad7c8(u8 *p, u32 a);
extern u32 func_020ad6fc(u8 *p, u32 a);
extern s32 func_02003a44(void);
extern u32 func_020ad8f0(u8 *p);

u32 func_020bb5b8(u8 *param_1)
{
    s32 r;
    u32 uVar2;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        if (*(s32 *)(*(u8 **)&data_0215be48 + 0xb8) == 30) {
            return func_020ad77c(param_1);
        }
        break;
    case 1:
        r = func_020ab4c0(param_1);
        if (r != 0) {
            return r;
        }
        if (*(u32 *)(*(u8 **)&data_0215be48 + 0x1dc4) != 0xffffffff) {
            return *(u32 *)(*(u8 **)&data_0215be48 + 0x1dc4);
        }
        func_020ad7c8(param_1, 2);
        uVar2 = func_020ad6fc(param_1, 0);
        return uVar2;
    case 2:
    case 3:
        break;
    case 4:
        r = func_02003a44();
        if (r == 0) {
            return r;
        }
        return func_020ad8f0(param_1);
    }
}
