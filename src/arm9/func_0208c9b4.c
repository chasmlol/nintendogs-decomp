#include "ctx.h"

extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(s32 a, s32 b);

void func_0208c9b4(void)
{
    s32 ready;

    if (func_02066160() == 0)
        return;
    ready = 0;
    for (;;) {
        if (ready == 0) {
            if (func_020d5abc() != 0)
                ready = 1;
        }
        if (ready != 0) {
            if (func_020d5aa0() != 0)
                func_02066120();
        }
        func_0207e9f8(1, 1);
    }
}
