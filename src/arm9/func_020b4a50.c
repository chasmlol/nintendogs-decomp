#include "ctx.h"

extern u8 *data_02159060;
extern u32 func_020ad77c(u8 *p);
extern void func_020ad7c8(u8 *p, s32 v);
extern u32 func_020ad6fc(u8 *p, s32 v);
extern u32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b4a50(u8 *param_1)
{
    s32 sVar1;
    u32 r;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        if (*(u32 *)(data_02159060 + 0xa4) == 0) {
            goto done;
        }
        sVar1 = *(s16 *)(data_02159060 + 0x9a);
        if (sVar1 == 0) {
            goto c0;
        }
        if (sVar1 != 1) {
            goto done;
        }
        goto c1;
    c0:
        func_020ad7c8(param_1, 42);
        return func_020ad6fc(param_1, 0);
    c1:
        func_020ad7c8(param_1, 40);
        return func_020ad6fc(param_1, 1);
    case 2:
        break;
    case 3:
        break;
    case 4:
        r = func_020ad690(param_1);
        if (r == 0) {
            return r;
        }
        return func_020ad8f0(param_1);
    }
done:
    ;
}
