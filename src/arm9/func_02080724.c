#include "ctx.h"
extern u32 data_02155f44[];
extern u32 data_02155f48[];
extern u32 data_02155f50[];
extern void func_020805d4(void);
extern void func_020805e4(void);

void func_02080724(void)
{
    if (*(u32 *)data_02155f44 != 0) {
        asm {
            mov r0, sp
            ldr r1, =0x9f
            msr CPSR_fsxc, r1
            mov sp, r0
        }
        func_020805d4();
        ((void (*)(u32, u32))(*(u32 *)data_02155f44))((u32)data_02155f50, *(u32 *)data_02155f48);
        func_020805e4();
    }
}
