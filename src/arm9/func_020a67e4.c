#include "ctx.h"
extern u8 data_0212f720[];
extern u8 data_0215942c[];
extern u8 data_02159420[];
extern u8 data_0214235c[];
extern u8 data_02142378[];
extern u8 data_0214238c[];
extern u8 data_021423ac[];
extern u8 data_021423c0[];
extern s64 func_02080858(void);
extern u32 func_020a69b0(s32 a);
extern void func_0205f050();
extern u8 *func_0208c87c(u8 *p, u8 *q);
extern void func_0200c4e4(s32 a);

/* b8: b7 with the second truncation inside the r4 expression (c stays u16).
   b7: b6 with the constant 3 in its own local, assigned after the call (mov r2,#3 before the mul as in the target).
   b6: b3 with c as u32 and the 16-bit truncation as its own statement (the lsl/lsr pair in c's register).
   b4: b3 with c as u16 (the first cast lands in c's register) and the product as (u32)c * 3.
   b3: b2 with the (u16) casts for the mask (lsl/lsr #16, not and 0xffff) and the s16 switch field.
   b2: b1 with the == arms written as != to other, then goto (target beq to the arm, b to other).
   b1: the dispatch as the target's compare tree, signed (bgt/bge), with the blocks in address
   order and gotos between them; the nonzero arm of the param_3 test is written first. */
void func_020a67e4(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 acStack_54[64];
    s32 uVar4;
    s32 uVar2;
    s32 iVar5;
    s16 r4;
    u16 c;
    u32 k3;
    s64 t;

    iVar5 = param_2 * 28 + (s32)data_0212f720;
    uVar4 = *(u16 *)(*(u8 **)data_0215942c);
    uVar2 = *(s32 *)(iVar5 + 0xc);
    if (uVar4 > 0x10) {
        goto L48;
    }
    if (uVar4 >= 0x10) {
        goto L148;
    }
    if (uVar4 != 3) {
        goto other;
    }
    goto case3;
L48:
    if (uVar4 > 0x8003) {
        goto L60;
    }
    if (uVar4 != 0x8003) {
        goto other;
    }
    goto L15c;
L60:
    if (uVar4 != 0xc002) {
        goto other;
    }
case3:
    if (uVar2 != 0) {
        goto L134;
    }
    r4 = 0;
    if (*(s16 *)data_02159420 != 0) {
        r4 = *(s16 *)data_02159420;
    }
    if (r4 == 0) {
        if (param_3 != 0) {
            t = func_02080858();
            k3 = 3;
            c = (u16)((u32)t * 0x10dcd + 1);
            r4 = (s16)((u16)(((u32)c * k3) >> 16) + 1);
        } else {
            switch (*(s16 *)(*(u8 **)data_0215942c + 10)) {
            case 0:
            case 1:
                r4 = 1;
                break;
            case 2:
                r4 = 2;
                break;
            case 3:
            case 4:
            case 5:
                r4 = 3;
                break;
            default:
                break;
            }
        }
    }
    uVar2 = func_020a69b0(param_3);
    func_0205f050(acStack_54, 64, data_0214235c, uVar2, r4);
    goto done;
L134:
    func_0205f050(acStack_54, 64, data_02142378, uVar2);
    goto done;
L148:
    func_0205f050(acStack_54, 64, data_0214238c, uVar2);
    goto done;
L15c:
    uVar2 = *(s32 *)(iVar5 + 0x10);
    func_0205f050(acStack_54, 64, data_021423ac, uVar2);
    goto done;
other:
    func_0205f050(acStack_54, 64, data_021423c0, uVar2);
done:
    iVar5 = (s32)func_0208c87c(param_1, acStack_54);
    func_0200c4e4(iVar5);
}
