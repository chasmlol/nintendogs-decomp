#include "ctx.h"

extern u8 *data_02159060;
extern s32 func_020ad77c(u8 *p);
extern void func_020ad7c8(u8 *p, s32 a);
extern void func_020ad6fc(u8 *p, u32 a);
extern u32 func_021092b8(void);
extern s32 func_020ad690(u8 *p);
extern u8 *func_020ad8f0(u8 *p);

u8 *func_020b8610(u8 *param_1)
{
    u8 *pc;
    u8 *puVar2;
    u8 *rv;   /* left unset on the default path: r0 still holds param_1 there */
    s32 st;
    s32 rr;

    /* the calls and the switch read through pc (r4); param_1 stays in r0 for the default return */
    pc = param_1;
    switch (*(s16 *)(pc + 46)) {
    case 0:
        return (u8 *)func_020ad77c(pc);
    case 1:
        st = *(s32 *)(data_02159060 + 0xa4);
        if (st == 0) {
            return (u8 *)st;
        }
        if (*(s16 *)(data_02159060 + 148) == 3) {
            goto have;
        }
        if (*(s16 *)(data_02159060 + 148) != 4) {
            goto none;
        }
have:
        puVar2 = (u8 *)(s32)*(s16 *)(data_02159060 + 154);
        goto check;
none:
        puVar2 = NULL;
check:
        if (puVar2 == NULL) {
            goto setst;
        }
        if (puVar2 == (u8 *)1) {
            goto callc;
        }
        return puVar2;
setst:
        *(u16 *)(pc + 46) = 2;
        *(u16 *)(pc + 48) = 0;
        *(u16 *)(pc + 256) = 2;
        return pc + 256;
callc:
        func_020ad7c8(pc, *(s16 *)(pc + 128));
        func_020ad6fc(pc, 0);
        return (u8 *)func_021092b8();
    case 4:
        rr = func_020ad690(pc);
        if (rr == 0) {
            return (u8 *)rr;
        }
        rv = func_020ad8f0(pc);
        goto fin;
    default:
    case 2:
    case 3:
        goto fin;
    }
fin:
    return rv;
}
