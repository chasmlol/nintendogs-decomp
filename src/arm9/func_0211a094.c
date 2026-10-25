#include "ctx.h"

extern u8 *data_0215942c;
extern s32 *data_02159030;
extern u32 data_0214aa4c;
extern u32 data_0214aa44;
extern u8 data_0215bfcc[];
extern u8 *data_02159430;
extern u8 data_0212fac4[];
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028100(s32 a);
extern s32 func_0202817c(s32 a);
extern s32 func_02093278(s32 a);
extern s32 func_02090cac(s32 a, s32 b, s32 c);
extern s32 func_0208fccc(s32 a);
extern s32 func_0211a344(void);
extern void func_020fc310(s32 a, s32 b);

s32 func_0211a094(u32 param_1, s32 param_2)
{
    u16 *puVar7;
    s32 iVar6;
    s32 iVar2;
    s32 iVar4;
    s32 iVar5;
    s32 iVar7;
    s16 *psVar3;
    u16 w;

    iVar4 = (s32)data_0215942c;
    iVar5 = 0;
    puVar7 = (u16 *)(iVar4 + 0x20);
    iVar6 = -1;
    iVar2 = 0;
    do {
        w = *puVar7;
        if ((w & 1) != 0) {
            if ((w & 2) != 0) {
                iVar6 = iVar2;
                break;
            }
        }
        iVar2 = (s16)(iVar2 + 1);
        puVar7 = puVar7 + 10;
    } while (iVar2 < 3);
    if (param_1 > 0x3000e) goto HI;
    if (param_1 >= 0x3000e) goto EQ;
    switch (param_1) {
    case 0x30000: goto C0;
    case 0x30001: goto END;
    case 0x30002: goto C2;
    case 0x30003: goto C3;
    case 0x30004: goto END;
    case 0x30005: goto C5;
    default: goto END;
    }
HI:
    if (param_1 > 0x3000f) goto HI2;
    if (param_1 != 0x3000f) goto END;
    goto C3000f;
HI2:
    if (param_1 != 0x30013) goto END;
    goto C30013;
C2:
    iVar2 = 0;
    if (param_2 == 0) goto C2a;
    if (param_2 != 1) goto C2c;
    goto C2b;
C2a:
    iVar2 = func_01ffdb08((s32)*(s16 *)(iVar4 + 0xe));
    goto C2c;
C2b:
    iVar2 = func_01ffdb08(iVar6);
C2c:
    iVar5 = func_0202817c(iVar2) + 0x78;
    goto END;
C5:
    iVar5 = 0;
    iVar2 = *(s32 *)((u8 *)data_02159030 + 4);
    iVar7 = func_02028100(func_01ffdb08((s32)*(s16 *)(iVar4 + 0xe)));
    if (iVar7 == 0) goto C5a;
    if (iVar7 != 1) goto END;
    goto C5b;
C5a:
    iVar5 = func_02090cac(iVar2, 0x546, param_2);
    goto END;
C5b:
    iVar5 = func_02090cac(iVar2, 0x547, param_2);
    goto END;
C3:
    iVar2 = 0;
    if (param_2 == 0) goto C3a;
    if (param_2 != 1) goto C3c;
    goto C3b;
C3a:
    iVar2 = func_01ffdb08((s32)*(s16 *)(iVar4 + 0xe));
    goto C3c;
C3b:
    iVar2 = func_01ffdb08(iVar6);
C3c:
    puVar7 = (u16 *)func_0202817c(iVar2);
    iVar5 = func_0208fccc((s32)*puVar7);
    goto END;
EQ:
    iVar2 = *(s32 *)((u8 *)data_02159030 + 4);
    iVar4 = (s32)data_0214aa4c;
    iVar5 = 0;
    if (iVar4 == 0) goto E0;
    if (iVar4 == 1) goto E1;
    if (iVar4 != 2) goto END;
    goto E2;
E0:
    iVar5 = func_02090cac(iVar2, 0x579, 0);
    goto END;
E1:
    iVar5 = func_02090cac(iVar2, 0x57a, 0);
    goto END;
E2:
    iVar5 = func_02090cac(iVar2, 0x578, 0);
    goto END;
C3000f:
    iVar5 = func_0211a344();
    goto END;
C30013:
    func_020fc310((s32)data_0214aa44, (s32)data_0215bfcc);
    iVar5 = (s32)(vu8 *)data_0215bfcc;
    goto END;
C0:
    if (param_2 == 1) {
        iVar2 = *(s32 *)((u8 *)data_02159030 + 0x38);
        psVar3 = (s16 *)func_02093278((s32)*(s16 *)(data_02159430 + 4));
        iVar5 = func_02090cac(iVar2, *(s32 *)(data_0212fac4 + *psVar3 * 12 + 8), 1);
    }
END:
    return iVar5;
}
