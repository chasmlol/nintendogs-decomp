#include "ctx.h"

extern u32 data_ov007_02160e58;
extern void func_ov007_0215f45c(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(s32 a);
extern void func_ov007_0215ff8c(void);
extern s32 func_ov007_02160358(void);
extern void func_ov007_0215f774(void);
extern void func_02003fb4(void);
extern void func_0206b6ac(void *a, s32 b, u32 c);
extern void func_0206c7f0(u32 a, void *b, s32 c);
extern void func_02005fe4(void);
extern void func_02005f84(void);
extern void func_0207c990(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern void func_ov007_02160788(void);
extern void func_0208e36c(void);
extern u64 func_02004280(void);
extern void func_ov007_0215fa38(u64 a);
extern void func_020075b4(void);
extern void func_020068a4(void);
extern void func_ov007_0215f404(void);
extern void func_ov007_0215f380(void);

int func_ov007_0215f254(void)
{
    u32 *piVar1;
    s32 iVar2;
    u16 *puVar3;
    u8 *puVar4;
    volatile u32 local_c0;
    u64 uVar5;
    u32 uVar6;

    func_ov007_0215f45c();
    *(u32 *)((u8 *)data_ov007_02160e58 + 8) = 1;
    func_02003df8(0x1e);
    piVar1 = &data_ov007_02160e58;
    do {
        func_0200413c();
        func_0208f6ac(*(s32 *)*piVar1);
        func_ov007_0215ff8c();
        iVar2 = func_ov007_02160358();
        if (iVar2 != 0) {
            *(u32 *)((u8 *)*piVar1 + 8) = 0;
        } else {
            *(u32 *)((u8 *)*piVar1 + 8) = 1;
        }
        func_ov007_0215f774();
        func_02003fb4();
        iVar2 = *piVar1;
        if (iVar2 != 0) {
            puVar3 = *(u16 **)(iVar2 + 4);
        } else {
            puVar3 = (u16 *)0;
        }
        uVar6 = (u32)*puVar3 << 3;
        if (iVar2 != 0) {
            iVar2 = *(s32 *)(iVar2 + 4);
        } else {
            iVar2 = 0;
        }
        func_0206b6ac(*(void **)(iVar2 + 4), 0, uVar6);
        puVar3 = *(u16 **)(*piVar1 + 4);
        puVar3[1] = 0;
        puVar4 = (u8 *)((u32)*puVar3 << 3);
        local_c0 = 0xc0;
        func_0206c7f0(local_c0, *(void **)(puVar3 + 2), (s32)puVar4);
        func_02005fe4();
        func_02005f84();
        func_0207c990();
        func_02003efc();
    } while (*(s32 *)(*piVar1 + 8) != 0);
    func_02003d00(0x3c);
    func_02003ab0((void *)func_ov007_0215f404, (void *)func_ov007_0215f380);
    func_ov007_02160788();
    func_0208e36c();
    uVar5 = func_02004280();
    func_ov007_0215fa38(uVar5);
    func_020075b4();
    func_020068a4();
    data_ov007_02160e58 = 0;
    return 0;
}
