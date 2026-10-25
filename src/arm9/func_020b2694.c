#include "ctx.h"

extern s16 func_ov006_0216204c(void);
extern void func_020a8708(u8 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_020a86e0(u8 *p, s32 a, s32 b, s32 c);

/* (x * 100) / 60, truncated to s16 and clamped at zero */
static inline s32 MinToHund(s32 x)
{
    s32 t = x * 100;
    s32 q = t / 60;
    s16 h = (s16)q;
    if (h < 0) {
        return 0;
    }
    return h;
}

s32 func_020b2694(u8 *p, s16 param_2, s32 param_3)
{
    s32 vp2;
    s32 local_28;
    s32 iVar9;
    s32 iVar1;
    s16 v2;
    s16 *psVar8;
    u8 *pc;
    s32 p3;
    s32 iVar7;
    s32 m60;
    s32 h1;

    pc = p;
    p3 = param_3;
    vp2 = param_2;
    iVar7 = 1;
    local_28 = 0;
    m60 = (s16)(func_ov006_0216204c() * 60);
    h1 = MinToHund((s16)(p3 - m60));
    iVar1 = (s16)((s16)vp2 * 100 - h1);
    psVar8 = (s16 *)(pc + 0x18) + 15;
    iVar9 = 3;
    do {
        s16 sVar2 = psVar8[3];
        s32 h2;
        s32 iVar5;
        v2 = psVar8[2];
        h2 = MinToHund((s16)(sVar2 - m60));
        iVar5 = (s16)(v2 * 100 - h2);
        if (iVar1 < iVar5) {
            iVar7 = (s16)(psVar8[0] + 1);
            break;
        }
        if (iVar1 == iVar5) {
            if (p3 > sVar2) {
                iVar7 = (s16)(psVar8[0] + 1);
                break;
            }
            if (p3 == sVar2) {
                local_28 = 1;
                iVar7 = psVar8[0];
                break;
            }
        }
        iVar9 = (s16)(iVar9 - 1);
        psVar8 = psVar8 - 5;
    } while (iVar9 >= 1);
    *(s16 *)(pc + 4) = iVar7;
    *(u16 *)(pc + 6) = 0;
    *(s16 *)(pc + 10) = vp2;
    *(s16 *)(pc + 14) = iVar1;
    *(s16 *)(pc + 12) = p3;
    if (iVar7 <= 1) {
        func_020a8708(pc, iVar7, vp2, p3, local_28);
    } else if (iVar7 < 4) {
        func_020a86e0(pc, iVar7, vp2, p3);
    }
    return iVar7;
}
