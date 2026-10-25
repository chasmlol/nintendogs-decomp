#include "ctx.h"

extern u32 data_0214b3a4[];
extern void func_0210f038(void);
extern s32 func_0209561c(void);
extern u8 *func_020955c0(s32 a);

typedef struct { u32 w[8]; } T8;

s32 func_0211b7c4(u32 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar14;
    s32 iVar13;
    u32 *pe;
    u8 *q;
    s16 k;
    s32 iVar6;
    s32 m1;
    u32 ff;
    u32 *local_38;
    s32 local_30;
    s32 local_2c;
    s16 sVar4;

    m1 = -1;
    ff = 0xffff;
    local_30 = 0;
    local_2c = 0;
    local_38 = param_1;
    pe = data_0214b3a4;
    func_0210f038();
    if (*(s16 *)((u8 *)data_0214b3a4 + 4) == m1) {
        goto done;
    }
    do {
        iVar14 = local_2c;
        if (param_3 == 4) {
            iVar13 = local_2c;
            if (func_0209561c() > 0) {
                do {
                    q = (u8 *)local_2c;
                    iVar6 = m1;
                    k = local_2c;
                    do {
                        iVar6 = (s16)(iVar6 + 1);
                        while (iVar6 < 3 && *(u16 *)func_020955c0(iVar6) == ff) {
                            iVar6 = (s16)(iVar6 + 1);
                        }
                    } while (k++ < iVar13);
                    if (iVar6 >= 3) {
                        iVar6 = m1;
                    }
                    if (iVar6 >= 0) {
                        q = func_020955c0(iVar6);
                    }
                    iVar13 = iVar13 + 1;
                    if (*(s16 *)((u8 *)pe + 2) == *(s16 *)(q + 6)) {
                        iVar14 = iVar14 + 1;
                    }
                } while (iVar13 < func_0209561c());
            }
        }
        if (*(s16 *)((u8 *)pe + 4) == param_3 && (s32)*(u16 *)((u8 *)pe + 12) > iVar14) {
            if (param_3 == 1) {
                sVar4 = *(s16 *)((u8 *)pe + 2);
                if (sVar4 == 0x3e || sVar4 == 0x3f || sVar4 == 0x3c || sVar4 == 0x3d ||
                    sVar4 == 0x65 || sVar4 == 0x66 || sVar4 == 0x67 || sVar4 == 0x68 ||
                    sVar4 == 0x69 || sVar4 == 0x6a) {
                    goto skip;
                }
            }
            if (param_3 == 5) {
                sVar4 = *(s16 *)((u8 *)pe + 2);
                if (sVar4 == 0 || sVar4 == 1 || sVar4 == 2 || sVar4 == 3 ||
                    sVar4 == 4 || sVar4 == 5 || sVar4 == 6 || sVar4 == 7) {
                    goto skip;
                }
            }
            *(T8 *)local_38 = *(T8 *)pe;
            local_38 = local_38 + 8;
            local_30 = local_30 + 1;
        }
skip:
        pe = pe + 8;
    } while (*(s16 *)((u8 *)pe + 4) != -1);
done:
    return local_30;
}
