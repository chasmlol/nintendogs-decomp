#include "ctx.h"

extern u32 data_0212a868_u;
extern u64 func_02080858(void);
extern void func_020b0200(s16 *a, int b, u32 *c);
extern s32 func_020b208c(u32 *a, u32 b, int c);

void func_020b1f14(u8 *param_1, u32 param_2)
{
    u32 local_68;
    s16 local_64[32];
    int iVar5;
    u8 *puVar4;
    int iVar2;
    int iVar1;

    local_68 = (u32)func_02080858();
    func_020b0200(local_64, 0x20, &local_68);
    iVar2 = 0x12d;
    iVar1 = 0x10dcd;
    puVar4 = param_1 + 0x18;
    iVar5 = 0;
    do {
        if (iVar5 > 0) {
            *(s16 *)puVar4 = (s16)iVar5;
            *(s16 *)(puVar4 + 2) = local_64[iVar5];
            *(s16 *)(puVar4 + 4) = (s16)func_020b208c(&local_68, param_2, iVar5);
            switch (iVar5) {
            case 1:
                local_68 = local_68 * iVar1 + 1;
                *(s16 *)(puVar4 + 6) = -(s16)((u16)(((u32)(u16)local_68 * (u32)iVar2) >> 16) + 600);
                break;
            case 2:
                local_68 = local_68 * iVar1 + 1;
                *(s16 *)(puVar4 + 6) = -(s16)((u16)(((u32)(u16)local_68 * 300u) >> 16) + 300);
                break;
            case 3:
                local_68 = local_68 * iVar1 + 1;
                *(s16 *)(puVar4 + 6) = -(s16)(u16)(((u32)(u16)local_68 * 300u) >> 16);
                break;
            }
            *(s16 *)(puVar4 + 8) = *(s16 *)(puVar4 + 6);
        }
        iVar5 = (s16)(iVar5 + 1);
        puVar4 = puVar4 + 10;
    } while (iVar5 < 4);
}
