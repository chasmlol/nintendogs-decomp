typedef unsigned char u8;
typedef signed short s16;
typedef unsigned int u32;
extern void (*data_ov019_02161238[])(u8 *);
void func_ov019_02160c14(u8 *param_1)
{
    void (*cb)(u8 *);
    cb = data_ov019_02161238[*(s16 *)(param_1 + 30)];
    cb(param_1);
}
