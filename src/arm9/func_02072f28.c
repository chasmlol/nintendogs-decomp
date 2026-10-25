typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

extern u32 func_020719dc(s32 p);
extern s32 func_02071778(u32 v);
extern s32 *func_0207357c(s32 a, s32 b);
extern s32 func_02072d4c(u8 *p1, s32 p2, s32 p3, s32 p4, s32 *p5, s32 p6, s32 p7, s32 p8);

s32 func_02072f28(u8 *param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 *puVar1;
    s32 iVar2;
    s32 *piVar3;

    puVar1 = (u32 *)func_020719dc(param_5);
    if (puVar1 == 0) {
        return 0;
    }
    iVar2 = func_02071778(*puVar1);
    if (iVar2 == 0) {
        return 0;
    }
    piVar3 = func_0207357c(iVar2, param_6);
    if (piVar3 == 0) {
        return 0;
    }
    if (param_4 < 0) {
        param_4 = *(u8 *)(piVar3 + 2);
    }
    if (param_3 < 0) {
        param_3 = *(u16 *)(piVar3 + 1);
    }
    if (param_2 < 0) {
        param_2 = *(u8 *)((u8 *)piVar3 + 9);
    }
    {
        s32 t6 = param_6;
        s32 t5 = param_5;
        return func_02072d4c(param_1, param_2, param_3, param_4, piVar3, iVar2, t5, t6);
    }
}
