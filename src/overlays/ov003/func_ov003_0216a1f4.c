typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u8 pad[0x152];
    u16 state;
} Obj;
extern void func_020264d4(Obj *o);
extern void func_020255a4(Obj *o);
extern void func_0202db24(Obj *o, u32 a);
void func_ov003_0216a1f4(Obj *param_1)
{
    param_1->state = 0x1bc;
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
