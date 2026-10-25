#include "ctx.h"

extern u8 *data_ov007_02160d80;
extern void func_ov007_0215c744(void);
extern void func_ov007_0215c938(u8 *p);
extern s32 func_020d6484(u8 *p);
extern void func_020d6460(void *a, u16 *b);
extern u8 *func_020d6cb4(void);
extern s32 func_02080e64(u8 *p);
extern s32 func_020d5d78(u32 a);
extern u16 func_020d5fa0(u32 a);
extern void func_020d5da4(u32 a);
extern u8 *func_020d6cc0(void);
extern u32 func_020d5f30(void);
extern s32 func_020d64d4(void *a, u16 *b);
extern void func_020800d4(u8 *p, s32 a);

void func_ov007_0215c938(u8 *param_1)
{
    u16 st[8];
    u8 *d;
    s32 iVar5;
    s32 bVar3;
    u16 uVar4;
    u32 uVar6;
    u32 pf;
    u16 sv;
    u8 *q;

    iVar5 = func_020d6484(param_1);
    if (iVar5 == 0) return;
    d = data_ov007_02160d80;
    switch (*(s32 *)(d + 0x2c)) {
    case 1:
        if (*(s16 *)(d + 0x38) == 0) *(s16 *)(d + 0x38) = 1;
        return;
    case 2:
        func_020d6460(func_ov007_0215c744, st);
        return;
    case 3:
        if (*(u16 *)(param_1 + 8) == 4) goto c4;
        if (*(u16 *)(param_1 + 8) != 5) return;
        iVar5 = func_02080e64(func_020d6cb4());
        if (iVar5 != 0 && *(s32 *)(data_ov007_02160d80 + 0x24) != 0) {
            ((void (*)(u8 *))(*(u32 *)(data_ov007_02160d80 + 0x24)))(func_020d6cb4());
        }
        if (func_020d5d78(0x400058) != 0 && (*(func_020d6cb4() + 0x4b) & 1) != 0) {
            pf = *(u32 *)(data_ov007_02160d80 + 0x20);
            if (pf != 0 && ((s32 (*)(u8 *))pf)(param_1) == 0) {
                if (*(s32 *)(data_ov007_02160d80 + 0x48) != 0) {
                    *(s16 *)(data_ov007_02160d80 + 0x50) = *(s16 *)(data_ov007_02160d80 + 0x50) + 1;
                    if (*(s16 *)(data_ov007_02160d80 + 0x50) > *(s16 *)(data_ov007_02160d80 + 0x52)) {
                        *(s16 *)(data_ov007_02160d80 + 0x50) = 0;
                        *(s32 *)(data_ov007_02160d80 + 0x2c) = 2;
                        func_020d6460(func_ov007_0215c744, st + 5);
                        bVar3 = 1;
                        goto ab1;
                    }
                }
                bVar3 = 0;
            ab1:
                if (bVar3) return;
                uVar4 = func_020d5fa0(*(u16 *)(data_ov007_02160d80 + 0x44));
                *(u16 *)(data_ov007_02160d80 + 0x44) = uVar4;
                func_020d5da4(*(u16 *)(data_ov007_02160d80 + 0x44));
                if (*(s32 *)(data_ov007_02160d80 + 0x48) == 1) {
                    q = func_020d6cc0();
                    uVar6 = func_020d5f30();
                    *(s16 *)(q + 6) = (s16)uVar6;
                }
                if (func_020d64d4(func_ov007_0215c938, st + 1) != 0) return;
                sv = st[1];
                if (*(s32 *)(data_ov007_02160d80 + 0x34) == 1) return;
                *(s32 *)(data_ov007_02160d80 + 0x34) = 1;
                *(s16 *)(data_ov007_02160d80 + 0x30) = (s16)sv;
                *(s16 *)(data_ov007_02160d80 + 0x32) = 10;
                return;
            }
            func_020d6460(func_ov007_0215c744, st + 2);
            goto tail;
        }
        if (*(s32 *)(data_ov007_02160d80 + 0x48) != 0) {
            *(s16 *)(data_ov007_02160d80 + 0x50) = *(s16 *)(data_ov007_02160d80 + 0x50) + 1;
            if (*(s16 *)(data_ov007_02160d80 + 0x50) > *(s16 *)(data_ov007_02160d80 + 0x52)) {
                *(s16 *)(data_ov007_02160d80 + 0x50) = 0;
                *(s32 *)(data_ov007_02160d80 + 0x2c) = 2;
                func_020d6460(func_ov007_0215c744, st + 6);
                bVar3 = 1;
                goto ab2;
            }
        }
        bVar3 = 0;
    ab2:
        if (bVar3) return;
        uVar4 = func_020d5fa0(*(u16 *)(data_ov007_02160d80 + 0x44));
        *(u16 *)(data_ov007_02160d80 + 0x44) = uVar4;
        func_020d5da4(*(u16 *)(data_ov007_02160d80 + 0x44));
        if (*(s32 *)(data_ov007_02160d80 + 0x48) == 1) {
            q = func_020d6cc0();
            uVar6 = func_020d5f30();
            *(s16 *)(q + 6) = (s16)uVar6;
        }
        if (func_020d64d4(func_ov007_0215c938, st + 3) == 0) {
            sv = st[3];
            if (*(s32 *)(data_ov007_02160d80 + 0x34) != 1) {
                *(s32 *)(data_ov007_02160d80 + 0x34) = 1;
                *(s16 *)(data_ov007_02160d80 + 0x30) = (s16)sv;
                *(s16 *)(data_ov007_02160d80 + 0x32) = 10;
            }
        }
        goto tail;
    }
    return;
tail:
    func_020800d4(func_020d6cb4(), 0xc0);
    return;
c4:
    if (*(s32 *)(d + 0x48) == 0) goto zc;
    *(s16 *)(d + 0x50) = *(s16 *)(d + 0x50) + 1;
    if (*(s16 *)(data_ov007_02160d80 + 0x50) > *(s16 *)(data_ov007_02160d80 + 0x52)) {
        *(s16 *)(data_ov007_02160d80 + 0x50) = 0;
        *(s32 *)(data_ov007_02160d80 + 0x2c) = 2;
        func_020d6460(func_ov007_0215c744, st + 7);
        bVar3 = 1;
        goto ac;
    }
zc:
    bVar3 = 0;
ac:
    if (bVar3) return;
    uVar4 = func_020d5fa0(*(u16 *)(data_ov007_02160d80 + 0x44));
    *(u16 *)(data_ov007_02160d80 + 0x44) = uVar4;
    func_020d5da4(*(u16 *)(data_ov007_02160d80 + 0x44));
    if (*(s32 *)(data_ov007_02160d80 + 0x48) == 1) {
        q = func_020d6cc0();
        uVar6 = func_020d5f30();
        *(s16 *)(q + 6) = (s16)uVar6;
    }
    if (func_020d64d4(func_ov007_0215c938, st + 4) != 0) return;
    sv = st[4];
    if (*(s32 *)(data_ov007_02160d80 + 0x34) == 1) return;
    *(s32 *)(data_ov007_02160d80 + 0x34) = 1;
    *(s16 *)(data_ov007_02160d80 + 0x30) = (s16)sv;
    *(s16 *)(data_ov007_02160d80 + 0x32) = 10;
    return;
}
