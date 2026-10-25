#include "ctx.h"

extern u8 data_0212f720[];
extern u8 data_0213ec38[];
extern void func_02088364(s32 *a);
extern void func_0205f050(u8 *a, s32 b, u8 *c, u32 d);
extern s32 func_02088014(s32 *a, u8 *b);
extern u8 *func_020038b8(u8 *p, s32 n);
extern void func_02087e90(s32 *a, u8 *b, s32 c);
extern void func_02087fcc(s32 *a);
extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern u32 func_0207e9f8(s32 a, s32 b);

u32 func_0208c13c(u8 *param_1, s32 param_2)
{
    u8 acStack_98[64];
    s32 aiStack_58[18];
    s32 iVar3;
    u32 uVar4;
    u8 *puVar5;
    s32 bVar1;
    s32 size;
    u32 uVar5;

    uVar5 = 0;
    func_02088364(aiStack_58);
    uVar4 = *(u32 *)(data_0212f720 + param_2 * 28 + 8);
    if (uVar4 != 0) {
        func_0205f050(acStack_98, 64, data_0213ec38, uVar4);
        iVar3 = func_02088014(aiStack_58, acStack_98);
        if (iVar3 != 0) {
            size = aiStack_58[9] - aiStack_58[8];
            puVar5 = func_020038b8(param_1, size);
            uVar5 = (u32)puVar5;
            func_02087e90(aiStack_58, puVar5, size);
            func_02087fcc(aiStack_58);
        }
    }
    iVar3 = func_02066160();
    if (iVar3 == 0) {
        goto ret;
    }
    bVar1 = 0;
loop:
    if (bVar1 == 0) {
        if (func_020d5abc() != 0) {
            bVar1 = 1;
        }
    }
    if (bVar1 != 0) {
        if (func_020d5aa0() != 0) {
            func_02066120();
        }
    }
    func_0207e9f8(1, 1);
    goto loop;
ret:
    return uVar5;
}
