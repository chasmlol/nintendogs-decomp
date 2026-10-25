#include "ctx.h"

extern int data_0215b234;
extern int data_0215b238;
extern int data_0215b23c[];
extern int data_0215b22c;
void func_02001fc8(int *p);

void func_020dfc94(void)
{
    int *piVar1;

    if (data_0215b234 == 0) {
        return;
    }
    if (data_0215b238 == 0) {
        func_02001fc8(data_0215b23c);
        piVar1 = &data_0215b238;
        data_0215b22c = data_0215b23c[1];
        *piVar1 = 1;
        return;
    }
    return;
}
