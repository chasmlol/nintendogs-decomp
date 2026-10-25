#include "ctx.h"

extern u32 data_ov007_02160da8[];
extern u8 *data_ov007_02160d9c;

void func_0206f2bc(void);
void func_ov007_0215dc24(void);
void func_ov007_0215d8b8(void (*f)(void));
void func_ov007_0215d8cc(void (*f)(void));
void func_ov007_0215d8a4(void (*f)(void));
void func_ov007_0215d890(void (*f)(void));
void func_ov007_0215e920(void);
void func_ov007_0215ec48(void);
void func_ov007_0215e8dc(void);
void func_ov007_0215e8c0(void);

void func_ov007_0215ef8c(void)
{
    s32 v;
    s32 i;

    func_0206f2bc();
    v = 0;
    i = 0;
    do {
        data_ov007_02160da8[i] = v;
        i = i + 1;
    } while (i < 16);
    *(u32 *)(data_ov007_02160d9c + 0x10c) = v;
    *(u32 *)(data_ov007_02160d9c + 0x110) = v;
    *(u32 *)(data_ov007_02160d9c + 0x124) = v;
    *(u32 *)(data_ov007_02160d9c + 0x128) = v;
    func_ov007_0215d8b8(func_ov007_0215e920);
    func_ov007_0215d8cc(func_ov007_0215ec48);
    func_ov007_0215d8a4(func_ov007_0215e8dc);
    func_ov007_0215d890(func_ov007_0215e8c0);
    *(u16 *)(data_ov007_02160d9c + 0x12c) = 0;
    func_ov007_0215dc24();
}
