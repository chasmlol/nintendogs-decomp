#include "ctx.h"

extern u8 *data_02159424;
extern u8 *data_0215942c;
extern u32 data_0215906c;

extern u32 func_020b42b8(u8 *p);
extern u8 *func_020b42a8(u8 *p);
extern s32 func_01ffdb08(s32 a);
extern s32 func_0202817c(s32 a);
extern s32 func_02094f9c(s32 a, s32 b);
extern void func_02028184(s32 a);
extern void func_02094f6c(s32 a, s32 b);
extern void func_020b7860(s32 a, u8 *b);
extern void func_020942c0(u8 *p, s32 a);
extern u32 *func_020b4298(u8 *p);
extern void func_02092b14(u32 *p);
extern void func_0208dd84(u32 *p);
extern void func_020b4260(u32 a, u8 *b);
extern void func_0209aadc(void);
extern u8 *func_020b4288(u8 *p);
extern s32 func_02093634(u32 *a, u8 *b);
extern s32 func_020946ac(s32 a, s32 b);
extern void func_02093500(u32 *a, u8 *b, s32 c, s32 d);
extern void func_02093374(u32 *a, u8 *b, s32 c, s32 d);
extern void func_02097b94(s32 a, s32 b, s32 c, u32 d, s32 e);
extern void func_020b38a0(void);

void func_020b369c(u8 *param_1)
{
    s32 iVar2;
    s32 iVar4;
    s32 iVar5;
    u8 *psVar3;
    u32 *piVar6;
    u32 *puVar7;
    u8 *pcVar8;
    u32 uVar9;
    u16 sV;
    s32 r8;

    iVar2 = func_020b42b8(*(u8 **)(data_02159424 + 0x1c));
    psVar3 = func_020b42a8(*(u8 **)(data_02159424 + 0x1c));
    iVar4 = func_01ffdb08((s16)*(s16 *)(data_0215942c + 0xe));
    iVar5 = func_0202817c(iVar4);
    iVar5 = func_02094f9c(iVar5, iVar2);
    if (iVar5 >= 0) {
        func_02028184(iVar4);
    }
    func_02094f6c(iVar2, iVar5);
    func_020b7860(iVar2, psVar3);
    if (*(s16 *)psVar3 != -1) {
        func_020942c0(psVar3, 1);
    }
    piVar6 = func_020b4298(*(u8 **)(data_02159424 + 0x1c));
    func_02092b14(piVar6);
    iVar2 = *(s32 *)(data_02159424 + 0x1c);
    if (*(s16 *)(iVar2 + 0x74e8) != 0) {
        uVar9 = data_0215906c;
        puVar7 = func_020b4298((u8 *)iVar2);
        func_0208dd84(puVar7);
        func_020b4260(uVar9, (u8 *)iVar2);
        func_0209aadc();
    }
    if (*(s32 *)(param_1 + 0x1c) != 0) {
        *(s32 *)(*(s32 *)(param_1 + 0x1c) + 4) = (s32)*(s16 *)(iVar2 + 0x74e8);
    }
    piVar6 = func_020b4298(*(u8 **)(data_02159424 + 0x1c));
    pcVar8 = func_020b4288(*(u8 **)(data_02159424 + 0x1c));
    iVar2 = func_02093634(piVar6, pcVar8);
    if (iVar2 != 0) {
        psVar3 = (u8 *)(u32)func_020b42b8(*(u8 **)(data_02159424 + 0x1c));
        sV = *(u16 *)psVar3;
        iVar4 = *(s16 *)(*(s32 *)(data_02159424 + 0x1c) + 0x74f0);
        iVar2 = func_020946ac(4, (s16)sV);
        if (iVar2 > 0) {
            goto L194;
        }
        func_02093500(piVar6, pcVar8, sV, 1);
        goto done;
L194:
        if (iVar4 != -1 && sV != 18) {
            func_02093374(piVar6, pcVar8, iVar4, 1);
        }
    }
done:
    *(s16 *)(param_1 + 4) = 0x901;
    *(u16 *)(param_1 + 6) = 0;
    func_02097b94(9, 0x27dc, 0, (u32)func_020b38a0, 0);
}
