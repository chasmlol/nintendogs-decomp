#include "ctx.h"

extern s32 data_021480cc;
extern s32 data_021480dc;
extern s32 data_021480ec;
extern s32 data_02148100;
extern s32 data_02159424;
extern s32 data_02159444;
extern s32 func_0210e968(u8 *p, s32 a);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern s32 func_020ab3f0(void);
extern void func_020fc084(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void func_0210b2c8(u8 *param_1, u8 *param_2)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    u16 uVar1;
    s16 sVar2;
    s32 t;

    iVar3 = func_0210e968(param_1, (s32)&data_021480cc);
    iVar4 = func_0210e968(param_1, (s32)&data_021480dc);
    iVar5 = func_0210e968(param_1, (s32)&data_021480ec);
    iVar6 = func_0210e968(param_1, (s32)&data_02148100);
    func_02113090(0, iVar3);
    func_021130c4(0, iVar4);
    func_02112ed0(0, iVar5);
    func_02112e74(0, iVar6);
    iVar3 = func_020ab3f0();
    sVar2 = *(s16 *)(*(s32 *)((u8 *)data_02159424 + 4) + 2);
    uVar1 = *(u16 *)((u8 *)data_02159444 + 0x56);
    func_020fc084(param_2 + 4, 0, 0, 0x17, 2, 10, 1, 0);
    func_020fc084(param_2 + 0x2c, 0, 10, 0x1b, 2, ((u32)(iVar3 << 4) >> 16), 0, 0);
    t = sVar2 + 59;
    func_020fc084(param_2 + 0x54, 0, 10, 0x20, 2,
                  (u16)(t / 60), 1, 0);
    func_020fc084(param_2 + 0x7c, 0, 10, 0x23, 3, uVar1, 1, 0);
}
