#include "ctx.h"

typedef struct {
    s32 w[3];
} T3;

extern u8 *data_02159444;
extern s32 func_01ffdb08(s32);
extern void func_02044ca0(u32);
extern void func_020be7b8(u8 *);
extern u32 func_020341b4(s32);
extern void func_020c5fec(u8 *);
extern void func_0209d4b0(u8 *, s32);
extern void func_020c5ef8(u8 *);

void func_020c866c(u8 *p)
{
    s32 iVar1;
    u32 uVar2;
    u8 *iVar3;
    T3 tmp;

    iVar1 = func_01ffdb08(*(s16 *)(p + 0x98));
    func_02044ca0(0);
    func_020be7b8(p);
    iVar3 = data_02159444;
    if ((*(u16 *)(iVar3 + 0x84) & 1) != 0) {
        tmp = *(T3 *)(iVar3 + 0x9c);
        *(s32 *)(p + 0xbc) = (*(s32 *)(p + 0xbc) >> 1) + (tmp.w[0] >> 1);
        *(s32 *)(p + 0xc0) = (*(s32 *)(p + 0xc0) >> 1) + (tmp.w[1] >> 1);
        *(s32 *)(p + 0xc4) = (*(s32 *)(p + 0xc4) >> 1) + (tmp.w[2] >> 1);
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
        goto body;
    }
    func_020c5ef8(p);
    return;
body:
    uVar2 = func_020341b4(iVar1);
    if (uVar2 == 0) {
        func_020c5fec(p);
        func_0209d4b0(p + 400, 6);
    }
}
