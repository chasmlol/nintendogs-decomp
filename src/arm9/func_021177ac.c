typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02112798(u32 a, u32 b, u32 c);
void func_021177ac(u32 *param_1)
{
    void (*cb)(u32 *);
    if (param_1[7] != 5) {
        param_1[7] = 5;
        cb = (void (*)(u32 *))param_1[13];
        if (cb != 0) {
            cb(param_1);
        }
    }
    if (*(u16 *)((u8 *)param_1 + 4) != 0xffff) {
        func_02112798(param_1[0], *(u16 *)((u8 *)param_1 + 4), 0);
    }
}
