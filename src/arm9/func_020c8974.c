#include "ctx.h"

extern int *data_02159444;
extern int *data_02159468;
extern s32 func_02044ca0(int a);
extern void func_020be4b4(int a, s32 *b, int c);
extern void func_020ab02c(int a, int b, s32 *c);
extern void func_020be3d4(int a, int b);
extern void func_020bfb2c(int a, int b, int c, int d, int e, int f);
extern void func_020c5fbc(int a);
extern s32 func_02067c30(int a);
extern void func_0209d430(int a, int b, int c);
extern void func_02044b58(void);

typedef struct {
    s32 w[3];
} T3;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s32)(b) + 0x800) >> 12))

void func_020c8974(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                   int param_7, int param_8)
{
    s32 L[6];
    int iVar2;

    iVar2 = func_02044ca0(0);
    func_020be4b4(param_1, &L[3], param_8);
    func_020ab02c(iVar2, param_1 + 188, &L[3]);
    func_020be3d4(param_1, param_1 + 200);
    if ((*(u16 *)((u8 *)data_02159444 + 0x84) & 1) != 0 && *(s32 *)((u8 *)data_02159468 + 0x24) == 0) {
        return;
    }
    func_020bfb2c(iVar2, param_1 + 188, param_2, param_3, param_4, param_1 + 176);
    *(T3 *)&L[0] = *(T3 *)(*(u8 **)((u8 *)data_02159444 + 0x1c) + 0x48);
    *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + FXM(L[0], param_5);
    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + FXM(L[2], param_5);
    if (*(s32 *)((u8 *)param_1 + 0xb4) > param_6) {
        *(s32 *)((u8 *)param_1 + 0xb4) = param_6;
    }
    if (*(s32 *)((u8 *)param_1 + 0xb4) < -param_6) {
        *(s32 *)((u8 *)param_1 + 0xb4) = -param_6;
    }
    func_020c5fbc(param_1);
    if (param_7 >= 0) {
        iVar2 = func_02067c30(param_1 + 176);
        func_0209d430(param_1 + 400, param_7, iVar2);
    }
    func_02044b58();
}
