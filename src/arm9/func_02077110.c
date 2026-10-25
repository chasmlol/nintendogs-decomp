typedef unsigned char u8;
typedef unsigned int u32;
void func_02077110(u8 *param_1)
{
    void (*cb)(u8 *);
    cb = *(void (**)(u8 *))(param_1 + 0x10);
    if (cb != 0) {
        cb(param_1);
    }
    *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) | 0x20;
}
