#include "ctx.h"

extern u8 data_0214aa04[];
extern u8 data_0214aa0c[];
extern void func_02112744(int a, void *b, int c);
extern void func_02112670(int a, void *b, int c);
extern void func_02112798(int a, int b, int c);

void func_02119c80(void)
{
    int i;

    if (((*(vu16 *)0x04000304) & 0x8000) >> 15 == 0) {
        func_02112744(0, data_0214aa04, 0);
        func_02112744(0, data_0214aa0c, 0);
        func_02112670(0, data_0214aa04, 1);
        func_02112670(0, data_0214aa0c, 0);
        i = 0;
        do {
            func_02112798(0, (u16)(i + 2), 0);
            i = i + 1;
        } while (i < 10);
        func_02112798(0, 12, 0);
        func_02112798(0, 13, 0);
        return;
    }
    func_02112744(0, data_0214aa04, 1);
    func_02112744(0, data_0214aa0c, 1);
    func_02112670(0, data_0214aa04, 1);
    func_02112670(0, data_0214aa0c, 0);
    i = 0;
    do {
        func_02112798(0, (u16)(i + 2), 0);
        i = i + 1;
    } while (i < 10);
    func_02112798(0, 12, 0);
    func_02112798(0, 13, 0);
}
