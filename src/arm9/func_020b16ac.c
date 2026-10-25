#include "ctx.h"

extern u8 *data_02159444;

extern u32 func_020ad77c(u8 *p);
extern u32 func_02107f6c(void);
extern u32 func_02107eec(void);
extern void func_020ad7c8(u8 *p, int a);
extern void func_020ad6fc(u8 *p, int a);
extern void func_02107f30(void);
extern u32 func_0209f9dc(u32 a);
extern u32 func_02107f10(void);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b16ac(u8 *param_1)
{
    s16 sVar1;
    u32 iVar3;
    u32 uVar4;
    u32 t;

    sVar1 = *(s16 *)(param_1 + 0x2e);
    switch (sVar1) {
    case 0:
        return func_020ad77c(param_1);
    case 1:
        iVar3 = func_02107f6c();
        if (iVar3 == 0) {
            return iVar3;
        }
        uVar4 = func_02107eec();
        switch (uVar4) {
        case 1:
            *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) | 2;
            func_020ad7c8(param_1, 4);
            func_020ad6fc(param_1, 0);
            func_02107f30();
            return func_0209f9dc(0x4c);
        case 2:
            return uVar4;
        case 3:
            return uVar4;
        }
        return uVar4;
    case 4:
        t = func_02107f10();
        if (t == 0) {
            return t;
        }
        return func_020ad8f0(param_1);
    }
    return (u32)param_1;
}
