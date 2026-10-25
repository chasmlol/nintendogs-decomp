typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *func_0208ea24(u32 p);
extern void func_0208f544(u32 a, u32 b);
extern u32 func_ov020_0215c408;
u8 *func_ov020_0215c3c8(u32 param_1)
{
    u8 *puVar2;
    puVar2 = func_0208ea24(param_1);
    *(u32 *)(puVar2 + 0x3c) = 0;
    *(u32 *)(puVar2 + 0x40) = 0x2000;
    *(u32 *)(puVar2 + 0x44) = 0;
    func_0208f544((u32)puVar2, (u32)&func_ov020_0215c408);
    *(u32 *)(puVar2 + 0x7c) = 0x6000;
    return puVar2;
}
