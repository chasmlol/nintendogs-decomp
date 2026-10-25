typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u8 pad[0x152];
    u16 state;
} Obj;
extern void func_02026bac(Obj *o);
extern void func_02025548(Obj *o);
extern void func_0202db24(Obj *o, u32 a);
void func_ov003_0216ceb4(Obj *param_1)
{
    param_1->state = 0x23d;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
