#include "ctx.h"

typedef struct Ov004Obj {
    u32 a00;
    u32 a04;
    u32 a08;
    u32 a0c;
    u8 pad10[0x40 - 0x10];
    u32 a40;
    s16 a44;
    s16 a46;
} Ov004Obj;

extern Ov004Obj *data_ov004_02170324;
extern int func_020038b8(int, int);
extern void func_0208efac(int);

int func_ov004_0216e9a4(int param_1)
{
    if (data_ov004_02170324 == NULL) {
        int iVar2 = func_020038b8(param_1, 0x48);
        data_ov004_02170324 = (Ov004Obj *)iVar2;
        func_0208efac(iVar2 + 0x1c);
        data_ov004_02170324->a00 = 0;
        data_ov004_02170324->a04 = 0;
        data_ov004_02170324->a08 = 0;
        data_ov004_02170324->a0c = 0;
        data_ov004_02170324->a40 = 1;
        data_ov004_02170324->a44 = -1;
        data_ov004_02170324->a46 = -1;
        return (int)data_ov004_02170324;
    }
    return (int)data_ov004_02170324;
}
