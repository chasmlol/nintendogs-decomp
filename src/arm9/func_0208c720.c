#include "ctx.h"

extern void func_02088364(void *p);
extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(int a, int b);
extern s32 func_02088014(void *p, void *q);
extern void *func_02003860(int p, u32 n, u32 align);
extern u32 func_02087e90(void *a, void *b, u32 c);
extern s32 func_0207dfcc(void *a, void *b, void *c);
extern void func_02087fcc(void *p);

void *func_0208c720(int param_1, u32 *param_2, u32 *param_3, u32 param_4)
{
    s32 bVar1;
    s32 iVar3;
    u32 *puVar4;
    u32 *puVar8;
    u32 uVar9;
    u32 aiStack_60[18];
    u32 *puVar7;
    u32 sz;

    puVar8 = 0;
    func_02088364(aiStack_60);
    iVar3 = func_02066160();
    if (iVar3 != 0) {
        bVar1 = 0;
        for (;;) {
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
        }
    }
    iVar3 = func_02088014(aiStack_60, param_3);
    if (iVar3 != 0) {
        sz = aiStack_60[9] - aiStack_60[8];
        puVar4 = (u32 *)func_02003860(param_1, ((sz + 15) & 0xfffffff0) + 96, 16);
        if (puVar4 != 0) {
            puVar7 = puVar4 + 24;
            if (func_02087e90(aiStack_60, puVar7, sz) == sz) {
                if (func_0207dfcc(puVar4, param_2, puVar7) != 0) {
                    puVar8 = puVar4;
                }
            }
        }
        func_02087fcc(aiStack_60);
    }
    uVar9 = 0;
    do {
        iVar3 = func_02066160();
        if (iVar3 != 0) {
            bVar1 = 0;
            for (;;) {
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
            }
        }
        uVar9 = uVar9 + 1;
    } while (uVar9 < 60);
    return puVar8;
}
