#include "ctx.h"

void func_0206c8f8(u32 *param_1, u32 *param_2)
{
    asm {
        ldmia r0!, {r2, r3, r12}
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1!, {r2, r3, r12}
        ldmia r0, {r0, r2, r3, r12}
        stmia r1!, {r0, r2, r3, r12}
    }
}
