#include "ctx.h"

typedef struct {
    s16 val;
    s16 timer;
} Ent;

extern u8 *data_0215be48;
extern u8 data_0214f004[];

extern void func_0210cf70(int *p, s32 a, s32 b);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_0210c090(int *p, u32 a, u32 b);
extern void func_0210c838(int *p, u32 a, u32 b);
extern void func_0210c4e0(int *p, u32 a, u32 b);

void func_0210bf08(int *param_1)
{
    int *psw;
    Ent *e;
    int iVar3;
    u32 uVar1;
    u32 uVar2;

    e = (Ent *)((u8 *)param_1 + 56);
    iVar3 = 0;
    do {
        if (0 < e->timer) {
            e->timer = e->timer - 1;
            if (e->timer == 0) {
                func_0210cf70(param_1, e->val, 0);
            }
        }
        iVar3 = iVar3 + 1;
        e = e + 1;
    } while (iVar3 < 10);
    func_02112798(2, 0xe, *(u16 *)((u8 *)param_1 + 0x886) < 0x1e);
    *(u16 *)((u8 *)param_1 + 0x886) = *(u16 *)((u8 *)param_1 + 0x886) + 1;
    if (*(u16 *)((u8 *)param_1 + 0x886) >= 60) {
        *(u16 *)((u8 *)param_1 + 0x886) = 0;
    }
    if (*(u16 *)((u8 *)param_1 + 0x32) != 0) {
        *(u16 *)((u8 *)param_1 + 0x32) = *(u16 *)((u8 *)param_1 + 0x32) - 1;
        return;
    }
    if (*(int *)(data_0215be48 + 0x4860) == 0) {
        return;
    }
    if (*param_1 != 1) {
        return;
    }
    uVar1 = data_0214f004[0];
    uVar2 = data_0214f004[1];
    psw = (int *)((u8 *)param_1 + 0x1c5c);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        return;
    }
    switch (*psw) {
    case 0:
    case 1:
    case 2:
        func_0210c090(param_1, uVar1, uVar2);
        return;
    case 3:
    case 4:
        func_0210c838(param_1, uVar1, uVar2);
        return;
    case 5:
    case 6:
    case 7:
        func_0210c4e0(param_1, uVar1, uVar2);
        return;
    }
}
