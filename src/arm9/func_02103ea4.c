#include "ctx.h"

extern s32 data_0215be48;
typedef struct { u8 pad[0x294]; s32 f; } Tail;
extern s32 data_02159444;
extern u32 func_0210f3e4(s32 a, s32 b);
extern s32 func_0210e954(void);
extern s16 *func_0210f100(s32 a, s32 b);
extern s32 func_0210f404(s32 a);
extern void func_0210ea40(s32 a);
extern void func_0210f2c0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_021128a8(s32 a, s32 b, s32 c);

BOOL func_02103ea4(void)
{
    u32 uVar1;
    s32 iVar2;
    s16 *psVar3;
    s32 iVar4;
    s32 iVar5;
    BOOL bVar6;
    u8 *q;
    s32 *pp;

    iVar4 = data_0215be48;
    bVar6 = 1;
    q = (u8 *)((u8 *)iVar4 + 0x1dec);
    pp = &((Tail *)q)->f;
    if (*(s32 *)((u8 *)iVar4 + 0x5034) != 0) {
        goto done;
    }
    iVar5 = *(s16 *)((u8 *)data_02159444 + 0x7e);
    if (iVar5 < 0) {
        goto done;
    }
    if (*pp != 0) {
        bVar6 = 0;
        goto done;
    }
    uVar1 = func_0210f3e4(0, iVar5);
    iVar2 = func_0210e954();
    if (iVar2 == 0) {
        goto done;
    }
    psVar3 = func_0210f100(0, iVar5);
    iVar5 = func_0210f404(psVar3[2]);
    func_0210ea40(iVar5);
    func_0210f2c0(iVar5, bVar6, 0x1c, uVar1, 2);
    func_021128a8(bVar6, 0x1c, 2);
done:
    return bVar6;
}
