#include "ctx.h"

extern int data_0215be48;
extern u32 data_0214a46c;
extern u32 data_0214a45c;
extern void func_02112798(int a, int b, int c);
extern void func_02117d8c(int *a);
extern void func_02112744(int a, u32 b, int c);

void func_02118b64(int param_1)
{
    int *pw = (int *)param_1;
    int v;

    if (pw[1] > 0) {
        pw[1] = pw[1] - 1;
        if (pw[1] == 0) {
            v = *(int *)(data_0215be48 + 0xa8);
            if (v == 7) {
                if (v == 7) {
                    func_02112798(0, 0, 0);
                }
                func_02117d8c((int *)(param_1 + 0x124));
            }
        }
    }
    if (pw[2] <= 0) {
        return;
    }
    pw[2] = pw[2] - 1;
    if (pw[2] != 0) {
        return;
    }
    if (*(int *)(data_0215be48 + 0xa8) != 7) {
        return;
    }
    func_02112744(0, (u32)&data_0214a46c, 0);
    func_02112744(0, (u32)&data_0214a45c, 1);
}
