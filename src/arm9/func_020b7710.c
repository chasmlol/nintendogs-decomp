#include "ctx.h"

typedef struct {
    u8 pad[0xc];
    s16 v;
} P12;

extern u8 data_02159460[];
extern u8 data_02159010[];
extern void func_020a4e94(void);
extern void func_020bb67c(void);
extern void func_020a7f98(u32 *);
extern u32 func_02002e60(void);
extern u32 func_02002e58(u32);
extern u8 *func_020038b8(u32, u32);
extern void func_020b4200(u8 *);
extern u32 func_020947f8(void);
extern void func_020a7f38(s32);
extern void func_02002fd0(u32 *, void *);
extern s32 func_02002e70(u32 *, u32 *);
extern void func_020a7ed8(s32);
extern void func_020a7b70(s32, s32);

s32 func_020b7710(u8 *param_1)
{
    u32 auStack_38[7];
    u32 auStack_1c[4];
    s32 iVar1;
    u32 piVar2;
    u8 *puVar3;
    u32 off;
    u32 pd;

    func_020a7f98(auStack_1c);
    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    puVar3 = func_020038b8(piVar2, 0x2610);
    func_020b4200(puVar3);
    asm { ldr off, =0x260c }
    asm { add r1, puVar3, #9728 }
    asm { mvn r2, #0 }
    asm { strh r2, [r1, #12] }
    asm { add r1, puVar3, off }
    asm { ldr pd, =data_02159460 }
    asm { strh r2, [r1, #2] }
    *(u32 *)pd = (u32)puVar3;
    iVar1 = func_020947f8();
    if (iVar1 != 0) {
        func_020a7f38(*(s16 *)(6 + param_1));
        func_02002fd0(auStack_38, func_020a4e94);
        func_02002e70(auStack_38, auStack_1c);
    }
    if (*(s16 *)(data_02159010 + 2) != 0) {
        func_02002fd0(auStack_38, func_020bb67c);
        func_02002e70(auStack_38, 0);
    }
    func_020a7ed8(*(s16 *)(param_1 + 6));
    func_02002fd0(auStack_38, func_020a4e94);
    iVar1 = func_02002e70(auStack_38, auStack_1c);
    if (iVar1 == 12) {
        func_020a7b70(*(s16 *)(param_1 + 6), *(s32 *)data_02159460);
        func_02002fd0(auStack_38, func_020a4e94);
        func_02002e70(auStack_38, auStack_1c);
    }
    *(u32 *)data_02159460 = 0;
    return iVar1;
}
