#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_0214f004[];
extern u32 data_02159060;
extern s32 func_02092af0(s32 a);
extern s32 func_0208dd28(s32 a);
extern void func_0209a9c4(void);
extern void func_02108e24(s32 a);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern void func_02117a58(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
extern void func_021179b0(s32 a, s16 b, s16 c);
extern void func_020a1a40(s32 a);
extern void func_02109010(void);
extern void func_02107c24(void);
extern void func_0209a93c(void);
extern void func_02092a98(s32 a);
extern s32 func_021178a8(s32 a);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020fa470(s32 a);

void func_020f9b98(s32 *param_1)
{
    u8 *pS;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 flag;
    s32 bVar2;
    s32 bVar1;

    pS = (u8 *)param_1 + 0x1ca8;
    *param_1 = param_1[1];
    switch (*param_1) {
    case 0:
        param_1[4] = param_1[4] + 0x1999;
        flag = 1;
        if (param_1[4] >= 0x10000) {
            param_1[4] = 0x10000;
        } else {
            flag = 0;
        }
        if (flag) {
            param_1[1] = 1;
        }
        break;
    case 1:
        param_1[6] = param_1[6] + 0x1999;
        iVar5 = param_1[6];
        flag = 1;
        if (iVar5 >= 0x10000) {
            param_1[6] = 0x10000;
        } else {
            flag = 0;
        }
        param_1[8] = param_1[8] - 0xa000;
        iVar4 = param_1[8];
        if (iVar4 <= 0) {
            param_1[8] = 0;
        } else {
            flag = 0;
        }
        if (flag) {
            param_1[1] = 2;
            iVar6 = func_0208dd28(func_02092af0(*(s16 *)pS));
            if (iVar6 != 0) {
                func_0209a9c4();
            }
        }
        break;
    case 2:
        if (param_1[7] == 0) {
            func_02108e24(1);
        }
        if (*(s32 *)(*(u8 **)&data_0215be48 + 0x48b8) == 1) {
            param_1[7] = 1;
        }
        if (*(s32 *)(*(u8 **)&data_0215be48 + 0x48bc) == 1) {
            param_1[1] = 3;
            func_02109010();
        } else if (*(s32 *)(*(u8 **)&data_0215be48 + 0x4860) != 0 && param_1[7] == 0) {
            bVar2 = data_0214f004[0];
            bVar1 = data_0214f004[1];
            iVar6 = func_02112320(2, bVar2, bVar1);
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0 && iVar6 == 0) {
                func_02117a58((s32)(param_1 + 9), 2, 0x37, 0, 0, 0, 1, 2, 2, 10, 0);
                func_021179b0((s32)((u8 *)param_1 + 36), (s16)bVar2, (s16)bVar1);
                param_1[1] = 5;
                func_02108e24(0);
                func_020a1a40(0x2a);
            }
        }
        break;
    case 3:
        param_1[6] -= 0x2aaa;
        iVar6 = param_1[6];
        flag = 1;
        if (iVar6 <= 0) {
            param_1[6] = 0;
        } else {
            flag = 0;
        }
        param_1[8] = param_1[8] + 0xa000;
        iVar4 = param_1[8];
        if (iVar4 >= 0x3c000) {
            param_1[8] = 0x3c000;
        } else {
            flag = 0;
        }
        if (flag) {
            param_1[1] = 4;
        }
        break;
    case 4:
        param_1[4] -= 0x1999;
        flag = 1;
        if (param_1[4] <= 0) {
            param_1[4] = 0;
        } else {
            flag = 0;
        }
        if (flag) {
            func_02107c24();
            func_0209a93c();
            if (param_1[0x18] != 0) {
                func_02092a98(*(s16 *)pS);
            }
        }
        break;
    case 5:
        iVar6 = func_021178a8((s32)(param_1 + 9));
        if (iVar6 != 0) {
            func_02097b94(0xb, 0x2fa9, 0, 0, 0);
            param_1[1] = 6;
        }
        break;
    case 6:
        if (*(s32 *)(*(u8 **)&data_02159060 + 0xa4) != 0) {
            if (*(s16 *)(*(u8 **)&data_02159060 + 0x9a) == 0) {
                param_1[0x18] = 1;
                param_1[1] = 3;
                func_02109010();
            } else {
                param_1[1] = 2;
                param_1[7] = 0;
            }
        }
        break;
    }
    func_020fa470((s32)param_1);
}
