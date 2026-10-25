#include "ctx.h"

void func_02066bdc(u32 *param_1, u32 *param_2)
{
    asm {
        ldmia r0, {r2, r3, r4, r5, r6, r7, r8, r9, r12}
        stmia r1!, {r2, r5, r8}
        stmia r1!, {r3, r6, r9}
        stmia r1!, {r4, r7, r12}
        mov r0, #0
        str r0, [r1]
        str r0, [r1, #0x4]
        str r0, [r1, #0x8]
    }
}
