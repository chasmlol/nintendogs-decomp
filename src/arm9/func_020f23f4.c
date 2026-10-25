#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02145ea4[];
extern u8 data_02145eb4[];
extern u8 data_02145ec4[];
extern u8 data_02145edc[];
extern u8 *data_0215be48;
extern u8 data_02145f1c[];
extern u8 data_02145ef0[];
extern u8 data_02145f04[];
extern u8 data_02145f18[];
extern u16 data_02133070[];
extern u32 data_02133078[];

extern u32 func_0210ea40(u32 a, u32 b, u32 c, u32 d);
extern u32 func_0210e968(u32 a, void *b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_020fc76c(u32 a, void *b, void *c, void *d, void *e);
extern u32 func_02112bc0(u32 a, u32 b);
extern void func_02112978(u32 a, u32 b, s16 c, s16 d);
extern void func_02108fc8(void);
extern void func_02109084(void);
extern void func_02108e24(u32 a);
extern void func_020a1a40(u32 a);


#pragma opt_strength_reduction off
#pragma opt_common_subs off
void func_020f23f4(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 ch1;
    u16 *tbl;
    s32 *piVar8;
    s32 iVar5;
    s32 off;
    s32 z1;
    s32 z2;
    s32 c16;
    s32 ch;
    s32 iVar4, iVar6, iVar7;
    s32 i;

    piVar8 = (s32 *)(param_1 + 0x1c90);
    func_0210ea40(0x11, 0x1c90, param_3, param_4);
    iVar4 = func_0210e968(0x11, data_02145ea4);
    iVar5 = func_0210e968(0x11, data_02145eb4);
    iVar6 = func_0210e968(0x11, data_02145ec4);
    iVar7 = func_0210e968(0x11, data_02145edc);
    func_02113090(2, iVar4);
    func_021130c4(2, iVar5);
    func_02112ed0(2, iVar6);
    func_02112e74(2, iVar7);
    *(s32 *)(data_0215be48 + 0xc838) = 1;
    *(s32 *)(data_0215be48 + 0xc83c) = 1;
    func_020fc76c(0x11, data_02145ef0, data_02145f04, data_02145f18, data_02145f1c);
    *(s32 *)(param_1 + 4) = 0;
    *param_1 = 0;
    iVar4 = func_02112bc0(2, 4);
    *(s32 *)(param_1 + 0x14c) = iVar4;
    z1 = 0;
    do {
        iVar7 = func_02112bc0(2, data_02133070[z1]);
        *(s32 *)(param_1 + z1 * 4 + 0x13c) = iVar7;
        z1++;
    } while (z1 < 4);
    if (*(s32 *)(data_0215be48 + 0xbc) == 5) {
        *piVar8 = -2;
    }
    i = 0;
    off = i;
    z2 = i;
    z1 = i;
    c16 = 16;
    ch = 2;
    do {
        if (i == *piVar8) {
            *(s32 *)(param_1 + i * 8 + 0xfc) = z1;
            *(s32 *)(param_1 + i * 8 + 0x100) = *(s32 *)(param_1 + 0x14c) - *(s32 *)(param_1 + i * 4 + 0x13c);
            *(s32 *)(param_1 + i * 8 + 0x11c) = z1;
            *(s32 *)(param_1 + i * 8 + 0x120) = data_02133078[i];
        } else {
            *(s32 *)(param_1 + i * 8 + 0xfc) = -0x100 - off;
            *(s32 *)(param_1 + i * 8 + 0x100) = z2;
            *(s32 *)(param_1 + i * 8 + 0x11c) = c16;
            *(s32 *)(param_1 + i * 8 + 0x120) = z2;
        }
        func_02112978(ch, data_02133070[i], (s16)*(s32 *)(param_1 + i * 8 + 0xfc), (s16)*(s32 *)(param_1 + i * 8 + 0x100));
        i++;
        off += 0x40;
    } while (i < 4);
    *piVar8 = -2;
    *(s32 *)(param_1 + 8) = -2;
    func_02108fc8();
    func_02109084();
    func_02108e24(0);
    func_020a1a40(0x2b);
}
