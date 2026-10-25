#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];

extern s32 func_021178a8(void *a);
extern void func_02003c10(u32 a);
extern u32 func_02003a44(void);
extern void func_02107c34(u32 a);
extern void func_02108070(u32 a);
extern void func_02108e24(u32 a);
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern void func_02117a58(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);
extern void func_021179b0(void *a, u32 b, u32 c);
extern void func_020a1a40(u32 a);

void func_020f8d38(s32 *param_1)
{
    s32 iVar4;
    s32 *p4 = param_1 + 0x740;
    u32 bVar1, bVar2;
    u32 bVar3;

    *param_1 = param_1[1];
    switch (*param_1) {
    case 0:
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            param_1[1] = 2;
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
            return;
        }
        bVar2 = data_0214f004[1];
        bVar1 = data_0214f004[0];
        iVar4 = func_02112320(2, bVar1, bVar2);
        if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
            return;
        }
        if (iVar4 == 0) {
            func_02117a58(param_1 + 3, 2, 0, 1, 0, 1, 0, 0, 0, 10, 0);
            func_021179b0(param_1 + 3, (s16)bVar1, (s16)bVar2);
            param_1[0x12] = 0;
            param_1[1] = 1;
            func_02108e24(0);
            func_020a1a40(0x2a);
            return;
        }
        if (iVar4 != 1) {
            return;
        }
        func_02117a58(param_1 + 3, 2, 1, 1, 0, 1, 0, 0, 0, 10, 10);
        func_021179b0(param_1 + 3, (s16)bVar1, (s16)bVar2);
        param_1[0x12] = 1;
        param_1[1] = 1;
        func_02108e24(0);
        func_020a1a40(0x2a);
        return;
    case 1:
        iVar4 = func_021178a8(param_1 + 3);
        if (iVar4 == 0) {
            return;
        }
        func_02003c10(0x14);
        param_1[1] = 3;
        return;
    case 2:
        if (*(s32 *)(data_0215be48 + 0x48bc) != 1) {
            return;
        }
        param_1[0x12] = -1;
        param_1[1] = 3;
        func_02003c10(0x14);
        return;
    case 3:
        bVar3 = func_02003a44();
        if (!bVar3) {
            return;
        }
        p4[0] = param_1[0x12];
        iVar4 = *(vu32 *)p4;
        if (iVar4 == 0) goto L3a;
        if (iVar4 == 1) goto L3b;
        return;
L3a:
        func_02107c34(p4[1]);
        return;
L3b:
        func_02108070(p4[1]);
        return;
    default:
        return;
    }
}
