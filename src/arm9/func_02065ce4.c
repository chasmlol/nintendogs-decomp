#include "ctx.h"
extern u8 data_02150600[];
extern s32 func_020805c0(void);
extern s32 func_02080b08(void);
extern void func_020800f0(u32 a, s32 b);
extern void func_020800d4(u32 a, s32 b);
extern void func_02080148(u32 a, s32 b);
extern void func_0207eda4(u32 a, void *b);
extern void func_0207eb98(u32 a);
extern void func_0207ec14(u32 a);
extern void func_02080130(void);
extern void func_02080b1c(s32 a);
extern void func_02065eac(void);
extern void func_02065e38(void);

static inline BOOL CARDi_IsInTcm(u32 buf, u32 len)
{
    const u32 i = 0x01ff8000;
    const u32 d = func_020805c0();
    return ((i < buf + len) && (i + 0x8000 > buf)) || ((d < buf + len) && (d + 0x4000 > buf));
}

s32 func_02065ce4(u8 *param_1)
{
    u8 *base = data_02150600;
    u32 len;
    s32 iVar10;
    s32 iVar9 = 0;
    s32 bVar4 = 0;
    s32 bVar3 = 0;
    s32 bVar1 = 0;
    s32 bVar2 = 0;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    s32 r;

    uVar8 = *(u32 *)(base + 0x1c);
    if ((uVar8 & 3) == 0 && *(u32 *)(base + 0x24) <= 3) {
        bVar1 = 1;
    }
    if (bVar1) {
        len = *(u32 *)(base + 0x20);
        if (!CARDi_IsInTcm(uVar8, len)) {
            bVar3 = 1;
        }
    }
    if (bVar3 && ((*(u32 *)(base + 0x18) | *(u32 *)(base + 0x20)) & 0x1ff) == 0) {
        bVar4 = 1;
    }
    if (bVar4 && *(s32 *)(base + 0x20) != 0) {
        iVar9 = 1;
    }
    *(u32 *)(param_1 + 4) = (*(vu32 *)0x027ffe60 & 0xf8ffffff) | 0xa1000000;
    if (iVar9 != 0) {
        r = func_02080b08();
        func_020800f0(*(u32 *)(base + 0x1c), *(s32 *)(base + 0x20));
        func_020800d4(*(u32 *)(base + 0x1c), *(s32 *)(base + 0x20));
        func_02080148(*(u32 *)(base + 0x1c), *(s32 *)(base + 0x20));
        func_0207eda4(0x80000, (void *)func_02065e38);
        func_0207eb98(0x80000);
        func_0207ec14(0x80000);
        func_02080130();
        func_02080b1c(r);
        func_02065eac();
    }
    return iVar9;
}
