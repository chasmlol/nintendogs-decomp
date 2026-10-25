#include "ctx.h"

void func_02095970(u32 a, u32 b, u32 c);
void func_020959a0(u32 a, u32 b, u32 c);

void func_0209583c(void)
{
    u32 i;
    u32 j;

    func_02095970(0, 0, 0);
    func_020959a0(6, 0, 0);
    i = 0;
    do {
        func_020959a0(1, i, 0);
        i = (u16)(i + 1);
    } while (i < 3);
    i = 0;
    do {
        j = 0;
        do {
            func_020959a0(2, i, j);
            j = (u16)(j + 1);
        } while (j < 20);
        i = (u16)(i + 1);
    } while (i < 3);
    func_020959a0(3, 0, 0);
    i = 0;
    do {
        func_020959a0(4, i, 0);
        i = (u16)(i + 1);
    } while (i < 5);
    i = 0;
    do {
        j = 0;
        do {
            func_020959a0(5, i, j);
            j = (u16)(j + 1);
        } while (j < 20);
        i = (u16)(i + 1);
    } while (i < 5);
}
