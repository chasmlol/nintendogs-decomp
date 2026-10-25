#include "ctx.h"

extern u32 data_ov007_02160ab0[];
extern u8 data_ov007_02160ae8[];
extern u8 *data_ov007_02160d9c;
extern u32 data_ov007_021609e4[];
extern u8 data_ov007_02160aec[];
extern u8 data_ov007_02160afc[];
extern u8 data_ov007_02160b18[];
extern u16 data_ov007_02160de8[];

extern u32 func_ov007_0215c000(u32 a, u32 b, u32 c, u32 d);
extern u32 func_ov007_0215edb8(void);
extern void func_02005e78(u32 a, u32 b, u32 c, u32 d);
extern u32 func_0206fbf0(void);
extern u32 func_ov007_0215dab4(void);
extern u32 func_ov007_0215e4a4(u32 a);
extern u32 func_ov007_0215e2f0(u32 a);

u32 func_ov007_0215e1c8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;
    u8 *P;

    uVar1 = func_ov007_0215c000(param_1, param_2, param_3, param_4);
    iVar2 = func_ov007_0215edb8();
    func_02005e78(0, (uVar1 + 1) & 0xff, (u32)data_ov007_02160ae8, data_ov007_02160ab0[iVar2]);
    func_02005e78(0, (uVar1 + 2) & 0xff, (u32)data_ov007_02160aec,
                  data_ov007_021609e4[*(u32 *)(data_ov007_02160d9c + 4)]);
    P = data_ov007_02160d9c;
    uVar3 = func_0206fbf0();
    ((void (*)(u32, u32, u32, u32, u32, u32))func_02005e78)(1, (uVar1 + 3) & 0xff, (u32)data_ov007_02160afc, uVar3,
                                                            *(u32 *)(P + 0x10c), *(u32 *)(P + 0x110));
    ((void (*)(u32, u32, u32, u32, u32))func_02005e78)(1, (uVar1 + 4) & 0xff, (u32)data_ov007_02160b18,
                                                       data_ov007_02160de8[0], *(s16 *)(data_ov007_02160d9c + 0x12c));
    uVar1 = (uVar1 + 5) & 0xff;
    iVar2 = func_ov007_0215dab4();
    switch (iVar2) {
    case 2:
        uVar1 = func_ov007_0215e4a4(uVar1);
        break;
    case 3:
        uVar1 = func_ov007_0215e2f0(uVar1);
        break;
    }
    return uVar1;
}
