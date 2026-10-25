#include "ctx.h"

extern void func_020a457c(void);
extern void func_020a8ff8(void);
extern void func_020b9934(void);
extern void func_020a8868(void);
extern void func_020a8ff0(void);
extern void func_02002fd0(u32 *buf, void *fn);
extern s32 func_02002e70(u32 *buf, u32 v);

void func_020a44ec(void)
{
    u32 local_28;
    u32 auStack_24[8];
    s32 iVar1;
    func_020a457c();
    func_02002fd0(auStack_24, (void *)func_020a8ff8);
    iVar1 = func_02002e70(auStack_24, (u32)&local_28);
    if (iVar1 == 1) {
        func_02002fd0(auStack_24, (void *)func_020b9934);
        func_02002e70(auStack_24, 1);
    }
    do {
        do {
            func_02002fd0(auStack_24, (void *)func_020a8868);
            iVar1 = func_02002e70(auStack_24, local_28);
        } while (iVar1 != 3);
        func_02002fd0(auStack_24, (void *)func_020a8ff0);
        func_02002e70(auStack_24, 0);
    } while (1);
}
