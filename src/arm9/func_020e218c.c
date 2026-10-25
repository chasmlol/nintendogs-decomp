#include "ctx.h"

typedef volatile s32 vs32;
typedef struct { vu16 z; u16 pad; } SZ2;

extern u32 data_0215b72c;
extern u32 data_0215ae80;
extern u32 data_0215ae84;
extern u32 data_0215b768;
extern u32 data_0215ae24;
extern u32 data_0215ae00;
extern u32 data_0215b740;
extern u32 data_0215b064;
extern u32 data_0215b754;
extern s32 func_0207fcb0(void *a, void *b, u32 c);
extern s32 func_020dcf28(u32 a, u32 b, void *c, u32 d, s32 e);
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern void func_0207fd5c(void *a, u32 b, u32 c);
extern s32 func_020ddfa8(void *a, u32 b, u32 c);
extern void func_020defd8(void);

void func_020e218c(void)
{
    u32 uVar10;
    s32 iVar4;
    u32 uVar9;
    s32 hi_c;
    s32 lo_c;

    s32 flag;
    u32 local_30;
    SZ2 zz;
    u32 local_28;

    {
        s32 one = 1;
        flag = one;
        data_0215b72c = one;
    }
    lo_c = -0x8000;
    hi_c = 0x7fff;

    local_30 = 0xc00;
    do {
        u32 uVar8;

        func_0207fcb0((void *)&data_0215b768, &local_28, flag);
        uVar10 = local_28 & 0xffffff;
        uVar9 = local_28 & 0xff000000;
        iVar4 = func_020dcf28(data_0215ae00, data_0215ae84, (void *)&data_0215ae80, 0, *(s16 *)&data_0215ae24);
        if (uVar9 == 0x10000000) {
            if ((u32)(iVar4 + 3) <= 1) {
                zz.z = 0;
                func_0206c7bc(zz.z, data_0215ae84, data_0215ae80 << 1);
            } else if (iVar4 == -4) {
                u32 uVar7 = 0;
                if (uVar7 < (u32)data_0215ae80) {
                    do {
                        s32 iVar5 = ((s16 *)data_0215ae84)[uVar7] * 15;
                        if (iVar5 > hi_c) {
                            iVar5 = hi_c;
                        } else if (iVar5 < -0x8000) {
                            iVar5 = lo_c;
                        }
                        ((s16 *)data_0215ae84)[uVar7] = (s16)iVar5;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < (u32)data_0215ae80);
                }
            }
            func_0207fd5c((void *)&data_0215b740, 0x504c4159, 0);
            uVar8 = local_30;
        } else {
            uVar8 = 0;
        }
        if (iVar4 == 0) {
            iVar4 = func_020ddfa8((void *)&data_0215b064, uVar10, uVar8);
        }
        if (iVar4 != -1 && iVar4 != 0) {
            u32 uVar7 = 0;
            u8 *q = (u8 *)&data_0215b064;
            do {
                *(u32 *)(q + 0x80) = 0;
                *(s32 *)(q + 0x84) = iVar4;
                q = q + 136;
                uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
        }
        func_020defd8();
        func_0207fd5c((void *)&data_0215b754, uVar9 + 0x46494e, 0);
    } while (1);
}
