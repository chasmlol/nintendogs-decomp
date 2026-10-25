#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_0213309c[];
extern u8 data_02133094[];
extern u8 data_021330a4[];
extern s8 data_021330ac[];
extern u8 data_02133088[];
extern u8 data_021330b8[];
extern u8 data_02133098[];
extern u8 data_02159010[];
extern u8 *data_02159060;
extern u8 *data_02159064;

extern u32 func_02112320(s32 a, s32 b, s32 c);
extern void func_020a1a40(s32 a);
extern void func_02117a58(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
extern s32 func_021179b0(u8 *p, s32 a, s32 b);
extern s32 func_021178a8(u8 *p);
extern void func_02112a50(s32 a, s32 b, s32 c, s32 d);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02109120(void);
extern void func_02109190(void);
extern void func_020df53c(u32 a);
extern BOOL func_0208dda0(void);
extern s32 func_020d6f50(void);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020d6f84(void);
extern void func_020d6f98(void);
extern void func_020940bc(u8 *p);
extern void func_020fddc0(s32 a);


void func_020f27e4(s32 *param_1)
{
    u8 bVar1;
    u32 uVar6;
    s32 iVar13;
    s32 unaff_r7;
    s32 cVar3;
    s32 iVar7;
    s32 local_34;
    u32 bV2;
    s32 local_2c;
    s32 iIn;
    s8 *pbVar9;
    u8 *pbVar12;
    s32 iVar8;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    s32 flag;
  s32 flag_w2;
    s32 k;
    u8 *pOff;

    pOff = (u8 *)param_1 + 0x1c94;
    *param_1 = param_1[1];
    switch (*param_1) {
    case 0:
        flag = 1;
        param_1[3] -= 0x6aaa;
        iVar13 = param_1[3];
        if (iVar13 <= 0) {
            param_1[3] = 0;
        } else {
            flag = 0;
        }
        param_1[4] = param_1[4] + 0xb60;
        iVar8 = param_1[4];
        if (iVar8 >= 0x10000) {
            param_1[4] = 0x10000;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            param_1[1] = 1;
        }
        break;
    case 1:
        flag = 1;
        param_1[5] -= 0x8000;
        iVar13 = param_1[5];
        if (iVar13 <= 0) {
            param_1[5] = 0;
        } else {
            flag = 0;
        }
        param_1[7] = param_1[7] + 0x1111;
        iVar8 = param_1[7];
        if (iVar8 >= 0x10000) {
            param_1[7] = 0x10000;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            param_1[1] = 2;
        }
        break;
    case 2:
        param_1[9] -= 0x3000;
        if (param_1[9] <= 0) {
            param_1[9] = 0;
            param_1[1] = 3;
        }
        break;
    case 3:
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            bVar1 = data_0214f004[0];
            bV2 = data_0214f004[1];
            uVar6 = func_02112320(2, bVar1, bV2);
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
                iVar13 = -1;
                k = 0;
                do {
                    if (uVar6 == data_0213309c[k * 2]) {
                        iVar13 = k;
                        unaff_r7 = -1;
                    } else if (uVar6 == *(u8 *)((u32)data_0213309c + (u32)k * 2 + 1)) {
                        iVar13 = k;
                        unaff_r7 = 1;
                    }
                    k = k + 1;
                } while (k < 4);
                iVar7 = -1;
                if (iVar13 != -1) {
                    switch (iVar13) {
                    case 0:
                        cVar3 = *(s8 *)((u8 *)param_1 + 149);
                        break;
                    case 3:
                        cVar3 = *(s8 *)((u8 *)param_1 + 148);
                        break;
                    case 1:
                        cVar3 = *(u8 *)((u8 *)param_1 + 144) - 1;
                        break;
                    case 2:
                        cVar3 = *(s8 *)((u8 *)param_1 + 146);
                        break;
                    }
                    cVar3 = cVar3 + unaff_r7;
                    if (cVar3 < 0) {
                        cVar3 = data_02133094[iVar13] - 1;
                    }
                    if (cVar3 >= data_02133094[iVar13]) {
                        cVar3 = 0;
                    }
                    switch (iVar13) {
                    case 0:
                        *(vu8 *)((u8 *)param_1 + 149) = (u8)cVar3;
                        break;
                    case 3:
                        *(vu8 *)((u8 *)param_1 + 148) = (u8)cVar3;
                        break;
                    case 1:
                        *(vu8 *)((u8 *)param_1 + 144) = (u8)(cVar3 + 1);
                        func_020df53c(*(vu8 *)((u8 *)param_1 + 144));
                        break;
                    case 2:
                        *(vu8 *)((u8 *)param_1 + 146) = (u8)cVar3;
                        if (cVar3 == 0) {
                            func_02109120();
                        } else {
                            func_02109190();
                        }
                        break;
                    }
                    func_02117a58((u8 *)param_1 + 44, 2, (data_021330a4 + iVar13 * 2)[(unaff_r7 + 1) >> 1], 1, 1, 2, 0, 0, 0, 10, 0);
                    func_021179b0((u8 *)param_1 + 44, (s16)(bVar1 + 0), (s16)bV2);
                    *(vu8 *)((u8 *)param_1 + 40) = (u8)iVar13;
                    *(vu8 *)((u8 *)param_1 + 41) = (u8)cVar3;
                    *(vu8 *)((u8 *)param_1 + *(s8 *)((u8 *)param_1 + 40) + 104) = (u8)(*(s8 *)((u8 *)param_1 + 41));
                    pbVar9 = data_021330ac;
                    pbVar12 = data_02133094;
                    local_34 = 0;
                    local_2c = 0;
                    do {
                        iIn = local_2c;
                        if ((s32)*pbVar12 > 0) {
                            do {
                                if (iIn == *(s8 *)((u8 *)param_1 + local_34 + 104)) {
                                    func_02112798(2, (u16)pbVar9[iIn], 1);
                                } else {
                                    func_02112798(2, (u16)pbVar9[iIn], 0);
                                }
                                iIn = iIn + 1;
                            } while (iIn < *pbVar12);
                        }
                        pbVar9 = pbVar9 + 3;
                        local_34 = local_34 + 1;
                        pbVar12 = pbVar12 + 1;
                    } while (local_34 < 4);
                    param_1[1] = 4;
                    func_020a1a40(0x19);
                } else {
                    if (uVar6 == 9) {
                        iVar7 = 0;
                        func_020a1a40(iVar7);
                    }
                    if (uVar6 == 8) {
                        iVar7 = 1;
                        func_020a1a40(iVar7);
                    }
                    if (iVar7 != -1) {
                        func_02117a58((u8 *)param_1 + 44, 2, data_02133088[iVar7], 1, 4, 5, 0, 0, 0, 10, 10);
                        func_021179b0((u8 *)param_1 + 44, (s16)(bVar1 + 0), (s16)bV2);
                        *(vu8 *)((u8 *)param_1 + 42) = (u8)iVar7;
                        param_1[1] = 4;
                    }
                }
            }
        }
        break;
    case 4:
    {
        s32 cVar4;
        if (*(s8 *)((u8 *)param_1 + 42) != -1) {
            iVar13 = func_021178a8((u8 *)param_1 + 44);
            if (iVar13 != 0) {
                cVar4 = *(s8 *)((u8 *)param_1 + 42);
                if (cVar4 == 0 && *(s8 *)((u8 *)param_1 + 232) == 0 &&
                    ((u8)(s8)(*(s8 *)((u8 *)param_1 + 148) - 1)) <= 1) {
                    if (func_0208dda0() && (iVar13 = func_020d6f50(), iVar13 != 0)) {
                        func_02097b94(0xb, 0x30a2, 0, 0, 0);
                        param_1[1] = 5;
                    } else {
                        func_02097b94(2, 0xc81, 0, 0, 0);
                        param_1[1] = 6;
                    }
                } else {
                    if ((cVar4 == 0 && *(s8 *)((u8 *)param_1 + 148) == 0) ||
                        (cVar4 == 1 && *(s8 *)((u8 *)param_1 + 232) == 0)) {
                        func_020d6f84();
                        *(u16 *)(data_02159010 + 2) = 0;
                    }
                    param_1[1] = 7;
                    func_020a1a40(0x3d);
                }
            }
        } else {
            iVar13 = func_021178a8((u8 *)param_1 + 44);
            if (iVar13 != 0) {
                param_1[1] = 3;
            }
        }
        break;
    }
    case 5:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            if (*(s16 *)(data_02159060 + 0x9a) == 0) {
                func_020d6f98();
                *(u16 *)(data_02159010 + 2) = 1;
            } else {
                *(vu8 *)((u8 *)param_1 + 148) = 0;
            }
            param_1[1] = 7;
            func_020a1a40(0x3d);
        }
        break;
    case 6:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            param_1[1] = 7;
            *(vu8 *)((u8 *)param_1 + 148) = 0;
            func_020a1a40(0x3d);
        }
        break;
    case 7:
        flag_w2 = 1;
        param_1[3] = param_1[3] + 0x6aaa;
        iVar7 = *(volatile s32 *)(param_1 + 3);
        if (iVar7 >= 0x64000) {
            param_1[3] = 0x64000;
        } else {
            flag_w2 = 0;
        }
        param_1[4] -= 0x1111;
        iVar8 = param_1[4];
        if (iVar8 <= 0) {
            param_1[4] = 0;
        } else {
            flag_w2 = 0;
        }
        param_1[6] = param_1[6] + 0x6aaa;
        iVar9 = *(volatile s32 *)(param_1 + 6);
        if (iVar9 >= 0x64000) {
            param_1[6] = 0x64000;
        } else {
            flag_w2 = 0;
        }
        param_1[9] = param_1[9] + 0x6aaa;
        iVar10 = *(volatile s32 *)(param_1 + 9);
        iVar11 = iVar10;
        if (iVar10 >= 0x64000) {
            iVar11 = 0x64000;
            param_1[9] = iVar11;
        } else {
            flag_w2 = 0;
        }
        if (flag_w2 != 0) {
            *(s32 *)pOff = -1;
            if (*(s8 *)((u8 *)param_1 + 42) == 0) {
                func_020940bc((u8 *)param_1 + 108);
                if (*(s8 *)((u8 *)param_1 + 149) == 0) {
                    *(u16 *)data_02159064 &= ~1;
                } else {
                    *(u16 *)data_02159064 |= 1;
                    *(s32 *)(data_02159064 + 8) = 0;
                }
            }
            if (*(s8 *)((u8 *)param_1 + 42) == 1) {
                if (*(s8 *)((u8 *)param_1 + 230) == 0) {
                    func_02109120();
                } else {
                    func_02109190();
                }
            }
            func_020fddc0(15);
        }
        break;
    default:
        break;
    }

    iVar13 = 0;
    pbVar12 = data_021330b8;
    do {
        func_02112a50(2, *pbVar12, (param_1[5] << 4) >> 16, (param_1[6] << 4) >> 16);
        iVar13 = iVar13 + 1;
        pbVar12 = pbVar12 + 1;
    } while (iVar13 < 18);

    {
        u8 *pb2;
        s32 i2;
        pb2 = data_02133098;
        i2 = 0;
        do {
            func_02112a50(2, *pb2, (param_1[8] << 4) >> 16, (param_1[9] << 4) >> 16);
            i2 = i2 + 1;
            pb2 = pb2 + 1;
        } while (i2 < 4);
    }
}
