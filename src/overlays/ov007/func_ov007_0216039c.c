#include "ctx.h"
#pragma opt_propagation off

extern u32 data_ov007_02160e60;
extern u32 data_ov007_02160e68;
extern u32 data_ov007_02160e6c;
extern u32 data_ov007_02160e70;
extern u32 data_ov007_02160e74;

s32 func_ov007_0215edb8(void);
s32 func_02093e04(void);
void func_0206c7d4(u32 a, u32 b, u32 c);
void func_02093788(u32 a);
void func_02093784(void);
void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02096c20(u32 a, u32 b, u32 c);
void func_02095a0c(void);
void func_02095d6c(u32 a, u32 b, u32 c, u32 d);
void func_ov007_0215dc90(s32 a);
void func_ov007_0215dd0c(s32 a);
void func_ov007_0215ef10();
void func_ov007_0215f050(s32 a);
void func_ov007_0215f034(u32 a, u32 b);
s32 func_ov007_0215da20(void);

void func_ov007_0216039c(void)
{
    s32 iVar3;
    s32 sw;
    s32 bVar1;

    iVar3 = func_ov007_0215edb8();
    if (iVar3 == 1) {
        if (func_02093e04() == 0) {
            func_0206c7d4(data_ov007_02160e60, data_ov007_02160e68, 0x74f8);
            func_02093788(data_ov007_02160e60);
        }
        func_02093784();
        func_02097b94(0, 0x4b1, 0, 0, 0);
        func_02096c20(0, 0, 0);
        func_02095a0c();
        func_02095d6c(0, 0, 0, 1);
        sw = 0;
        *(u32 *)&data_ov007_02160e6c = sw;
        switch (sw) {
        case 0:
            func_ov007_0215dc90(sw);
            return;
        case 1:
            func_ov007_0215dd0c(sw);
            return;
        case 4:
            data_ov007_02160e74 = sw;
            return;
        case 2:
            func_ov007_0215f050(sw);
            func_ov007_0215f034(data_ov007_02160e68, 0x74f8);
            data_ov007_02160e70 = 0;
            return;
        case 3:
            func_ov007_0215ef10(sw);
            return;
        default:
            goto fin;
        }
    }
    iVar3 = func_ov007_0215edb8();
    if (iVar3 != 5) goto zero;
    switch (func_ov007_0215da20()) {
    case 20:
        bVar1 = 1;
        goto join;
    default:
        break;
    }
zero:
    bVar1 = 0;
join:
    if (bVar1 == 0) return;
    func_ov007_0215ef10();
fin:
    ;
}
