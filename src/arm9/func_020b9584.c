#include "ctx.h"

extern BOOL func_020ad77c(u32 p);
extern void func_020ad7c8(u32 p, s32 v);
extern void func_020ad6fc(u32 p, s32 v);
extern u32 func_0210e280(void);
extern BOOL func_020ad690(u32 p);
extern u32 func_020ad8f0(u32 p);
extern s32 data_02159060;

u32 func_020b9584(u32 param_1)
{
    BOOL bVar1;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        if (*(s32 *)((u8 *)data_02159060 + 0xa4) == 0) {
            return param_1;
        }
        func_020ad7c8(param_1, 0x16);
        func_020ad6fc(param_1, 0);
        return func_0210e280();
    case 2:
        break;
    case 3:
        break;
    case 4:
        bVar1 = func_020ad690(param_1);
        if (!bVar1) {
            return bVar1;
        }
        return func_020ad8f0(param_1);
    }

}
