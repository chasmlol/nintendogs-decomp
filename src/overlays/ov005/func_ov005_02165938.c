#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern s32 data_ov005_02167e7c;
extern s32 data_ov005_02167e74;
extern u8 * volatile data_02159444;
extern s32 data_ov005_02167e8c[];
extern s16 data_ov005_02167e70[];
extern s32 func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_020aafac(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_0209d4b0(s32 *a, s32 b);
extern void func_020be3d4(u8 *p, s32 *q);
extern void func_020d9080(s32 *a, s32 *b, s32 c);
extern u32 func_ov005_021647d8(s32 *a, s32 *b);
extern void func_ov005_0216471c(u32 a);
extern void func_0209cef4(s32 *a, s32 b, s32 c);

void func_ov005_02165938(u8 *param_1)
{
    s16 *psVar6;
    u8 *pq;
    s32 aiStack_68[3];
    s32 local_5c[6];
    s32 local_44[3];
    s32 local_38[3];
    s32 local_2c[3];
    s32 iStack_20[3];
    s32 iVar5;
    s32 iVar3;
    u32 uVar4;

    psVar6 = *(s16 **)(param_1 + 0x214);
    func_02044ca0((s32)*(s16 *)(param_1 + 156));
    iVar3 = func_01ffdb08((s32)psVar6[0]);
    local_5c[0] = 0;
    local_5c[1] = 0;
    local_5c[2] = 0x1000;
    func_02027668(iVar3, &local_5c[3]);
    iVar3 = func_02028130(iVar3);
    func_01ff832c((s32)((s64)data_ov005_02167e7c * (s64)iVar3 + 0x800 >> 12), local_5c, &local_5c[3], aiStack_68);
    iVar3 = func_02044ca0(0);
    func_020aafac(iVar3, (s32 *)(param_1 + 0xbc), aiStack_68, local_5c);
    iVar3 = func_01ffdb08((s32)*(s16 *)*(u8 **)(param_1 + 0x214));
    iVar3 = func_02028130(iVar3);
    if (*(s32 *)(param_1 + 0xc0) < (s32)((s64)data_ov005_02167e74 * (s64)iVar3 + 0x800 >> 12)) {
        iVar3 = func_01ffdb08((s32)*(s16 *)*(u8 **)(param_1 + 0x214));
        iVar3 = func_02028130(iVar3);
        *(s32 *)(param_1 + 0xc0) = (s32)((s64)data_ov005_02167e74 * (s64)iVar3 + 0x800 >> 12);
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
        func_0209d4b0((s32 *)(param_1 + 400), 5);
    }
    *(T3 *)local_44 = *(T3 *)data_ov005_02167e8c;
    func_020be3d4(param_1, (s32 *)(param_1 + 200));
    func_020d9080((s32 *)(param_1 + 200), local_44, 0x2aab);
    if (*(s32 *)(psVar6 + 4) != 0) {
        local_44[0] = 0;
        local_44[1] = 0x1000;
        local_44[2] = 0;
        func_020d9080((s32 *)(param_1 + 200), local_44, 0xeaab);
    } else {
        local_44[0] = 0;
        local_44[1] = 0x1000;
        local_44[2] = 0;
        func_020d9080((s32 *)(param_1 + 200), local_44, 0x1555);
    }
    iVar3 = (s32)data_02159444;
    if ((*(u16 *)(iVar3 + 0x84) & 1) != 0 && (*(s32 *)(iVar3 + 0x94) > (s32)data_ov005_02167e70[0] || *(s32 *)(iVar3 + 0x98) > (s32)data_ov005_02167e70[0])) {
        iVar5 = (s32)data_02159444;
        iVar3 = *(s32 *)(iVar5 + 0x1c);
        *(T3 *)local_38 = *(T3 *)(iVar3 + 0x30);
        *(T3 *)local_2c = *(T3 *)(iVar5 + 0x9c);
        uVar4 = func_ov005_021647d8(local_38, local_2c);
        func_ov005_0216471c(uVar4);
        if (uVar4 != 0) {
            iVar3 = *(s32 *)(data_02159444 + 0x1c);
            *(T3 *)iStack_20 = *(T3 *)(iVar3 + 0x48);
            iVar3 = func_01ffdb08((s32)*(s16 *)*(u8 **)(param_1 + 0x214));
            iVar3 = func_02028130(iVar3);
            func_01ff832c((s32)((s64)data_ov005_02167e74 * (s64)iVar3 + 0x800 >> 12), iStack_20, (s32 *)(param_1 + 0xbc), iStack_20);
            *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) = *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) & 0xfffffffd;
            iVar3 = *(s32 *)(psVar6 + 2);
            *(s32 *)(iVar3 + 0x20) = iStack_20[0] + *(s32 *)(**(s32 **)(iVar3 + 0x18) + 4);
            *(s32 *)(iVar3 + 0x24) = iStack_20[1] + *(s32 *)(**(s32 **)(iVar3 + 0x18) + 8);
            *(s32 *)(iVar3 + 0x28) = iStack_20[2] + *(s32 *)(**(s32 **)(iVar3 + 0x18) + 12);
            pq = data_02159444;
            iVar5 = *(s32 *)(pq + 0x98);
            iVar3 = *(s32 *)(pq + 0x94);
            func_0209cef4((s32 *)(param_1 + 400), 6, iVar3 * iVar3 + iVar5 * iVar5);
            return;
        }
        *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) = *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) | 2;
        return;
    }
    *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) = *(u32 *)(*(s32 *)(psVar6 + 2) + 0x1c) | 2;
}
