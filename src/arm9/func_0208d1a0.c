#include "ctx.h"

extern u8 data_02157ccc[];
extern u32 func_020038b8(int *a, int b);
extern void func_0206c834(vu32 a, void *b, u32 c);
extern void func_02088364(void *a);
extern void func_02006700(int a, void *b);
extern void func_0208d284(void);

void func_0208d1a0(int *param_1, s16 param_2)
{
    u16 w;
    s16 *psVar1;
    int iVar5;
    u8 *puVar4;
    int iVar3;
    vu32 zero;
    u32 uVar2;

    psVar1 = (s16 *)func_020038b8(param_1, 8);
    *psVar1 = param_2 * 4 + 1;
    uVar2 = func_020038b8(param_1, (s32)*psVar1 * 0x5048u);
    *(u32 *)(psVar1 + 2) = uVar2;
    w = 0xffff;
    iVar5 = 0;
    if (0 < *psVar1) {
        iVar3 = 0;
        do {
            puVar4 = (u8 *)(*(int *)(psVar1 + 2) + iVar3);
            zero = 0;
            func_0206c834(zero, puVar4, 0x5000);
            func_02088364(puVar4 + 0x5000);
            *(u16 *)(puVar4 + 0x5044) = w;
            *(u16 *)(puVar4 + 0x5046) = 0;
            iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
            iVar3 = iVar3 + 0x5048;
        } while (iVar5 < *psVar1);
    }
    *(s16 **)data_02157ccc = psVar1;
    func_02006700(0xc, (void *)func_0208d284);
}
