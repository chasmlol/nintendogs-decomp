typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
extern void (*data_ov019_02161468[])(u8 *);
void func_ov019_0215ea80(u8 *param_1)
{
    void (*cb)(u8 *);
    cb = data_ov019_02161468[*(s16 *)(param_1 + 30)];
    cb(param_1);
}
