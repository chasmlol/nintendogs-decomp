#include "ctx.h"

void func_02025860(void *p);
void func_0204e020(void *a, void *b, int c, int d, int e);
void func_020362ec(void *p, int v);
void func_0202707c(void *p, int v);
void func_02035be8(void *p);
int func_020289d0(void *p, int a, int b);
int func_0203592c(void *p, int a);
int func_020357c8(void *p, int a);
void func_0202fcc0(void *p);
void func_020362f8(void *p);
int func_02054428(void *p);
void func_0203e908(void *p, int v);

void func_0204c3c8(void *param_1, void *param_2, int param_3)
{
    s32 iVar2;
    s32 iVar3;
    s32 done;
    s32 t;

    if (param_2 != 0 && *(s16 *)((u8 *)param_2 + 0xea) == 0x27f) {
        func_02025860(param_1);
        iVar2 = 2;
        iVar3 = 1;
    } else {
        iVar2 = 0;
        iVar3 = 0;
    }
    func_0204e020(param_1, param_2, param_3, iVar2, iVar3);
    if (param_2 != 0 && *(u16 *)((u8 *)param_1 + 0xfc) == 0x1e) {
        t = *(s8 *)((u8 *)param_1 + 0x88);
        func_020362ec(param_2, (s16)t);
        func_0202707c(param_2, 8);
    }
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
        done = 1;
        goto J;
    }
    if (func_0203592c(param_1, 0) != 0) {
        done = 1;
        goto J;
    }
    if (func_020357c8(param_1, 0) != 0) {
        done = 1;
        goto J;
    }
    if (param_2 != 0) {
        done = 0;
        goto J;
    }
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    done = 1;
J:
    if (done) {
        return;
    }
    if (func_02054428(param_1) != 0) {
        return;
    }
    if (*(s16 *)((u8 *)param_1 + 0xfa) != 0x19) {
        goto L26;
    }
    func_0203e908(param_1, 0x27a);
    *(u16 *)((u8 *)param_1 + 0xfa) = 0;
    return;
L26:
    if (*(s16 *)((u8 *)param_1 + 0xfa) != 0x1a) {
        return;
    }
    func_0203e908(param_1, 0x27b);
    *(u16 *)((u8 *)param_1 + 0xfa) = 0;
}
