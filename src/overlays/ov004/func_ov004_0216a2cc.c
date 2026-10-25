#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u32 *data_0214f464;
extern int func_0202fcd4(void);
extern int func_0200c498(int, int);
extern int func_02035584(int, int);
extern void func_0203e8cc(int, int, int);
extern void func_02027654(int, int);
extern void func_02037450(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216a2cc(int param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    u32 x;
    u16 bit;

    iVar1 = func_0202fcd4();
    iVar2 = func_0200c498(0, 0);
    if (*(s16 *)(param_1 + 0x154) == 11) {
        iVar3 = func_02035584(param_1, 1);
        if (iVar3 != 0) {
            func_0203e8cc(param_1, 1, 0);
        }
    }
    if (iVar1 != 0 && iVar2 != 0) {
        *(Triple *)(param_1 + 0x26c) = *(Triple *)(iVar2 + 8);
        func_02027654(iVar1, param_1 + 0x278);
        func_02037450(param_1, 0x302);
    }
    if (*(u16 *)(param_1 + 0xfc) <= 70) {
        return;
    }
    if (*(s32 *)(param_1 + 0x488) >= 2) {
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        switch ((u16)((u32)(u16)x * 3 >> 16)) {
        case 0:
            func_0203e908(param_1, 0x4cc);
            return;
        case 1:
            func_0203e908(param_1, 0x4cd);
            return;
        case 2:
            func_0203e908(param_1, 0x4ce);
            return;
        }
        return;
    }
    x = *data_0214f464 * 0x10dcd + 1;
    bit = (u16)((x << 16) >> 31);
    *data_0214f464 = x;
    switch (bit) {
    case 0:
        func_0203e908(param_1, 0x4cd);
        return;
    case 1:
        func_0203e908(param_1, 0x4ce);
        return;
    }
}
