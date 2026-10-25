#include "ctx.h"

extern u8 *data_0215945c;
extern u8 *data_02159060;
extern s32 func_0209aaf0(void);
extern s32 func_02003a10(void);
extern void func_020931cc(s32 a);
extern void func_02096a4c(s32 a);
extern void func_02095a38(s32 a);
extern s32 func_020959dc(void);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020a19dc(s32 a, s32 b);

void func_020b69e0(void)
{
    s16 sVar1;
    s32 iVar2;
    s32 iVar3;
    u8 *puVar4;

    puVar4 = data_0215945c;
    switch (*(s16 *)puVar4) {
    case 0:
        iVar3 = func_0209aaf0();
        iVar2 = func_02003a10();
        if (iVar2 == 0) {
            return;
        }
        if (*(s16 *)(data_02159060 + 0x6c) != 2) {
            return;
        }
        *(s16 *)puVar4 = 2;
        *(s16 *)(puVar4 + 2) = 0;
        if (iVar3 != 0) {
            func_020931cc(iVar3);
        }
        func_02096a4c(0);
        func_02095a38(1);
        return;
    case 1:
        break;
    case 2:
        *(s16 *)(puVar4 + 2) = *(s16 *)(puVar4 + 2) + 1;
        iVar3 = func_020959dc();
        if (iVar3 != 0) {
            *(s16 *)puVar4 = 3;
            *(s16 *)(puVar4 + 2) = 0;
        }
        return;
    case 3:
        *(s16 *)(puVar4 + 2) = *(s16 *)(puVar4 + 2) + 1;
        *(s16 *)puVar4 = 4;
        *(s16 *)(puVar4 + 2) = 0;
        func_02097b94(0, 0x4c5, 0, 0, 0);
        func_020a19dc(0x43, 0x1e);
        return;
    case 4:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        sVar1 = *(s16 *)(data_02159060 + 0x9a);
        if (sVar1 == 0) {
            goto one;
        }
        if (sVar1 == 1) {
            *(s32 *)(puVar4 + 4) = 0;
        }
        goto join;
one:
        *(s32 *)(puVar4 + 4) = 1;
join:
        *(s16 *)puVar4 = 5;
        *(s16 *)(puVar4 + 2) = 0;
        *(s32 *)(puVar4 + 8) = 1;
        return;
    }
}
