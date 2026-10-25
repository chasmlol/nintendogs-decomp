#include "ctx.h"

extern u8 data_0213ec08[];
extern u8 data_0213ec20[];
void func_02088364(s32 *a);
s32 func_02088014(s32 *a, u8 *b);
s32 func_020038b8(s32 *p, u32 n);
void func_02087e90(s32 *a, s32 b, u32 c);
void func_02087fcc(s32 *a);
s32 func_020785bc(s32 a, u32 b);
u64 func_02066160(void);
s32 func_020d5abc(s32 a, s32 b);
s32 func_020d5aa0(void);
void func_02066120(void);
u64 func_0207e9f8(u32 a, u32 b);

s32 func_0208c03c(s32 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar5;
    u8 *pcVar4;
    s32 buf[18];
    s32 h;
    s32 bVar1;
    u64 uVar6;

    iVar5 = 0;
    pcVar4 = 0;
    if (param_2 != 27) {
        if (param_2 == 31) {
            pcVar4 = data_0213ec20;
        }
    } else {
        pcVar4 = data_0213ec08;
    }
    if (pcVar4 == 0) {
        goto done;
    }
    iVar5 = 0;
    func_02088364(buf);
    if (func_02088014(buf, pcVar4) != 0) {
        param_3 = buf[9] - buf[8];
        h = func_020038b8(param_1, param_3);
        func_02087e90(buf, h, param_3);
        func_02087fcc(buf);
        iVar5 = func_020785bc(h, 0);
    }
    uVar6 = func_02066160();
    if ((s32)uVar6 == 0) {
        goto done;
    }
    bVar1 = 0;
    for (;;) {
        if (!bVar1) {
            if (func_020d5abc((s32)uVar6, (s32)(uVar6 >> 32)) != 0) {
                bVar1 = 1;
            }
        }
        if (bVar1) {
            if (func_020d5aa0() != 0) {
                func_02066120();
            }
        }
        uVar6 = func_0207e9f8(1, 1);
    }
done:
    return iVar5;
}
