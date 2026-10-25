#include "ctx.h"

extern u32 data_0214e680;
extern u32 data_0214e684;

void func_0206cc88(void *p);
s32 func_0206ce6c(s32 a, s32 b);
void func_0206ce94(s32 a, void *fn);
void func_0200197c(void);

void func_020018ec(void)
{
    if (*(u16 *)&data_0214e680 != 0) {
        return;
    }
    *(u16 *)&data_0214e680 = 1;
    func_0206cc88((void *)&data_0214e680);
    *(u16 *)((u8 *)&data_0214e684 + 0x32) = 0;
    *(u16 *)((u8 *)&data_0214e684 + 0x36) = 0;
    *(u16 *)((u8 *)&data_0214e684 + 0xc) = 0;
    *(u32 *)((u8 *)&data_0214e684 + 0x0) = 0;
    *(u32 *)((u8 *)&data_0214e684 + 0x10) = 0;
    *(u16 *)((u8 *)&data_0214e684 + 0x30) = 0;
    *(u16 *)((u8 *)&data_0214e684 + 0x34) = 0;
    while (func_0206ce6c(6, 1) == 0) {
    }
    func_0206ce94(6, func_0200197c);
}
