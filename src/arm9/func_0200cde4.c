#include "ctx.h"

s32 func_02032aac(void *p, s32 i);
void *func_01ffdb08(s32 i);
void func_0202707c(void *p, s32 v);
void func_02027494(void *p, void *q);

void func_0200cde4(u8 *param_1)
{
    s16 i;
    void *q;

    for (i = 0; i < 3; i++) {
        if (func_02032aac(param_1, i) != 0) {
            q = func_01ffdb08(i);
            if (q != 0) {
                func_0202707c(q, 5);
                func_02027494(q, param_1 + 672);
            }
        }
    }
}
