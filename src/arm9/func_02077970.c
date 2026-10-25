#include "ctx.h"

extern u32 data_0213e770;
extern u32 data_0213e778;
extern u32 data_0213e77c;
extern u32 data_0213e774;

extern u32 func_020781d4(u32 *p);
extern u32 func_02074184(u32 a);
extern u32 func_02074178(u32 a);
extern u32 func_0207407c(u32 a);
extern void func_02074164(u32 a, u32 b, u32 c);
extern void func_02074074(u32 a, u32 b);
extern void func_02074088(u32 a, u32 b);
extern void func_02074008(u32 a, u32 b);
extern u32 func_02078214(u32 *p);
extern void func_02073c6c(u32 a, u32 b);

u32 func_02077970(u32 *param_1)
{
    u32 uVar6;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 bVar7;
    s32 bVar8;
    s32 bVar9;

    uVar6 = *param_1;
    if (uVar6 > 0x30415642) goto L58;
    if (uVar6 >= 0x30415642) goto RET1;
    if (uVar6 > 0x30414d42) goto L48;
    if (uVar6 >= 0x30414d42) goto RET1;
    if (uVar6 != 0x30414342) goto RET0;
    goto RET1;
L48:
    if (uVar6 != 0x30415442) goto RET0;
    goto RET1;
L58:
    if (uVar6 > 0x30505442) goto L7c;
    if (uVar6 >= 0x30505442) goto RET1;
    if (uVar6 != 0x30444d42) goto RET0;
    goto MAIN;
L7c:
    if (uVar6 != 0x30585442) goto RET0;
MAIN:
    bVar7 = 1;
    bVar8 = 1;
    bVar9 = 1;
    iVar2 = func_020781d4(param_1);
    if (iVar2 != 0) {
        iVar3 = func_02074184(iVar2);
        iVar4 = func_02074178(iVar2);
        iVar5 = func_0207407c(iVar2);
        if (iVar3 != 0) {
            iVar3 = ((s32 (*)(s32, s32, s32))*(u32 *)&data_0213e770)(iVar3, 0, 0);
            if (iVar3 == 0) bVar7 = 0;
        } else {
            iVar3 = 0;
        }
        if (iVar4 != 0) {
            iVar4 = ((s32 (*)(s32, s32, s32))*(u32 *)&data_0213e770)(iVar4, 1, 0);
            if (iVar4 == 0) bVar8 = 0;
        } else {
            iVar4 = 0;
        }
        if (iVar5 != 0) {
            iVar5 = ((s32 (*)(s32, s32, s32))*(u32 *)&data_0213e778)(iVar5, *(u16 *)(iVar2 + 0x20) & 0x8000, 0);
            if (iVar5 == 0) bVar9 = 0;
        } else {
            iVar5 = 0;
        }
        if (bVar7 && bVar8 && bVar9) goto SUCC;
        ((void (*)(s32))*(u32 *)&data_0213e77c)(iVar5);
        ((void (*)(s32))*(u32 *)&data_0213e774)(iVar4);
        ((void (*)(s32))*(u32 *)&data_0213e774)(iVar3);
        return 0;
SUCC:
        func_02074164(iVar2, iVar3, iVar4);
        func_02074074(iVar2, iVar5);
        func_02074088(iVar2, 1);
        func_02074008(iVar2, 1);
    }
    if (*param_1 == 0x30444d42) {
        iVar3 = func_02078214(param_1);
        if (iVar2 != 0) func_02073c6c(iVar3, iVar2);
    }
    return 1;
RET1:
    return 1;
RET0:
    return 0;
}
