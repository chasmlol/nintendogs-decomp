#include "ctx.h"

void func_020673d0(u32 *param_1, u32 *param_2)
{
    asm {
        ldmia r0!, {r2, r3, r12}
        add r0, r0, #4
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        add r0, r0, #4
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        add r0, r0, #4
        stmia r1!, {r2, r3, r12}
        ldmia r0!, {r2, r3, r12}
        add r0, r0, #4
        stmia r1!, {r2, r3, r12}
    }
}
