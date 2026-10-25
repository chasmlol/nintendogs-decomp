typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u8 p0[0x88];
    s8 f88;
    u8 p1[0x6d];
    s16 f_f6;
    u8 p2[4];
    u16 f_fc;
} Obj;
extern u32 func_02035584(Obj *o, u32 a);
extern void func_0203e8cc(Obj *o, u32 a, u32 b);
extern u32 func_0202e29c(Obj *o);
extern void func_020b9b18(u32 a);
extern void func_020b9858(s32 a, s32 b);
extern void func_02029290(Obj *o, u32 a, u32 b);
extern void func_0203e908(Obj *o, u32 a);
void func_ov003_021718d8(Obj *param_1)
{
    u32 iVar1;
    iVar1 = func_02035584(param_1, 1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 1, 0);
    }
    if (param_1->f_fc > 100) {
        iVar1 = func_0202e29c(param_1);
        if (iVar1 != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s32)param_1->f88, (s32)param_1->f_f6);
        func_02029290(param_1, 87, 1);
        func_0203e908(param_1, 241);
        return;
    }
    return;
}
