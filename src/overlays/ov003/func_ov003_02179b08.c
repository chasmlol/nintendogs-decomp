typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct {
    u32 w[3];
} T3;

extern void *data_0214f460;
extern void func_02039448(u8 *p);
extern s32 func_020ab064(void *a, T3 *b);
extern void func_02037450(u8 *p, s32 v);
extern s32 func_02035584(u8 *p, s32 v);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

void func_ov003_02179b08(u8 *param_1)
{
    T3 local;
    s32 iVar1;

    func_02039448(param_1);
    iVar1 = func_020ab064(data_0214f460, &local);
    if (iVar1 != 0) {
        *(T3 *)(param_1 + 0x278) = local;
    }
    func_02037450(param_1, 0x300);
    *(T3 *)(param_1 + 0x3b4) = local;
    iVar1 = func_02035584(param_1, 1);
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 0, 1, 1, iVar1, 0x30, 7, 3, 0);
}
