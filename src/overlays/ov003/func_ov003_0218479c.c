typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u8 p0[0xfc];
    u16 f_fc;
} Obj;
extern void func_0203e8cc(Obj *o, u32 a, u32 b);
extern void func_ov003_02184b58(Obj *o, u32 a, u32 b, u32 c, u32 d);
void func_ov003_0218479c(Obj *param_1)
{
    if (param_1->f_fc == 80) {
        func_0203e8cc(param_1, 1, 0);
    }
    func_ov003_02184b58(param_1, 4, 31, 0, (u32)(param_1->f_fc > 100));
    return;
}
