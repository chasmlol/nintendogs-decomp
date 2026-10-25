#include "ctx.h"

extern int data_021594d0;
extern void func_020d4d48(void);
extern void func_020d6978(void *a, void *b);

u32 func_020d5488(void)
{
    u8 auStack_8[4];

    if (*(int *)(data_021594d0 + 0x20) == 1) {
        *(int *)(data_021594d0 + 0x40) = 1;
        *(u16 *)(data_021594d0 + 0x44) = 0;
        *(u16 *)(data_021594d0 + 0x48) = 0;
        *(u16 *)(data_021594d0 + 0x4e) = 0;
        *(u16 *)(data_021594d0 + 0x4c) = 0;
        *(u16 *)(data_021594d0 + 0x46) = 10;
        *(u16 *)(data_021594d0 + 0x4a) = 6;
        *(int *)(data_021594d0 + 0x24) = 2;
        *(int *)(data_021594d0 + 0x20) = 4;
        func_020d6978((void *)func_020d4d48, auStack_8);
        *(int *)(data_021594d0 + 0x54) = 0;
        return 1;
    }
    return 0;
}
