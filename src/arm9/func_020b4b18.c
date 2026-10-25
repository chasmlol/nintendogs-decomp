#include "ctx.h"

extern BOOL func_020ad77c(u8 *p);
extern s32 func_ov004_0215c87c(void);
extern void func_020ad7c8(u8 *p, u32 n);
extern u32 func_020ad6fc(u8 *p, u32 n);
extern u8 *func_ov004_0215ca68(void);
extern BOOL func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b4b18(u8 *param_1)
{
    BOOL bVar1;
    s32 iVar2;
    u8 *puVar3;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        bVar1 = func_020ad77c(param_1);
        return (u32)bVar1;
    case 1:
        iVar2 = func_ov004_0215c87c();
        if (iVar2 != 0) {
            func_020ad7c8(param_1, 41);
            return func_020ad6fc(param_1, 1);
        }
        puVar3 = func_ov004_0215ca68();
        if (puVar3 != 0) {
            return (u32)puVar3;
        }
        *(s16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 48) = 0;
        *(u16 *)(param_1 + 256) = 7;
        return (u32)(param_1 + 256);
    case 2:
        break;
    case 3:
        break;
    case 4:
        bVar1 = func_020ad690(param_1);
        if (bVar1 == 0) {
            return (u32)bVar1;
        }
        return func_020ad8f0(param_1);
    }
}
