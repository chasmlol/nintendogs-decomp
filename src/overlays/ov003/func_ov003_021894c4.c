typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);
void func_ov003_021894c4(u8 *param_1)
{
    u32 flag;
    flag = *(u16 *)(param_1 + 252) > 60;
    func_ov003_021894ec(param_1, 0, 0x1ff, flag);
}
