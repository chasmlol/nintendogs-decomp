typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_020fcf48(void);
extern void func_020fc114(u32 a, u32 b, u32 c, u32 d);
void func_02109634(u32 *param_1)
{
    s32 v;
    param_1[0] = param_1[0] + 1;
    v = param_1[0];
    if (v > 16) {
        func_020fcf48();
        return;
    }
    func_020fc114(2, (u32)((u8 *)param_1 + 240), param_1[0], 16);
}
