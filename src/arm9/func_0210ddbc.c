#include "ctx.h"

extern u32 data_0215be48;
extern u16 data_021498d4[];
extern u16 data_021497f4[];
extern u16 data_02149864[];
extern u16 data_02149944[];
extern u16 data_021499c8[];
extern u16 data_02149a4c[];
extern u16 data_02149ad0[];
extern u16 data_02149b54[];

extern u8 *func_02085ddc(u32 a, u32 b);
extern void func_021015b8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

#define BODY(IDX, TBL)     {         u8 *ps_ = func_02085ddc(*(u32 *)(p5 + 4), (IDX));         s32 x_ = (((s32)*(s16 *)ps_) << 20) >> 20;         s32 y_ = (((s32)*(s16 *)(ps_ + 2)) << 20) >> 20;         u16 v_ = (TBL)[(IDX)];         u32 b_ = *(u8 *)(ps_ + 4);         if (v_ != 0) {             func_021015b8(0, bse_, x_ + (b_ >> 1) - 51, y_ - 71, v_, 7);         }     }

void func_0210ddbc(u8 *param_1)
{
    u8 *p5;
    u8 *q1;
    u8 *p4;
    u32 bse_;
    s32 i;

    q1 = (u8 *)((u32)(*(u8 **)&data_0215be48) + 0x1dec);
    p5 = q1 + 0x528;
    p4 = p5 + 36;
    switch (*(u32 *)(param_1 + 0x1c5c)) {
    case 0:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 4;
        do {
            BODY(i, data_021498d4);
            i = i + 1;
        } while (i <= 48);
        break;
    case 1:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 4;
        do {
            BODY(i, data_021497f4);
            i = i + 1;
        } while (i <= 48);
        break;
    case 2:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 4;
        do {
            BODY(i, data_02149864);
            i = i + 1;
        } while (i <= 48);
        break;
    case 3:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 9;
        do {
            BODY(i, data_02149944);
            i = i + 1;
        } while (i <= 64);
        break;
    case 4:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 9;
        do {
            BODY(i, data_021499c8);
            i = i + 1;
        } while (i <= 64);
        break;
    case 5:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 2;
        do {
            BODY(i, data_02149a4c);
            i = i + 1;
        } while (i <= 57);
        break;
    case 6:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 2;
        do {
            BODY(i, data_02149ad0);
            i = i + 1;
        } while (i <= 57);
        break;
    case 7:
        bse_ = *(u32 *)(param_1 + 0x14);
        i = 2;
        do {
            BODY(i, data_02149b54);
            i = i + 1;
        } while (i <= 57);
        break;
    default:
        break;
    }
    *(u32 *)p4 = 1;
}
