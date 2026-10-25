#include "ctx.h"

typedef struct { s32 a, b, c, d; } T4;
extern u8 *data_ov004_02170320;
extern u8 *data_02159424;
extern u32 data_ov004_0216fecc[];
extern u32 data_ov004_0216fedc[];

void func_ov004_0215ce88(void);
void func_ov004_0215d504(void);
void func_0210b614(s32 a, s32 b, u16 *c, s32 *d, u32 e, u32 f);
void func_ov004_0215d3ac(void);
void func_ov004_0215d1a0(void);

void func_ov004_0215cc94(void)
{
    s32 local_48[4];
    s32 local_38[4];
    s32 iVar6;
    s32 iVar10;
    s32 k2;
    u32 uVar9;

    func_ov004_0215ce88();
    func_ov004_0215d504();
    iVar10 = 0;
    do {
        *(T4 *)local_48 = *(T4 *)data_ov004_0216fecc;
        iVar6 = (s32)*(s8 *)(data_ov004_02170320 + iVar10 + 0x33bb);
        if (iVar6 > 0) {
            iVar6 = (0x30 - iVar6) >> 3;
            if (iVar6 >= 6) {
                iVar6 = 5;
            }
            ((u16 *)local_48)[3] = *(u8 *)(data_ov004_02170320 + (u32)iVar10 * 2 + 0x33c1) * 8 - *(s16 *)(*(s32 *)(data_ov004_02170320 + 0x36c4) + 2) + 4;
            ((u16 *)local_48)[4] = *(u8 *)(data_ov004_02170320 + (u32)iVar10 * 2 + 0x33c2) * 8 - *(s16 *)(*(s32 *)(data_ov004_02170320 + 0x36c4) + 4) + 4;
            func_0210b614(*(s32 *)(data_ov004_02170320 + 0x33d8), *(s32 *)(data_ov004_02170320 + 0x33d4), *(u16 **)(data_02159424 + 0x10), local_48, 0, iVar6 + 0x24);
        }
        iVar10 = iVar10 + 1;
    } while (iVar10 < 6);
    k2 = 0;
    do {
        if (*(s8 *)(*(s32 *)(data_ov004_02170320 + 0x36c4) + k2 + 0x229e) != -1) {
            *(T4 *)local_38 = *(T4 *)data_ov004_0216fedc;
            uVar9 = 0;
            if (*(s32 *)(data_ov004_02170320 + 0xc) != 0) {
                uVar9 = 1;
            }
            {
                u8 *vb = *(u8 * volatile *)&data_ov004_02170320;
                ((u16 *)local_38)[3] = *(u8 *)(*(s32 *)(vb + 0x36c4) + (u32)k2 * 2 + 0x2296) * 8 - *(s16 *)(*(s32 *)(vb + 0x36c4) + 2) + 4;
                ((u16 *)local_38)[4] = *(u8 *)(*(s32 *)(vb + 0x36c4) + (u32)k2 * 2 + 0x2297) * 8 - *(s16 *)(*(s32 *)(vb + 0x36c4) + 4) + 4;
                if (*(s8 *)(*(s32 *)(vb + 0x36c4) + k2 + 0x229e) == 0) {
                    uVar9 = 4;
                }
            }
            iVar6 = (s32)data_ov004_02170320;
            func_0210b614(*(s32 *)(iVar6 + 0x33d8), *(s32 *)(iVar6 + 0x33d4), *(u16 **)(data_02159424 + 0x10), local_38, 0, uVar9);
        }
        k2 = k2 + 1;
    } while (k2 < 4);
    func_ov004_0215d3ac();
    func_ov004_0215d1a0();
}
