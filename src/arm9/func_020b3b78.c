#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_0215942c;
extern u8 *data_0214f130;
extern u8 *data_02159430;
extern s32 func_01ffdb08(s32 a);
extern s32 func_0202817c(s32 a);
extern void func_02092748(u8 *a, u8 *b, u8 *c);
extern u32 func_02028184(s32 a);
extern void func_ov004_0215c8a8(s32 a, s8 *b, s32 *c);
extern void func_ov004_0215ca04(u8 *a, s32 *b);
extern s32 func_ov004_0215c89c(void);
extern u32 func_020a8780(u32 a);

void func_020b3b78(u8 *param_1)
{
    s32 iVar7;
    s32 t;
    s32 u;
    s32 k;
    s8 local_20;
    u8 local_1f[3];
    s32 local_1c;
    s32 local_18;

    iVar7 = *(s16 *)(data_02159444 + 256);
    if (iVar7 > 15) goto big;
    if (iVar7 >= 15) goto c15;
    switch (iVar7) {
    case 0: case 1: case 3: case 5: case 6: case 8: case 9: case 10:
        goto end;
    case 2: goto c2;
    case 4: goto c4;
    case 7: goto c7;
    case 11: goto c11;
    }
    goto end;
big:
    if (iVar7 == 18) goto c18;
    return;
c7:
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    *(u32 *)(param_1 + 0x18) = 1;
    return;
c2:
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    *(u32 *)(param_1 + 0x18) = 9;
    t = func_01ffdb08(*(s16 *)(data_0215942c + 14));
    u = func_0202817c(t);
    func_02092748((u8 *)(u + 0x834), data_0214f130 + 28, data_0214f130 + 44);
    func_02028184(t);
    return;
c11:
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    *(u32 *)(param_1 + 0x18) = 14;
    k = 0;
    do {
        s32 v2;
        func_ov004_0215c8a8(k, &local_20, &local_1c);
        v2 = local_1c;
        *(s16 *)(data_02159430 + k * 2 + 4) = local_20;
        *(s32 *)(data_02159430 + k * 4 + 8) = v2;
        k = (s16)(k + 1);
    } while (k < 2);
    func_020a8780(0xffffffff);
    return;
c4:
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    *(u32 *)(param_1 + 0x18) = 6;
    return;
c15:
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    *(u32 *)(param_1 + 0x18) = 18;
    return;
c18:
    {
        s32 v4;
        *(u16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
        *(u32 *)(param_1 + 0x18) = 21;
        func_ov004_0215ca04(local_1f, &local_18);
        func_020a8780(func_ov004_0215c89c());
        v4 = local_18;
        *(u16 *)(data_02159430 + 4) = local_1f[0];
        *(s32 *)(data_02159430 + 8) = v4;
        *(s16 *)(data_02159430 + 6) = -1;
        *(u32 *)(data_02159430 + 0xc) = 1;
    }
end:
    ;
}
