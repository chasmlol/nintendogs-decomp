#include "ctx.h"
extern u8 data_0215be48[];
extern u8 data_0215bfe8[];
extern void func_02111b94(s32 a, s32 b, s32 c);
extern s32 func_0209531c(void);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02109238(void);
extern void func_021092fc(void);
extern void func_02107e1c(void);
extern void func_02108e24(s32 a);

void func_0211c52c(u8 *param_1)
{
    u32 *piVar3;
    s32 iVar2;

    *(u32 *)param_1 = 0;
    *(u32 *)(param_1 + 0xc) = 0;
    piVar3 = (u32 *)(param_1 + 0x1ce4);
    if (*(s32 *)(*(u8 **)data_0215be48 + 0xbc) == 0x17) {
        func_02111b94(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    }
    if (*piVar3 == 0) {
        iVar2 = func_0209531c();
        if (iVar2 == 0 && *(u32 *)data_0215bfe8 == 0) {
            func_02097b94(8, 0x235a, 0, 0, 0);
            *(u16 *)(*(u8 **)data_0215be48 + 0x11160) = 0x10;
            *(u32 *)data_0215bfe8 = 1;
            *(u32 *)(param_1 + 8) = 1;
        } else {
            func_02097b94(8, 0x238c, 0, 0, 1);
        }
        *piVar3 = 1;
    }
    iVar2 = func_0209531c();
    if (iVar2 != 0) {
        func_021092fc();
    } else {
        func_02109238();
    }
    func_02107e1c();
    func_02108e24(0);
}
