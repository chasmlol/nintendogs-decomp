#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_02126868[];
extern s32 func_020039d8(void);
extern void func_020fc594(s32, s32, s32);
extern void func_020fcf48(void);

void func_0211524c(s32 *p)
{
    u32 q;
    s32 idx;
    s16 v;
    u32 uVar1;
    s32 x;
    s32 iVar5;
    u32 t;

    if (p[0xbd] != 0) {
        if (*p > 0x19) goto c0;
        func_020fc594(2, 8, 1);
        t = (u32)(*p << 16) >> 1;
        q = t / 25u;
        idx = (s32)(u16)(q + 0xc000) >> 4;
        v = *(s16 *)(data_02126868 + idx * 4);
        uVar1 = (((u32)((s32)v + 0x1000) * 12) << 4) >> 16;
        iVar5 = uVar1 * -200;
        x = (s32)(uVar1 << 7);
        p[0xbe] = x / 25;
        p[0xbf] = iVar5 / 25;
        *p = *p + 1;
        return;
c0:
        *(s32 *)(data_0215be48 + 0xc838) = 1;
        *(s32 *)(data_0215be48 + 0xc83c) = 1;
        func_020fc594(2, 8, 0);
        p[0xbd] = 0;
        p[0xc0] = 1;
        func_020fcf48();
        return;
    }
    if (*p < 16) {
        *p = *p + 1;
        return;
    }
    if (*(s32 *)(data_0215be48 + 0xbc) == 4) {
        func_020fcf48();
        return;
    }
    if (func_020039d8()) {
        func_020fcf48();
    }
    return;
}
