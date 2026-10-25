#include "ctx.h"

extern u32 data_ov005_02167f00;
extern u32 *func_020038b8(u32 *p, s32 n);

void func_ov005_02163630(u32 *p)
{
    s16 i;

    *(u32 **)&data_ov005_02167f00 = func_020038b8(p, 132);
    i = 0;
    do {
        *(u32 *)((u8 *)*(u32 **)&data_ov005_02167f00 + i * 4 + 0xc) = 0;
        i = i + 1;
    } while (i < 11);
    i = 0;
    do {
        *(u32 *)((u8 *)*(u32 **)&data_ov005_02167f00 + i * 4 + 0x38) = 0;
        i = i + 1;
    } while (i < 4);
    *(u32 *)((u8 *)*(u32 **)&data_ov005_02167f00 + 0x48) = 0;
    *(u32 *)((u8 *)*(u32 **)&data_ov005_02167f00 + 0x4c) = 0;
    *(u32 *)((u8 *)*(u32 **)&data_ov005_02167f00 + 0x50) = 0;
    *(u16 *)((u8 *)*(u32 **)&data_ov005_02167f00 + 0x70) = 0;
}
