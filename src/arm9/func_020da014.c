#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern s32 data_0215adfc;
extern s32 *data_0215be34;

extern void func_020aace4(s32 a);
extern void func_0208122c(s32 a, s32 b, s32 *c);
extern s32 func_020bc3c4(void);
extern void func_0208ec84(s32 a, u8 *b, s32 *c);
extern void func_0209d394(u8 *p, s32 a, s32 b, s32 *c);
extern void func_0209d334(u8 *p, s32 a, s32 *b);
extern void func_02093fd0(s32 a);
extern void func_020c604c(u8 *p);
extern void func_020c7544(u8 *p, s32 *a, s32 *b, s32 c, s32 d, s32 e);

void func_020da014(u8 *param_1, s32 *param_2, s32 *param_3)
{
    s32 *piVar4;
    s32 *r5;
    T3 ls;
    s32 buf2[3];

    piVar4 = *(s32 **)(param_1 + 0x214);
    if (*(s32 *)(param_1 + 0xb4) < data_0215adfc) {
        ls = *(T3 *)(param_1 + 0xbc);
        ls.w[1] = 0;
        func_020aace4(*(s16 *)(param_1 + 0x94));
        switch (*(s16 *)(param_1 + 0x94)) {
        case 29:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x51, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x50, ls.w);
            break;
        case 30:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x48, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x52, ls.w);
            break;
        case 31:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x53, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x54, ls.w);
            break;
        case 32:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x55, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x56, ls.w);
            break;
        }
        switch (piVar4[2]) {
        case 0:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x79, ls.w);
            break;
        case 1:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x60, ls.w);
            break;
        case 2:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5f, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5e, ls.w);
            break;
        case 3:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5d, ls.w);
            break;
        case 4:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5c, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5a, ls.w);
            break;
        case 5:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x5b, ls.w);
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x59, ls.w);
            break;
        case 6:
            func_0208122c((data_0215be34 ? *data_0215be34 : 0), 0x58, ls.w);
            break;
        }
        func_0208ec84(func_020bc3c4(), param_1 + 0xbc, buf2);
        {
            s32 a = *(s32 *)(param_1 + 0xb4);
            if (a <= 0) {
                a = -a;
            }
            func_0209d394(param_1 + 400, 6, a, buf2);
        }
        func_0209d334(param_1 + 400, (s16)piVar4[2], buf2);
        func_02093fd0(piVar4[1]);
        func_020c604c(param_1);
    } else {
        r5 = (s32 *)*piVar4;
        func_020c7544(param_1, param_2, param_3, r5[1], r5[4], 0);
    }
}
