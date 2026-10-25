#include "ctx.h"

extern u32 data_02159424;
extern u32 data_0215be34;
extern u32 data_021424a0[];
extern s32 func_02108be0(void);
extern void func_02003ca0(s32 a);
extern s32 func_02003a7c(void);
extern void func_02003df8(s32 a);
extern void func_020ab0bc(s32 a);
extern s32 func_02107f6c(void);
extern void func_0208122c(s32 a, s32 b, s32 *c);
extern void func_02108aa4(s32 a);
extern void func_0209eeec(s32 a, s32 b);

typedef struct { u32 w[3]; } T3;
#define OBJ34 (*(u8 **)((*(u8 **)&data_02159424) + 0x34))

void func_020b17bc(u8 *param_1)
{
    u32 st;
    s32 iVar2;
    s32 iStack_18[3];
    s32 v;
    s32 uu;

    st = *(u16 *)(param_1 + 4);
    if ((s32)st > 0) {
        goto UP;
    }
    if (st == 0) {
        *(u16 *)(param_1 + 4) = 0x600;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
UP:
    {
        if ((s32)st > 0x602) {
            return;
        }
        if ((s32)st < 0x600) {
            return;
        }
        if (st == 0x600) {
            goto S600;
        }
        if (st == 0x601) {
            goto S601;
        }
        if (st == 0x602) {
            goto S602;
        }
        return;
S600:
        {
            iVar2 = func_02108be0();
            if (iVar2 == 0) {
                return;
            }
            *(u16 *)(param_1 + 4) = 0x601;
            *(u16 *)(param_1 + 6) = 0;
            func_02003ca0(0x1e);
            return;
        }
S601:
        {
            iVar2 = func_02003a7c();
            if (iVar2 != 0) {
                *(s16 *)(param_1 + 6) = *(s16 *)(param_1 + 6) + 1;
            }
            if (*(s16 *)(param_1 + 6) < 0x1e) {
                return;
            }
            *(u16 *)(param_1 + 4) = 0x602;
            *(u16 *)(param_1 + 6) = 0;
            func_02003df8(0xf);
            func_020ab0bc(*(s16 *)(OBJ34 + 4));
            v = *(s16 *)(OBJ34 + 4);
            if (v >= 1 && v <= 3) {
                *(T3 *)iStack_18 = *(T3 *)data_021424a0;
                iVar2 = (*(s32 **)&data_0215be34 != 0) ? **(s32 **)&data_0215be34 : 0;
                func_0208122c(iVar2, 5, iStack_18);
                func_0208122c(iVar2, 6, iStack_18);
                func_0208122c(iVar2, 7, iStack_18);
            }
            func_02108aa4((s16)(*(s16 *)(OBJ34 + 4) - 1));
            v = *(s16 *)(OBJ34 + 4);
            uu = 7;
            if (v >= 1) {
                if (v <= 3) {
                    uu = 6;
                }
            }
            func_0209eeec(uu, 0x7f);
            return;
        }
S602:
        {
            iVar2 = func_02107f6c();
            if (iVar2 != 0) {
                *(u16 *)(param_1 + 4) = 1;
                *(s32 *)(param_1 + 0xc) = 1;
            }
        }
        return;
    }
}
