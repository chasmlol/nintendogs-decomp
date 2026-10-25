#pragma avoid_byte strb
#include "ctx.h"

extern int func_0203567c(int p);
extern int func_02026e68(int p);
extern void func_ov003_0218c050(int p, int q);
extern void func_0203e908(int p, s16 v);

void func_ov003_021863ec(int param_1)
{
    int iVar2;
    int iVar3;

    iVar2 = func_0203567c(param_1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    *(u16 *)(param_1 + 256 + 28) = 1;
    *(u16 *)(param_1 + 256 + 30) = 0;
    if (iVar3 != 0) {
        *(u8 *)(param_1 + 185) = 1;
    } else {
        *(u8 *)(param_1 + 185) = 0;
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xef);
    }
}
