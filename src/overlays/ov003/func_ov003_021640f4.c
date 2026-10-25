#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u8 *data_02159444;
extern void func_02025d90(u8 *p);
extern void func_02025490(u8 *p);
extern void *func_020364cc(u8 *p);
extern s32 func_020c1f34(void *p);
extern void func_02067e34(T3 *a, T3 *b, u32 *c);
extern s32 func_02067c30(u32 *c);

void func_ov003_021640f4(u8 *param_1)
{
    T3 loc;
    u32 a14[3];
    s32 bVar1;
    u8 *iVar2;
    u32 t;

    *(u16 *)(param_1 + 0x152) = 0x159;
    *(u16 *)(param_1 + 0x156) = 1;
    param_1[147] = 7;
    param_1[158] = 1;
    func_02025d90(param_1);
    func_02025490(param_1);
    t = *(u32 *)(param_1 + 0x948);
    *(u32 *)(param_1 + 0x948) = t | 4;
    *(T3 *)(param_1 + 0x390) = *(T3 *)(param_1 + 0x2e8);
    *(u32 *)(param_1 + 0x490) = 0;
    *(u32 *)(param_1 + 0x494) = 0;
    *(u32 *)(param_1 + 0x498) = 0;
    *(u32 *)(param_1 + 0x464) = *(u32 *)(param_1 + 0x484);
    iVar2 = func_020364cc(param_1);
    if (iVar2 == 0) {
        return;
    }
    if (*(s16 *)(iVar2 + 0x90) == 0) {
        goto yes;
    }
    if (*(s16 *)(iVar2 + 0x90) != 2) {
        goto second;
    }
yes:
    bVar1 = 1;
    goto done;
second:
    if (*(s16 *)(iVar2 + 0x94) != 53) {
        goto zero;
    }
    if (func_020c1f34(iVar2) == 0) {
        bVar1 = 1;
        goto done;
    }
zero:
    bVar1 = 0;
done:
    if (bVar1 != 0) {
        return;
    }
    loc = *(T3 *)(data_02159444 + 0x9c);
    func_02067e34(&loc, (T3 *)(param_1 + 0x2e8), a14);
    *(u32 *)(param_1 + 0x464) = func_02067c30(a14);
}
