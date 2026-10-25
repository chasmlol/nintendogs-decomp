#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215bf9c;
extern void func_02117e4c(u8 *p);
extern void func_02104268(void);
extern void func_02104258(void);
extern void func_02104248(void);
extern void func_021041f8(u32 a);

void func_02118520(u8 *param_1)
{
    s32 iVar3;
    u8 *q;
    s32 iVar2;
    u8 *piVar1;

    iVar3 = 0;
    q = param_1 + 372;
    iVar2 = 0;
    piVar1 = param_1 + 0xa8;
    do {
        if (*(s32 *)(param_1 + 4) == iVar2) {
            func_02117e4c(piVar1);
            switch (iVar3) {
            case 0:
                func_02104268();
                break;
            case 1:
                func_02104258();
                break;
            case 2:
                func_02104248();
                break;
            }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x28;
        piVar1 = piVar1 + 32;
    } while (iVar3 < 3);
    if (*(s32 *)(param_1 + 4) == 0x8c) {
        func_02117e4c(param_1 + 0x108);
        func_021041f8(*(u32 *)(q + 0xc) / 100u);
    }
    *(s32 *)(param_1 + 4) = *(s32 *)(param_1 + 4) + 1;
    if (*(s32 *)(param_1 + 4) > 0xbe) {
        *(s32 *)(*(u8 **)&data_0215bf9c + 0x198) = 1;
    }
}
