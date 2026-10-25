#include "ctx.h"

typedef struct { u32 w[3]; } T12;
typedef struct { T12 c; s32 a; s32 b; s32 d; s32 pad; } Frame;

extern u32 data_02126728;
extern void func_0209d430(u8 *p, u32 a, s32 b);
extern s32 func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_020bfa1c(s32 *a, s32 *b, s32 c, s32 *d);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);

void func_020c7434(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4)
{
    Frame fr;
    s32 iVar3;
    s32 iVar2;
    s32 sum;
    s64 lVar1;
    s64 kv;

    fr.c = *(T12 *)(param_1 + 0xb0);
    iVar2 = *(s32 *)(param_1 + 0xb8);
    iVar3 = *(s32 *)(param_1 + 0xb0);
    if (iVar2 <= 0) {
        iVar2 = -iVar2;
    }
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    sum = iVar3 + iVar2;
    if (param_4 >= 0) {
        func_0209d430(param_1 + 400, 1, sum);
    }
    iVar2 = param_3 - 1024;
    if (iVar2 < 0) {
        iVar2 = 0;
    }
    func_02067e68((s32 *)(param_1 + 0xbc), param_2, (s32 *)(param_1 + 0xbc));
    fr.a = -*(s32 *)(param_1 + 0xbc);
    fr.b = -*(s32 *)(param_1 + 0xc0);
    fr.d = -*(s32 *)(param_1 + 0xc4);
    lVar1 = (s64)fr.a * (s64)fr.a + (s64)fr.b * (s64)fr.b + (s64)fr.d * (s64)fr.d;
    kv = *(s64 *)&data_02126728;
    if (lVar1 >= kv) {
        func_02006a30(&fr.a, &fr.a);
    }
    fr.b = 0;
    func_020bfa1c((s32 *)&fr.c, &fr.a, iVar2, (s32 *)(param_1 + 0xb0));
    func_01ff832c(164, &fr.a, (s32 *)(param_1 + 0xb0), (s32 *)(param_1 + 0xb0));
    if (*(u16 *)(param_1 + 160) == 60) {
        *(u16 *)(param_1 + 160) = 0;
    }
}
