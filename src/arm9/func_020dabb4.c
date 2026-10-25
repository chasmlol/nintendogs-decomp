#include "ctx.h"

extern u32 data_02144a08;
extern u32 data_02144a04;
extern u32 data_02159444;
extern u32 data_02159468;

void func_020c8ae8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020c8164(u32 a, s32 b);
void func_020c6300(u8 *p, s32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
s32 func_020e1d48(void);
void func_0209d4b0(u8 *p, s32 a);
void func_0209ce58(u8 *p);
void func_020dadb8(void);
void func_020dad84(void);
void func_020dad68(void);
void func_020dad5c(void);

void func_020dabb4(u8 *param_1)
{
    s32 *piVar2;
    s32 iVar1;
    s32 arr[6];
    u8 *g;
    u8 *h;
    s32 nA;
    s32 w3;
    s32 w4;
    s32 w5;
    s32 v0;
    s32 v1;
    s32 v2;

    piVar2 = *(s32 **)(param_1 + 0x214);
    iVar1 = piVar2[0];
    func_020c8ae8(param_1, *(s32 *)((u8 *)iVar1 + 0x48), *(s32 *)((u8 *)iVar1 + 0x4c), *(s32 *)((u8 *)iVar1 + 0x50), *(s32 *)((u8 *)iVar1 + 0x54), *(s32 *)((u8 *)iVar1 + 0x58), 4);
    iVar1 = func_020c8164(*(u16 *)(param_1 + 160), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32)func_020dadb8, 0, (u32)func_020dad84, (u32)func_020dad68, (u32)func_020dad5c);
    nA = -(s32)data_02144a08;
    v2 = *(s32 *)(param_1 + 0xdc);
    v1 = *(s32 *)(param_1 + 0xd8);
    v0 = *(s32 *)(param_1 + 0xd4);
    arr[0] = v0;
    arr[1] = v1;
    arr[2] = v2;
    w5 = *(s32 *)(param_1 + 0xe8);
    w4 = *(s32 *)(param_1 + 0xe4);
    w3 = *(s32 *)(param_1 + 0xe0);
    arr[3] = w3;
    arr[4] = w4;
    arr[5] = w5;
    func_01ff832c(nA, &arr[0], param_1 + 0xbc, param_1 + 0xbc);
    func_01ff832c(-(s32)data_02144a04, &arr[3], param_1 + 0xbc, param_1 + 0xbc);
    g = (u8 *)data_02159444;
    if ((*(u16 *)(g + 0x84) & 1) != 0) {
        h = (u8 *)data_02159468;
        if (*(s32 *)(h + 0x24) == 0) {
            if (*(s16 *)(param_1 + 138) == 3) {
                if (func_020e1d48() != 0) {
                    return;
                }
            }
        }
    }
    if (piVar2[1] == 0) {
        iVar1 = *(s32 *)(param_1 + 0x7c);
        *(s32 *)(*(u8 **)(param_1 + 0x74) + 0x20) = 0;
        *(s32 *)((u8 *)iVar1 + 0xc) = 0;
        func_0209d4b0(param_1 + 400, 8);
        piVar2[1] = 1;
        func_0209ce58(param_1 + 400);
    }
}
