#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern s32 data_02142e44;
extern s32 data_02142cc8;
extern s32 data_02142e40;

extern s32 func_020c9038(void *a);
extern void func_02006a30(void *a, void *b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_02027668(s32 a, void *b);
extern void func_02027550(s32 a, void *b);
extern s32 func_01ffdb08(s32 a);
extern s32 func_020c8eec(s32 a);
extern s32 func_02067df0(void *a, void *b);
extern void func_02067e34(void *a, void *b, void *c);
extern void func_02067e68(void *a, void *b, void *c);
extern void func_02067d04(void *a, void *b, void *c);
extern s32 func_02067898(u32 a, u32 b);
extern void func_020c8f34(void *a, void *b, void *c, void *d, void *e);
extern void func_020c8e4c(s32 a, void *b);
extern void func_020cda6c(void *a, void *b, void *c, void *d, void *e);
extern s16 func_0206824c(s32 a);
extern s32 func_02067c30(void *a);

void func_020cd4d8(s32 *param_1, s32 *param_2, u32 param_3)
{
    s32 iVar4;
    s32 iVar10;
    u32 uVar5;
    u32 uVar6;
    s32 uVar7;
    s16 sVar2;
    s32 iVar3;
    s16 h0;
    s16 h1;
    s16 h2;
    s16 h3;
    T3 v0;
    T3 v1;
    T3 v2;
    T3 v3;
    T3 v4;
    T3 v5;
    T3 v6;
    T3 v7;
    T3 v8;
    T3 v9;
    T3 v10;
    T3 v11;
    T3 v12;
    T3 v13;
    T3 v14;
    T3 v15;
    T3 v16;
    T3 v17;
    T3 v18;
    T3 v19;
    T3 v20;
    T3 v21;
    T3 v22;
    T3 v23;

    iVar3 = func_020c9038(&v0);
    if (iVar3 == 0) {
        *(T3 *)param_1 = *(T3 *)param_2;
        v22.w[0] = -param_1[0];
        v22.w[1] = 0;
        v22.w[2] = -param_1[2];
        iVar3 = data_02142e44;
        func_02006a30(&v22, &v22);
        v23.w[0] = param_1[0];
        v23.w[1] = 0;
        v23.w[2] = param_1[2];
        func_01ff832c(iVar3, &v22, &v23, param_1 + 3);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        param_1[9] = data_02142cc8;
        return;
    }
    v4 = *(T3 *)param_2;
    func_020cda6c(&v3, &v2, &v1, &v4, &v0);
    func_020c8f34(&h0, &h1, &v4, &v1, &v3);
    iVar10 = func_01ffdb08(h0);
    func_02027668(iVar10, &v5);
    iVar10 = func_01ffdb08(h1);
    func_02027668(iVar10, &v6);
    iVar10 = func_01ffdb08(h0);
    iVar4 = func_01ffdb08(h1);
    func_02027550(iVar10, &v11);
    func_02027550(iVar4, &v12);
    uVar5 = func_020c8eec(h0);
    func_01ff832c(-(uVar5 + 0x2000), &v3, &v5, &v5);
    uVar5 = func_020c8eec(h1);
    func_01ff832c(uVar5 + 0x2000, &v3, &v6, &v6);
    uVar5 = func_02067df0(&v11, &v3);
    func_01ff832c(uVar5 * 0x1e, &v3, &v5, &v5);
    uVar5 = func_02067df0(&v12, &v3);
    func_01ff832c(uVar5 * 0x1e, &v3, &v6, &v6);
    func_02067e34(&v5, &v4, &v7);
    func_02067e34(&v6, &v4, &v8);
    v9 = v7;
    v10 = v8;
    func_02006a30(&v9, &v9);
    func_02006a30(&v10, &v10);
    func_02067e68(&v9, &v10, &v13);
    func_02006a30(&v13, &v13);
    func_02067d04(&v2, &v13, &v3);
    func_02006a30(&v3, &v3);
    func_02067d04(&v3, &v2, &v1);
    uVar6 = func_02067df0(&v7, &v1);
    uVar5 = func_02067df0(&v7, &v3);
    if ((s32)uVar5 <= 0) {
        uVar5 = -uVar5;
    }
    uVar7 = func_02067898(uVar5, uVar6);
    func_020c8f34(&h2, &h3, &v4, &v1, &v2);
    iVar10 = func_01ffdb08(h2);
    func_020c8e4c(iVar10, &v14);
    iVar10 = func_01ffdb08(h3);
    func_020c8e4c(iVar10, &v15);
    uVar5 = func_020c8eec(h2);
    func_01ff832c(-uVar5, &v2, &v14, &v14);
    uVar5 = func_020c8eec(h3);
    func_01ff832c(uVar5, &v2, &v15, &v15);
    func_02067e34(&v14, &v4, &v16);
    func_02067e34(&v15, &v4, &v17);
    v18 = v16;
    v19 = v17;
    func_02006a30(&v18, &v18);
    func_02006a30(&v19, &v19);
    func_02067e68(&v18, &v19, &v20);
    func_02006a30(&v20, &v20);
    func_02067d04(&v20, &v3, &v2);
    func_02006a30(&v2, &v2);
    func_02067d04(&v3, &v2, &v1);
    uVar6 = func_02067df0(&v16, &v1);
    uVar5 = func_02067df0(&v16, &v2);
    if ((s32)uVar5 <= 0) {
        uVar5 = -uVar5;
    }
    iVar4 = func_02067898(uVar5, uVar6);
    func_02067e34(&v0, &v4, &v21);
    iVar10 = func_02067c30(&v21);
    func_01ff832c(iVar10, &v1, &v4, &v0);
    iVar10 = func_02067898(uVar7, param_3);
    if (iVar10 < iVar4) {
        iVar10 = iVar4;
    }
    sVar2 = func_0206824c(iVar10);
    param_1[9] = (s32)((((s64)sVar2) * 0x1680000 + 0x80000) >> 20);
    if (iVar3 == 1) {
        param_1[9] = data_02142e40;
    }
    *(T3 *)param_1 = v4;
    *(T3 *)(param_1 + 3) = v0;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
}
