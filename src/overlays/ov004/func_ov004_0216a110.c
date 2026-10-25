#include "ctx.h"

s32 func_02022dd0(u8 *p);
s32 func_0203bc40(u8 *p);
s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02029504(u8 *p);
void func_02027f40(u8 *p, s32 a, s32 b);
void func_020bbc58(void);

void func_ov004_0216a110(u8 *param_1)
{
    s32 iVar3;
    s32 sVar2;

    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar3 = 0;
        goto end;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
        goto c1;
    case 0x6f:
        goto zz;
    default:
        goto c1;
    }
zz:
    iVar3 = 0;
    goto end;
c1:
    if (func_02022dd0(param_1) == 0) {
        goto c2;
    }
    sVar2 = func_0203bc40(param_1);
    iVar3 = func_0202dc50(param_1, 0, 0, sVar2, *(u8 *)(param_1 + 0xa5), 1);
    goto end;
c2:
    func_02029504(param_1);
    iVar3 = 0;
end:
    if (iVar3 != 0) {
        func_02029504(param_1);
        func_02027f40(param_1, 1, 10000);
        func_02027f40(param_1, 5, 0);
        func_020bbc58();
        return;
    }
}
