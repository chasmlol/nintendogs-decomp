#include "ctx.h"

extern s32 data_ov005_02167edc;
extern s32 data_ov005_02167ee0;
extern s32 data_ov005_02167ee4;
extern u8 *data_02159444;

s32 func_02044ca0(s32 a);
s32 func_01ffdb08(s32 a);
void func_02027668(s32 a, u32 *b);
s32 func_02028130(s32 a);
void func_01ff832c(u32 a, u32 *b, u32 *c, s32 *d);
void func_020aafac(s32 a, u8 *b, s32 *c, u32 *d);
s32 func_ov005_02160af4(s32 a);
void func_0209d4b0(u8 *a, u32 b);
void func_0209cef4(u8 *a, u32 b, s32 c);
void func_ov005_02167b50(u8 *a, s32 b);
void func_ov005_02166e74(u8 *a);

void func_ov005_02166cc0(u8 *param_1)
{
    s64 lVar1;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 unaff_r5;
    s32 unaff_r4;
    s16 *psVar5;
    s32 aiStack_38[3];
    u32 local_2c[6];

    psVar5 = *(s16 **)(param_1 + 0x214);
    (void)func_02044ca0(*(s16 *)(param_1 + 0x9c));
    iVar2 = func_01ffdb08((s32)*psVar5);
    local_2c[2] = 0x1000;
    local_2c[0] = 0;
    local_2c[1] = 0;
    func_02027668(iVar2, local_2c + 3);
    iVar3 = func_02028130(iVar2);
    lVar1 = (s64)data_ov005_02167edc * (s64)iVar3 + 0x800;
    func_01ff832c((u32)((u64)lVar1 >> 12), local_2c, local_2c + 3, aiStack_38);
    iVar3 = func_02044ca0(0);
    func_020aafac(iVar3, param_1 + 0xbc, aiStack_38, local_2c);
    iVar3 = func_01ffdb08((s32)*(s16 *)(*(u8 **)(param_1 + 0x214)));
    if (*(s16 *)(param_1 + 0x94) == 63) {
        unaff_r5 = data_ov005_02167ee0;
    } else if (*(s16 *)(param_1 + 0x94) == 62) {
        unaff_r5 = data_ov005_02167ee4;
    }
    iVar3 = func_02028130(iVar3);
    lVar1 = (s64)unaff_r5 * (s64)iVar3 + 0x800;
    if (*(s32 *)(param_1 + 0xc0) < (s32)((u64)lVar1 >> 12)) {
        iVar3 = func_01ffdb08((s32)*(s16 *)(*(u8 **)(param_1 + 0x214)));
        if (*(s16 *)(param_1 + 0x94) == 63) {
            unaff_r4 = data_ov005_02167ee0;
        } else if (*(s16 *)(param_1 + 0x94) == 62) {
            unaff_r4 = data_ov005_02167ee4;
        }
        iVar3 = func_02028130(iVar3);
        lVar1 = (s64)unaff_r4 * (s64)iVar3 + 0x800;
        *(u32 *)(param_1 + 0xc0) = (u32)((u64)lVar1 >> 12);
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
        func_0209d4b0(param_1 + 400, 5);
    }
    iVar3 = func_ov005_02160af4(iVar2);
    if (iVar3 != 0) {
        iVar4 = *(s32 *)(data_02159444 + 0x98);
        iVar3 = *(s32 *)(data_02159444 + 0x94);
        func_0209cef4(param_1 + 400, 6, iVar3 * iVar3 + iVar4 * iVar4);
        func_ov005_02167b50(param_1, iVar2);
    }
    func_ov005_02166e74(param_1);
}
