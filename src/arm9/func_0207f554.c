#include "ctx.h"

extern s32 *data_02155cec;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);
extern void func_0207f3a0(s32 a, u32 b, s32 *c);

void func_0207f554(u16 *param_1)
{
    u32 puVar1;
    s32 *iVar2;
    u32 s;
    s = func_02080b08();
    iVar2 = (s32 *)*data_02155cec;
    puVar1 = (u32)&data_02155cec;
    if (param_1 != NULL) {
        puVar1 = *param_1;
        *param_1 = *param_1 | (u16)(1 << *(u32 *)((u8 *)iVar2 + 0x6c));
    }
    *(s32 *)((u8 *)iVar2 + 100) = 0;
    func_0207f3a0(0, puVar1, iVar2);
    func_02080b1c(s);
}
