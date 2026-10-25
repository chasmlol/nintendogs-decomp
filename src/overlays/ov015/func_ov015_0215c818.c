#include "ctx.h"

typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 data_ov015_0215cae4;
extern s32 data_ov015_0215cac8[];
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_01ffe474(u8 *p);

void func_ov015_0215c818(u8 *param_1)
{
    s32 stk[18];
    s32 t5c, t58, t54, t50, t4c, t48, t44, t40, t3c;

    if (data_ov015_0215cae4 != 0) {
        *(V3 *)&stk[3] = *(V3 *)data_ov015_0215cac8;
        func_02067e68((s32 *)(param_1 + 0x30), &stk[3], &stk[3]);
        func_02067e34((s32 *)(data_ov015_0215cae4 + 0x30), &stk[3], &stk[0]);
        func_01ff832c(0x40, &stk[0], (s32 *)(param_1 + 0x30), (s32 *)(param_1 + 0x30));
    }
    if (data_ov015_0215cae4 != 0) {
        t5c = *(s32 *)(param_1 + 0x5c);
        t58 = *(s32 *)(param_1 + 0x58);
        t54 = *(s32 *)(param_1 + 0x54);
        stk[6] = t54;
        stk[7] = t58;
        stk[8] = t5c;
        t50 = *(s32 *)(param_1 + 0x50);
        t4c = *(s32 *)(param_1 + 0x4c);
        t48 = *(s32 *)(param_1 + 0x48);
        stk[9] = t48;
        stk[10] = t4c;
        stk[11] = t50;
        t44 = *(s32 *)(param_1 + 0x44);
        t40 = *(s32 *)(param_1 + 0x40);
        t3c = *(s32 *)(param_1 + 0x3c);
        stk[12] = t3c;
        stk[13] = t40;
        stk[14] = t44;
        func_02067e34((s32 *)(data_ov015_0215cae4 + 0x30), (s32 *)(param_1 + 0x30), &stk[15]);
        if (stk[15] != 0 || stk[16] != 0 || stk[17] != 0) {
            *(V3 *)&stk[6] = *(V3 *)&stk[15];
            func_02006a30(&stk[6], &stk[6]);
            func_02067d04(&stk[9], &stk[6], &stk[12]);
        }
        *(s32 *)(param_1 + 0x3c) = stk[12];
        *(s32 *)(param_1 + 0x40) = stk[13];
        *(s32 *)(param_1 + 0x44) = stk[14];
        *(s32 *)(param_1 + 0x48) = stk[9];
        *(s32 *)(param_1 + 0x4c) = stk[10];
        *(s32 *)(param_1 + 0x50) = stk[11];
        *(s32 *)(param_1 + 0x54) = stk[6];
        *(s32 *)(param_1 + 0x58) = stk[7];
        *(s32 *)(param_1 + 0x5c) = stk[8];
    }
    func_01ffe474(param_1);
}
