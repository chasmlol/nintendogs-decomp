#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern void func_ov004_0215f5a0(void);
extern void func_ov004_0215fec0(void);
extern void func_ov004_0215f418(void);
extern void func_ov004_0215ed20(void);
extern void func_ov004_0215ebbc(void);
extern void func_ov004_0215d9f4(void);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov004_0215d8c4(void)
{
    u8 *lr;
    u32 r12;
    s8 cVar1;
    s32 i;

    u32 pad;
    (void)&pad;

    SwapByte(**(u8 **)((u8 *)(data_ov004_02170320 + 0x3000) + 0x6c4), (vu8 *)(data_ov004_02170320 + 0x1a));
    SwapByte(*(*(u8 **)((u8 *)(data_ov004_02170320 + 0x3000) + 0x6c4) + 1), (vu8 *)(data_ov004_02170320 + 0x1b));
    lr = data_ov004_02170320;
    *(vu32 *)(lr + 4) = *(vu32 *)(lr + 4) + 1;
    lr = data_ov004_02170320;
    r12 = *(u32 *)(lr + 4);
    if (r12 % 30u == 0) {
        *(u32 *)(lr + 0xc) = (*(u32 *)(lr + 0xc) == 0);
    }
    switch (*(s8 *)data_ov004_02170320) {
    case 0:
        func_ov004_0215f5a0();
        func_ov004_0215fec0();
        break;
    case 1:
        func_ov004_0215f418();
        break;
    case 2:
        func_ov004_0215ed20();
        break;
    case 3:
        func_ov004_0215ebbc();
        break;
    case 4:
        func_ov004_0215d9f4();
        break;
    }
    i = 0;
    do {
        cVar1 = *(s8 *)(data_ov004_02170320 + i + 0x33bb);
        if (cVar1 > 0) {
            SwapByte((u32)(cVar1 - 1), (vu8 *)((u8 *)(data_ov004_02170320 + i + 0x3000) + 0x3bb));
        }
        i = i + 1;
    } while (i < 6);
}
