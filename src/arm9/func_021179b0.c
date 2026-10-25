typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

extern void func_021128a8(s32 a, u32 b, u32 c);
extern void func_02112978(s32 a, u32 b, s32 c, s32 d);

u32 func_021179b0(s32 *param_1, u16 param_2, u16 param_3)
{
    u32 uVar1;
    u32 uVar2;

    uVar2 = 0;
    if (param_1[7] == 0) {
        param_1[7] = 1;
        uVar1 = 0xffff;
        *(s16 *)(param_1 + 8) = *(s16 *)((u8 *)param_1 + 0x18);
        *(u16 *)((u8 *)param_1 + 0x22) = param_2;
        *(u16 *)(param_1 + 9) = param_3;
        if (*(u16 *)(param_1 + 1) != uVar1) {
            if (param_1[2] != 0) {
                func_021128a8(param_1[0], *(u16 *)(param_1 + 1), *(u16 *)((u8 *)param_1 + 0xe));
            }
            if (param_1[4] != 0) {
                func_02112978(param_1[0], *(u16 *)(param_1 + 1), *(s16 *)((u8 *)param_1 + 0x14),
                              *(s16 *)((u8 *)param_1 + 0x16));
            }
        }
        uVar2 = 1;
        if (param_1[10] != 0) {
            ((void (*)(s32 *))param_1[10])(param_1);
        }
    }
    return uVar2;
}
