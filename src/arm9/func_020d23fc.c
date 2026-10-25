#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern s32 data_02142ea0;
extern s32 func_020c8cd0(void);
extern void func_020cf9c8(s32 a, s32 b, s32 c, s32 d);

void func_020d23fc(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 p1c = param_1;
    s32 p2c = param_2;
    s32 p3c = param_3;
    s32 p4c = param_4;
    s32 iVar4;
    s32 iVar3;
    s32 bVar2;
    s32 s92;
    s32 iv;
    u8 *tab;
    u8 *gv;
    u8 **pg;

    pg = &data_02159444;
    gv = *pg;
    iVar4 = *(s16 *)(gv + 0x7a);
    if (iVar4 < 0) goto zero;
    tab = data_02159468;
    if (*(s16 *)(tab + 0x20) > iVar4) goto ent;
zero:
    iVar4 = 0;
    goto call;
ent:
    iVar4 = *(s32 *)(tab + iVar4 * 4 + 4);
call:
    iVar3 = func_020c8cd0();
    if (*(s16 *)(iVar4 + 0x90) == 2 || *(s16 *)(iVar4 + 0x90) == 3 || *(s16 *)(iVar4 + 0x90) == 6) {
        func_020cf9c8(p1c, 16, -1, 0);
        return;
    }
    if (iVar3 == -1) goto m1;
    if (iVar3 != *(s16 *)(iVar4 + 0x98)) return;
    func_020cf9c8(p1c, 18, *(s16 *)(iVar4 + 0x98), 0);
    return;
m1:
    s92 = *(s16 *)(iVar4 + 0x92);
    if (s92 == 3) {
        if (*(s16 *)((u32)iVar4 + 0x90) == 1) {
            bVar2 = 1;
            goto f1;
        }
    }
    bVar2 = 0;
f1:
    if (bVar2 != 0) goto l148;
    if (s92 == 3 || s92 == 6 || s92 == 8) {
        if (*(s16 *)((u32)iVar4 + 0x90) == 4) {
            bVar2 = 1;
            goto f2;
        }
    }
    if (s92 == 5) {
        if (*(s16 *)((u32)iVar4 + 0x90) == 7) {
            bVar2 = 1;
            goto f2;
        }
    }
    if (s92 == 5) {
        if (*(s16 *)((u32)iVar4 + 0x90) == 1) {
            bVar2 = 1;
            goto f2;
        }
    }
    bVar2 = 0;
f2:
    if (bVar2 == 0) goto l174;
l148:
    func_020cf9c8(p1c, 21, -1, p3c);
    data_02142ea0 = (s16)p2c;
    return;
l174:
    iv = data_02142ea0 - 1;
    data_02142ea0 = iv;
    if (iv > 0) return;
    func_020cf9c8(p1c, p4c, -1, 0);
    data_02142ea0 = -1;
    return;
}
