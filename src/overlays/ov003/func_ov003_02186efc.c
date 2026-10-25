#include "ctx.h"
extern u8 data_02152cd8[];
extern s32 func_ov003_02187168(u8 *p, s32 a, s32 b);
extern void func_02067e34(u8 *a, u8 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_02009eb8(s32 *a, s32 *b);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_02023654(u8 *p, s32 a, s32 b);

void func_ov003_02186efc(u8 *param_1, s32 param_2)
{
    s32 blk[7];
    s32 iVar2;
    s32 uVar3;
    s64 lv;

    iVar2 = func_ov003_02187168(param_1, 1, param_2);
    if (iVar2 == 0) {
        goto zero_path;
    }
    blk[0] = *(s32 *)(data_02152cd8 + 0x50);
    blk[1] = *(s32 *)(data_02152cd8 + 0x5c);
    blk[2] = *(s32 *)(data_02152cd8 + 0x68);
    func_02067e34(param_1 + 0x2a0, param_1 + 0x30c + (s16)param_2 * 12, &blk[3]);
    uVar3 = func_02028130(param_1);
    lv = (s64)uVar3 * 7168 + 0x800;
    blk[4] = blk[4] + (s32)((u32)(lv >> 12));
    if (func_02009eb8(&blk[0], &blk[3]) == 0) {
        goto notmatch;
    }
    switch (*(s8 *)(param_1 + 0xa1)) {
    case 0:
        func_0203e8cc(param_1, 0, (s16)(param_2 + 0x1ac));
        break;
    case 1:
    case 3:
        func_0203e8cc(param_1, 0, 0x1d);
        break;
    case 2:
    case 4:
        func_0203e8cc(param_1, 0, 0x1e);
        break;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 30) {
        return;
    }
    if (param_2 == 0) {
        func_02023654(param_1, 17, 1);
        return;
    }
    func_02023654(param_1, 17, 2);
    return;
notmatch:
    if (*(s16 *)(param_1 + 0x152) == 27) {
        return;
    }
    func_0203e8cc(param_1, 0, (s16)(param_2 + 0x1b0));
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e8cc(param_1, 0, 27);
    return;
zero_path:
    if (*(s16 *)(param_1 + 0x152) == 27) {
        func_0203e908(param_1, 238);
    } else {
        func_0203e908(param_1, 237);
    }
}
