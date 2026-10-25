#include "ctx.h"

void func_0206be70(u32 *src, u32 *dst)
{
    asm {
        ldmia r0!, {r2, r3, r12}
        stmia r1, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        stmia r1, {r2, r3, r12}
    }
}
