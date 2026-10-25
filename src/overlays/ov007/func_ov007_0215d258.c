#include "ctx.h"
extern u8 data_ov007_02160d80[];
extern s32 func_020d6228(u8 *p);
extern void func_020d68c8(u8 *a, u8 *b);
extern u16 func_020d5fa0(u32 a);
extern void func_020d5da4(u32 a);
extern s32 func_020d6cc0(void);
extern u32 func_020d5f30(void);
extern s32 func_020d64d4(u8 *a, u16 *b);
extern u16 func_020d5e60(void);
extern s32 func_020d5e70(u8 *a, u32 b, u16 *c);
extern void func_ov007_0215d4b4(void);
extern void func_ov007_0215d0ac(void);
extern void func_ov007_0215c938(void);

void func_ov007_0215d258(u8 *param_1)
{
    s32 iVar5;
    u8 *obj;
    u32 uVar7;
    u16 uVar3;
    u8 auStack_10[2];
    u16 sStack_e;
    u16 sv;
    u16 asStack_c[2];
    s32 bVar2;
    u32 uVar6;
    u16 code;

    iVar5 = func_020d6228(param_1);
    if (iVar5 == 0) {
        return;
    }
    {
        u32 fp = *(u32 *)(*(u8 **)data_ov007_02160d80 + 0x18);
        if (fp != 0) {
            ((void (*)(u8 *))fp)(param_1);
        }
    }
    obj = *(u8 **)data_ov007_02160d80;
    iVar5 = *(s32 *)(obj + 0x2c);
    if (iVar5 == 1) {
        goto c1;
    }
    if (iVar5 == 2) {
        goto c2;
    }
    if (iVar5 == 3) {
        goto c3;
    }
    return;
c1:
    func_020d68c8((u8 *)func_ov007_0215d4b4, auStack_10);
    return;
c2:
    *(u16 *)(obj + 0x44) = 0;
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x46) = 0x65;
    uVar7 = 1;
    uVar3 = func_020d5e60();
    uVar6 = uVar3;
    if (uVar6 == 0x8000) {
        code = 3;
    } else if (uVar6 == 0) {
        code = 0x15;
    } else {
        if ((uVar3 & 1) == 0) {
            u32 base = 1;
            u32 sh;
            do {
                uVar7 = (u16)(uVar7 + 1);
                if (uVar7 > 0x10) {
                    code = 0x16;
                    goto after;
                }
                sh = base << (uVar7 - 1);
            } while ((sh & uVar6) == 0);
        }
        bVar2 = func_020d5e70((u8 *)func_ov007_0215d0ac, uVar7, asStack_c);
        uVar6 = (u32)bVar2;
        code = asStack_c[0];
    }
after:
    if (code == 0x16) {
        if (*(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) == 1) {
            return;
        }
        *(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) = 1;
        *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x30) = code;
        *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x32) = 0x1e;
        return;
    }
    if (code == 2) {
        return;
    }
    if (*(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) == 1) {
        return;
    }
    *(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) = 1;
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x30) = code;
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x32) = 30;
    return;
c3:
    uVar3 = func_020d5fa0(*(u16 *)(obj + 0x44));
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x44) = uVar3;
    func_020d5da4(*(u16 *)(*(u8 **)data_ov007_02160d80 + 0x44));
    if (*(s32 *)(*(u8 **)data_ov007_02160d80 + 0x48) == 1) {
        iVar5 = func_020d6cc0();
        uVar7 = func_020d5f30();
        *(s16 *)(iVar5 + 6) = (s16)uVar7;
    }
    iVar5 = func_020d64d4((u8 *)func_ov007_0215c938, &sStack_e);
    if (iVar5 != 0) {
        return;
    }
    sv = sStack_e;
    if (*(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) == 1) {
        return;
    }
    *(s32 *)(*(u8 **)data_ov007_02160d80 + 0x34) = 1;
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x30) = sv;
    *(u16 *)(*(u8 **)data_ov007_02160d80 + 0x32) = 10;
}
