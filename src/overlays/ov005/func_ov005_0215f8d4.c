typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void func_02012dd8(u8 *p);
extern void func_0203e908(u8 *p, u32 v);
extern u32 *data_0214f464;

void func_ov005_0215f8d4(u8 *param_1)
{
    u32 v;
    func_02012dd8(param_1);
    if (*(u16 *)(param_1 + 0xfc) <= 60) {
        return;
    }
    v = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v;
    if ((u16)((((u32)(u16)v) * 20) >> 16) == 0) {
        func_0203e908(param_1, 0x463);
    }
}
