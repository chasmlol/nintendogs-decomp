#pragma avoid_byte strb
#include "ctx.h"

extern void func_020b5448(void);

extern u8 *func_020038b8(u32 *p, u32 n);
extern void func_020aaaf8(u8 *p);
extern void func_020b51cc(u32 a, u32 b);

u8 *func_020b509c(u32 *param_1, u32 param_2, u32 param_3)
{
    u8 *puVar2;
    u16 *pTail;

    puVar2 = func_020038b8(param_1, 0x74);
    func_020aaaf8(puVar2);
    *(u16 *)puVar2 = 6;
    *(u32 *)(puVar2 + 0x10) = (u32)func_020b5448;
    *(u16 *)(puVar2 + 2) = 0;
    *(u16 *)(puVar2 + 8) = 180;
    *(u32 *)(puVar2 + 0x1c) = param_3;
    if (*(u32 *)(puVar2 + 0x1c) != 0) {
        func_020b51cc(*(u32 *)(puVar2 + 0x1c), param_2);
    }
    {
        s16 iVar4;
    {
        s16 iVar6 = 0;
        *(u16 *)(puVar2 + 32) = 0;
        *(u16 *)(puVar2 + 34) = 0;
        *(u16 *)(puVar2 + 36) = 0;
        *(u16 *)(puVar2 + 38) = 0;
        *(u16 *)(puVar2 + 40) = 0;
        *(u16 *)(puVar2 + 42) = 0;
        *(u16 *)(puVar2 + 44) = 0;
        do {
            *(u32 *)(puVar2 + 0x30 + iVar6 * 4) = 0;
            iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
    }
    iVar4 = 0;
    *(s16 *)(puVar2 + 60) = iVar4;
    *(s16 *)(puVar2 + 62) = iVar4;
    {
        s16 iVar3;
        s32 k;
        u16 *puVar5 = (u16 *)puVar2;
        *(s16 *)(puVar2 + 64) = iVar4;
        do {
            iVar3 = 0;
            do {
                *(u16 *)((u8 *)puVar5 + iVar3 * 2 + 66) = 200;
                iVar3 = iVar3 + 1;
                ((u16 *)(puVar2 + 96))[iVar4] = 0;
            } while (iVar3 < 5);
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 5;
        } while (iVar4 < 3);
        {
            s32 t;
            u8 *pb;
            k = 0;
            pTail = (u16 *)(puVar2 + 102);
            do {
                *pTail = 0;
                pb = (u8 *)pTail + 3;
                ((u8 *)pTail)[2] = 0;
                *pb = 0;
                pTail = pTail + 2;
                k = (s16)(k + 1);
            } while (k < 3);
        }
    }
    }
    return puVar2;
}
