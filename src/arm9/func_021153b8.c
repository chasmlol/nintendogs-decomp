#include "ctx.h"

extern s32 *data_0215be48;
extern void func_02117c54(u32 *a);
extern void func_02117e4c(u32 *a);
extern void func_020fc594(s32 a, s32 b, s32 c);
extern void func_02109108(s32 a);
extern void func_021177ac(u32 *a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027708(s32 a);
extern s32 func_02044ccc(s32 a);
extern u32 func_02112854(s32 a, u32 b);
extern void func_0210f14c(s32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_02003d90(s32 a);
extern void func_02108e88(void);
extern void func_02108f44(void);
extern void func_021043fc(void);

void func_021153b8(u32 *param_1)
{
    s32 iVar4;
    s32 iVar5;
    u32 uVar1;
    u32 uVar6;
    s16 sVar2;
    s32 i;
    s32 two;
    s32 one;

    *param_1 = 0;
    param_1[0x2f4 / 4] = 0;
    param_1[0x2f8 / 4] = 0;
    param_1[0x2fc / 4] = 0;
    iVar4 = *(s32 *)((u8 *)data_0215be48 + 0xbc);
    if (iVar4 > 10) goto gt10;
    if (iVar4 >= 10) goto s10;
    if (iVar4 != 4) goto dflt;
    goto g4;
gt10:
    if (iVar4 > 34) goto dflt;
    if (iVar4 < 30) goto dflt;
    if (iVar4 == 30) goto g4;
    if (iVar4 != 34) goto dflt;
    func_02117c54(param_1 + 0x8d);
    func_02117c54(param_1 + 0x95);
    func_02117c54(param_1 + 0x9d);
    sVar2 = *(s16 *)(param_1 + 0x72e);
    if (sVar2 == 0) goto t22end;
    switch (sVar2) {
    case 1:
        goto t22_1;
    case 2:
        goto t22_2;
    }
    goto t22end;
t22_1:
    func_02117c54(param_1 + 0xa5);
    goto t22end;
t22_2:
    func_02117c54(param_1 + 0xa5);
    func_02117c54(param_1 + 0xad);
    func_02117c54(param_1 + 0xb5);
t22end:
    param_1[0xbd] = 1;
    func_020fc594(2, 8, 1);
    goto after;
g4:
    func_02117c54(param_1 + 0x8d);
    func_02117c54(param_1 + 0x95);
    func_02117c54(param_1 + 0x9d);
    sVar2 = *(s16 *)(param_1 + 0x72e);
    if (sVar2 == 0) goto tg4end;
    switch (sVar2) {
    case 1:
        goto tg4_1;
    case 2:
        goto tg4_2;
    }
    goto tg4end;
tg4_1:
    func_02117c54(param_1 + 0xa5);
    goto tg4end;
tg4_2:
    func_02117c54(param_1 + 0xa5);
    func_02117c54(param_1 + 0xad);
    func_02117c54(param_1 + 0xb5);
tg4end:
    goto after;
s10:
    func_020fc594(2, 8, 0);
dflt:
    func_02117e4c(param_1 + 0x8d);
    func_02117e4c(param_1 + 0x95);
    func_02117e4c(param_1 + 0x9d);
    sVar2 = *(s16 *)(param_1 + 0x72e);
    if (sVar2 == 0) goto tdfend;
    switch (sVar2) {
    case 1:
        goto tdf_1;
    case 2:
        goto tdf_2;
    }
    goto tdfend;
tdf_1:
    func_02117e4c(param_1 + 0xa5);
    goto tdfend;
tdf_2:
    func_02117e4c(param_1 + 0xa5);
    func_02117e4c(param_1 + 0xad);
    func_02117e4c(param_1 + 0xb5);
tdfend:
    func_02003d90(0x10);
    func_02108e88();
    func_02108f44();
    func_021043fc();
after:
    iVar4 = *(s32 *)((u8 *)data_0215be48 + 0xa8);
    if (iVar4 == 4 || iVar4 == 10 || iVar4 == 14) {
        func_02109108(1);
        func_021177ac(param_1 + 6);
        func_021177ac(param_1 + 0x15);
    } else if (iVar4 == 0) {
        func_02109108(0);
    }
    i = 0;
    two = 2;
    one = 1;
    do {
        iVar5 = func_01ffdb08((s16)i);
        if (iVar5 != 0) {
            iVar5 = func_02027708(iVar5);
            iVar5 = func_02044ccc(iVar5);
            uVar1 = (u16)(i + 6);
            uVar6 = func_02112854(two, uVar1);
            func_0210f14c(two, uVar1, uVar6, *(s32 *)(iVar5 + 0x88), *(s32 *)(iVar5 + 0x8c), *(s32 *)(iVar5 + 0x90), one, one);
        }
        i = i + 1;
    } while (i < 3);
}
