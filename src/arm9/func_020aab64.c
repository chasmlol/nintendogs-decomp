typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

extern s32 func_020bc5b8(void);
extern void func_020bc5f8(u32 a, s32 b);
extern u32 func_020bd170(s32 a);
extern void func_020aabec(u8 *p);

void func_020aab64(u8 *param_1)
{
    u32 uVar2;

    if (*(s16 *)(param_1 + 0x76) == 1) goto one;
    if (*(s16 *)(param_1 + 0x76) == 2) goto two;
    return;
one:
    if (!func_020bc5b8()) {
        return;
    }
    func_020bc5f8(0, *(s16 *)(param_1 + 0x7c));
    uVar2 = func_020bd170((s32)*(s16 *)(param_1 + 0x7c));
    switch (uVar2) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        goto switchD_default;
    }
    *(s16 *)(param_1 + 0x78) = 1;
switchD_default:
    *(s16 *)(param_1 + 0x76) = 2;
    return;
two:
    func_020aabec(param_1);
    return;
}
