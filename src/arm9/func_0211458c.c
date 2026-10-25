#include "ctx.h"

extern u8 data_02149444[];
extern u8 data_02149450[];
extern int data_0215bf9c;
extern void func_02112744(int a, void *b, int c);
extern void func_02112670(int a, void *b, int c);
extern void func_02112798(int a, int b, int c);

void func_0211458c(void)
{
    int iVar1;

    func_02112744(0, data_02149444, 0);
    func_02112744(0, data_02149450, 0);
    func_02112670(0, data_02149444, 1);
    func_02112670(0, data_02149450, 0);
    iVar1 = 0;
    do {
        func_02112798(0, (u16)(iVar1 + 4), 0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    func_02112798(0, 0xe, 0);
    *(int *)(data_0215bf9c + 0x19c) = 1;
}
