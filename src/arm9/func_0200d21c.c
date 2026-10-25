#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern u8 *data_0214f45c;
extern u8 *data_0215942c;
extern u8 *func_0200c498(s32 a, s32 b);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern s32 func_02028124(u8 *p);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_02029504(u8 *p);
extern void func_020a02d8(s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_02042b84(s32 a);


void func_0200d21c(u8 *param_1)
{
    s32 bVar1;
    u32 old918;
    s32 diff;
    s32 iVar5;
    s32 iVar6;
    s32 r8;
    s16 *psVar11;
    u32 *puVar10;
    u8 *q;

    bVar1 = 0;
    iVar5 = (s32)func_0200c498(13, 0);
    if (iVar5 != 0) {
        psVar11 = (s16 *)(*(u8 **)(data_0214f45c + 0x18) + (s16)*(u32 *)(iVar5 + 0x20) * 36);
        if (psVar11 != 0) {
            puVar10 = (u32 *)(*(u8 **)(data_0214f45c + 0x1c) + (s16)(*psVar11 + *(s32 *)(param_1 + 0x464)) * 68);
            if (puVar10 != 0) {
                *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 0x20;
                old918 = *(u32 *)(param_1 + 0x918);
                diff = (s32)(puVar10[1] - old918);
                *(u32 *)(param_1 + 0x918) = old918 + (u32)(((s64)diff * (s64)*(s32 *)(param_1 + 0x468) + 0x800) >> 12);
                *(Tri3 *)(param_1 + 0x26c) = *(Tri3 *)puVar10;
                func_0203942c(param_1);
                iVar5 = func_02037450(param_1, 0x102);
                iVar6 = func_02028124(param_1);
                r8 = iVar5;
                if (r8 < iVar6 * 36) {
                    *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
                    *(s32 *)(param_1 + 0x468) = 0;
                    switch (puVar10[9]) {
                    case 1:
                        q = func_020bc3c4() + 136;
                        *(u32 *)(q + 0x6c) = 1;
                        func_020bbe14(0xf, (s8)*(s8 *)(param_1 + 0x88));
                        *(u8 *)(param_1 + 0xb5) = *(u8 *)(param_1 + 0xb5) | 1;
                        break;
                    case 2:
                        func_020bbe14(1, -1);
                        q = func_020bc3c4() + 136;
                        *(u32 *)(q + 0x6c) = 0;
                        break;
                    }
                    if (*(s32 *)(param_1 + 0x464) >= psVar11[1]) {
                        bVar1 = 1;
                    }
                }
            }
        }
    }
    *(u8 *)(param_1 + 0xb0) = *(u8 *)(param_1 + 0xb0) & ~16;
    if (*(s16 *)(param_1 + 0xf0) != 0x6f) {
        if (func_02022e14(param_1, 0x4d) == 0) {
            func_02029504(param_1);
        }
    }
    if (bVar1 == 0) {
        return;
    }
    func_020a02d8(0x3c);
    func_02029504(param_1);
    func_0203e908(param_1, 0x47a);
    if (*(u16 *)data_0215942c != 0) {
        return;
    }
    func_02042b84((s8)*(s8 *)(param_1 + 0x88));
}
