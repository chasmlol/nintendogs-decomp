#include "ctx.h"

extern s32 func_02002e60(s32 a);
extern u8 *func_02002e58(s32 a);
extern void func_020a8594(u8 *p);
extern void func_020a8568(void);
extern void func_02002fd0(u32 *a, void *b);
extern s32 func_02002e70(u32 *a, s32 b);
extern void func_020a79b0(void);
extern void func_020a7adc(void);
extern void func_020a7a48(void);
extern void func_0209a59c(s32 a);
extern void func_020a7904(void);
extern void func_020a4e94(void);

u32 func_020b9934(s32 param_1)
{
    u32 uVar6;
    s32 bVar2;
    s32 bVar1;
    u32 auStack_40[8];
    s32 iVar3;
    u8 *piVar4;

    uVar6 = 0;
    bVar2 = 1;
    iVar3 = func_02002e60(param_1);
    piVar4 = func_02002e58(iVar3);
    if (param_1 != 0) {
        func_020a8594(piVar4);
    }
    if (param_1 != 0) {
        bVar1 = 1;
        do {
            func_020a8568();
            func_02002fd0(auStack_40, (void *)func_020a4e94);
            iVar3 = func_02002e70(auStack_40, 0);
            if (iVar3 == 0x19) {
                func_020a79b0();
                func_02002fd0(auStack_40, (void *)func_020a4e94);
                func_02002e70(auStack_40, 0);
            } else {
                bVar1 = 0;
            }
        } while (bVar1);
    }
    do {
        func_020a7adc();
        func_02002fd0(auStack_40, (void *)func_020a4e94);
        iVar3 = func_02002e70(auStack_40, 0);
        if (iVar3 == 0x17) {
            func_020a7a48();
            func_02002fd0(auStack_40, (void *)func_020a4e94);
            iVar3 = func_02002e70(auStack_40, 0);
            func_0209a59c(iVar3);
        } else {
            bVar2 = 0;
            if (iVar3 != 1) {
                uVar6 = 1;
            }
        }
    } while (bVar2);
    if (param_1 != 0) {
        func_020a7904();
    }
    return uVar6;
}
