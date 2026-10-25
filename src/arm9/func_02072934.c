#include "ctx.h"

extern u32 *func_02071978(u32 a);
extern u32 func_02071778(u32 a);
extern u32 func_02072664(u32 a, s32 *b, u32 c);
extern u32 *func_02071914(u32 a);
extern s32 func_0207288c(u32 a, u32 b, s32 *c, u32 d, u32 *e);
extern s32 func_02072160(u32 a, u32 b, u32 c, u32 d, s32 *e);
extern void func_0208ae84(u32 a, u32 b, u32 c);

typedef struct { u32 f : 24; u32 g : 8; } Pk24;

u32 func_02072934(u32 param_1, u32 param_2, s32 *param_3, u32 param_4, u32 *param_5)
{
    u32 l4 = param_4;
    u32 l2 = param_2;
    s32 *l3 = param_3;
    u32 *puVar1;
    u32 uVar2;
    s32 uVar7;
    u32 flag;
    u32 *puVar4;
    u32 uVar3;
    s32 iVar6;
    u32 aux[2];

    puVar1 = func_02071978(param_1);
    if (puVar1 == 0) {
        return 4;
    }
    if ((l2 & 2) == 0) {
        goto c5c;
    }
    uVar2 = func_02072664(*puVar1, l3, l4);
    if (uVar2 != 0) {
        goto prep;
    }
    return 8;
c5c:
    uVar2 = func_02071778(*puVar1);
prep:
    flag = l2 & 4;
    uVar7 = 0;
loop:
    uVar3 = *(u16 *)((u8 *)puVar1 + (u32)uVar7 * 2 + 4);
    if (uVar3 == 0xffff) {
        goto next;
    }
    puVar4 = func_02071914(uVar3);
    if (puVar4 == 0) {
        return 5;
    }
    iVar6 = func_0207288c(*(u16 *)((u8 *)puVar1 + ((u32)uVar7 << 1) + 4), l2, l3, l4, aux);
    if (iVar6 != 0) {
        return iVar6;
    }
    if ((*(u8 *)((u8 *)puVar4 + 3) & 1) == 0) {
        goto L114;
    }
    if (flag == 0) {
        goto L114;
    }
    iVar6 = func_02072160(aux[0], uVar2, uVar7, ((Pk24 *)puVar4)->f, l3);
    if (iVar6 == 0) {
        return 9;
    }
L114:
    if (uVar2 == 0) {
        goto next;
    }
    if (aux[0] == 0) {
        goto next;
    }
    func_0208ae84(uVar2, uVar7, aux[0]);
next:
    uVar7 = uVar7 + 1;
    if (uVar7 < 4) {
        goto loop;
    }
    if (param_5 != 0) {
        *param_5 = uVar2;
    }
    return 0;
}
