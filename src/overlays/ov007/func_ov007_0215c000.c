#include "ctx.h"

#define GP() (*(u8 **)&data_ov007_02160d80)

extern u32 data_ov007_02160d80;
extern u32 data_ov007_02160928;
extern u32 data_ov007_0216093c;
extern u32 data_ov007_0216094c;
extern u32 data_ov007_02160960;
extern u32 data_ov007_02160910;
extern u32 data_ov007_02160974;
extern u32 data_ov007_02160984;
extern u32 data_ov007_02160990;
extern u32 data_ov007_021609ac;
extern u32 data_ov007_021609c8;

extern s32 func_0206496c();
extern u32 func_020d5d68();
extern u32 func_020d5d18();
extern void func_02005e78();
extern u32 func_020d5cd4();
extern u32 func_020d5cb8();
extern u32 func_020d6c84();
extern u32 func_020d6c94();
extern u32 func_0206470c();

u32 func_ov007_0215c000(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    struct { u16 a[2]; u8 pad[1976]; } S;
    s32 iVar4;
    u32 uVar7;
    u32 uVar3;
    u32 uVar5;

    if (*(u32 *)&data_ov007_02160d80 == 0) {
        return param_1;
    }
    iVar4 = func_0206496c(S.a);
    if (iVar4 == 0) {
        uVar5 = func_020d5d68(S.a[0]);
        func_02005e78(0, param_1, (u32)&data_ov007_02160928, S.a[0], uVar5);
        uVar5 = func_020d5d18(S.a[1]);
        func_02005e78(1, (param_1 + 1) & 0xff, (u32)&data_ov007_0216093c, S.a[1], uVar5);
        param_1 = (param_1 + 2) & 0xff;
    } else {
        func_02005e78(0, param_1, (u32)&data_ov007_0216094c);
        param_1 = (param_1 + 1) & 0xff;
    }
    uVar7 = func_020d5cd4();
    uVar5 = func_020d5cb8();
    func_02005e78(0, param_1, (u32)&data_ov007_02160960, uVar7, uVar5);
    func_02005e78(0, (param_1 + 2) & 0xff, (u32)&data_ov007_02160974,
                  ((u32 *)&data_ov007_02160910)[*(s32 *)(GP() + 0x28)],
                  ((u32 *)&data_ov007_02160910)[*(s32 *)(GP() + 0x2c)]);
    if (*(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x28) == 2) {
        if (func_020d6c84() != 0) {
            uVar7 = 1;
            goto L134;
        }
    } else if (*(s32 *)(*(u8 **)&data_ov007_02160d80 + 0x28) == 3) {
        uVar7 = 1;
        goto L134;
    }
    uVar7 = 0;
L134:
    func_02005e78(1, (param_1 + 3) & 0xff, (u32)&data_ov007_02160984, uVar7);
    uVar3 = func_020d6c94();
    uVar7 = func_0206470c();
    func_02005e78(1, (param_1 + 4) & 0xff, (u32)&data_ov007_02160990, uVar3, *(u16 *)(GP() + 0x44), uVar7);
    func_02005e78(1, (param_1 + 5) & 0xff, (u32)&data_ov007_021609ac, *(u32 *)(GP() + 0x34),
                  *(u16 *)(GP() + 0x30), *(u16 *)(GP() + 0x32));
    param_1 += 6;
    param_1 &= 0xff;
    if (*(s32 *)(GP() + 0x48) == 1 && *(s32 *)(GP() + 0x28) == 2) {
        func_02005e78(1, param_1, (u32)&data_ov007_021609c8, *(s16 *)(GP() + 0x4c), *(s16 *)(GP() + 0x56),
                      *(s16 *)(GP() + 0x54));
        param_1 = (param_1 + 1) & 0xff;
    }
    return param_1;
}
