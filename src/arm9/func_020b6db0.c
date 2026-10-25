#include "ctx.h"

extern BOOL func_020ad77c(u8 *p);
extern u32 func_0210e260(void);
extern s32 *func_0210befc(void);
extern u32 func_0209386c(s32 *p);
extern void func_020ad7c8(u8 *p, u32 n);
extern u32 func_020ad6fc(u8 *p, u32 n);
extern BOOL func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b6db0(u8 *param_1)
{
    BOOL bVar1;
    u32 uVar2;
    s32 *psVar3;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        bVar1 = func_020ad77c(param_1);
        return (u32)bVar1;
    case 1:
        uVar2 = func_0210e260();
        bVar1 = FALSE;
        if (uVar2 == 2) {
            goto set1;
        }
        if (uVar2 != 3) {
            goto chk;
        }
        psVar3 = func_0210befc();
        uVar2 = func_0209386c(psVar3);
        bVar1 = TRUE;
        goto chk;
set1:
        bVar1 = TRUE;
chk:
        if (!bVar1) {
            return uVar2;
        }
        func_020ad7c8(param_1, 13);
        uVar2 = func_020ad6fc(param_1, 2);
        return uVar2;
    case 2:
        break;
    case 3:
        break;
    case 4:
        bVar1 = func_020ad690(param_1);
        if (bVar1 == 0) {
            return bVar1;
        }
        return func_020ad8f0(param_1);
    }
}
