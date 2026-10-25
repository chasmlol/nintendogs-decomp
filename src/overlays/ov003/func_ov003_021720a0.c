#include "ctx.h"

typedef struct {
    u8 pad[0x6c];
    u32 f;
} T6c;

extern int func_ov003_02174844(int a, int b, int c, int d, int e, int f, int g);
extern int func_02039cc4(int a);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, int b);
extern void func_0203e908(int a, int b);
extern int func_02023780(int a);
extern s16 *func_02024114(int a, int b);
extern u32 func_020293d8(int a, int b, int c);

u32 func_ov003_021720a0(int param_1)
{
    int iVar2;
    s16 *psVar3;

    iVar2 = func_ov003_02174844(param_1, 0, 500, 0x1f5, 0x200, 0x201, 10);
    if (iVar2 == 0) {
        return iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        iVar2 = func_020bc3c4() + 136;
        *(u32 *)(iVar2 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 136));
    }
    func_0203e908(param_1, 8);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == NULL) {
        return (u32)psVar3;
    }
    return func_020293d8(param_1, (s16)(*(u16 *)psVar3 + 12), *(u8 *)((u8 *)psVar3 + 0x28));
}
