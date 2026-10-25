#include "ctx.h"

extern s32 func_020ad77c(u8 *p);
extern u32 func_0210e260(void);
extern u16 *func_0210befc(void);
extern u32 func_0208fc14(u16 *p);
extern void func_020ad7c8(u8 *p, u32 a);
extern s32 func_020ad6fc(u8 *p, u32 a);
extern u32 func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern s32 func_020ad690(u8 *p);
extern s32 func_020ad8f0(u8 *p);

u32 func_020b9618(u8 *param_1)
{
    u32 r;
    u16 *psVar2;
    s32 r4;
    s32 t;

    switch (*(s16 *)(param_1 + 46)) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        r = func_0210e260();
        if (r != 3) {
            return r;
        }
        psVar2 = func_0210befc();
        r4 = 0;
        if (*psVar2 == 0) {
            r4 = 1;
        } else if (func_0208fc14(psVar2) != 0) {
            r4 = 2;
        }
        switch (r4) {
        case 0:
            func_020ad7c8(param_1, 24);
            return func_020ad6fc(param_1, 0);
        case 1:
        case 2:
            func_020ad7c8(param_1, 23);
            func_020ad6fc(param_1, 0);
            return func_02097b94(2, 0x0c1e, 0, 0, 0);
        }
        break;
    case 2:
    case 3:
        break;
    case 4:
        t = func_020ad690(param_1);
        if (t == 0) {
            return t;
        }
        return func_020ad8f0(param_1);
    }
}
