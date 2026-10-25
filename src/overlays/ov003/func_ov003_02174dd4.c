#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02044b44(void);
extern void func_0200c0e8(s32 a, u8 *b);
extern s32 func_02022e14(u8 *p, u32 a);
extern s32 func_0202cd10(u8 *p, u32 a);
extern s32 func_02029504(u8 *p);

static inline u32 Step(void)
{
    u32 *P;
    u32 v;

    P = *(u32 **)&data_0214f464;
    v = *P * 0x10dcd + 1;
    *P = v;
    return v;
}

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u32 func_ov003_02174dd4(u8 *param_1)
{
    s32 cVar1;
    u32 uVar5;
    s32 iVar4;
    s32 bVar2;

    *(vu32 *)(param_1 + 0x464) = *(vu32 *)(param_1 + 0x464) + 1;
    if ((s32)*(vu32 *)(param_1 + 0x464) > 300) {
        cVar1 = *(s8 *)(param_1 + 0x93);
        switch (cVar1) {
        case 0:
            uVar5 = Step();
            uVar5 = (u32)(u16)((((u32)(u16)uVar5) * 60u) >> 16);
            if (uVar5 == 0) {
                goto s3;
            }
            if (uVar5 == 1) {
                SwapB(5, (vu8 *)(param_1 + 147));
            }
            goto done0;
s3:
            SwapB(3, (vu8 *)(param_1 + 147));
done0:
            ;
            break;
        case 3:
            uVar5 = Step();
            if ((u16)((((u32)(u16)uVar5) * 100u) >> 16) == 0) {
                SwapB(0, (vu8 *)(param_1 + 147));
            }
            break;
        case 5:
            iVar4 = func_02044b44();
            if (iVar4 != 0) {
                func_0200c0e8(iVar4, param_1 + 0x3b4);
            }
            uVar5 = Step();
            if ((u16)((((u32)(u16)uVar5) * 100u) >> 16) == 0) {
                SwapB(0, (vu8 *)(param_1 + 147));
            }
            break;
        }
    }
    bVar2 = func_02022e14(param_1, 0x4b);
    if (bVar2 != 0) {
        return (u32)bVar2;
    }
    iVar4 = func_0202cd10(param_1, 0);
    if (iVar4 == 0) {
        return (u32)iVar4;
    }
    return (u32)func_02029504(param_1);
}
