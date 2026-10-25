#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020ad7c8(void *obj, int v);
extern void func_020ad6fc(void *obj, int v);
extern void func_02109238(void);
extern int func_020ab5dc(void);
extern void func_020fddc0(int v);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern BOOL func_0208dda0(void);

void func_020ae760(u8 *obj)
{
    u8 *st;
    s32 state;
    s32 mode;

    st = data_0215be48;
    st += 0x4000;
    state = *(s32 *)(st + 0x8bc);
    if (state == 1) {
        func_020ad7c8(obj, 2);
        func_020ad6fc(obj, 0);
        func_02109238();
        return;
    }
    mode = *(s32 *)(st + 0x8c0);
    switch (mode) {
    case 0:
        goto done;
    case 1:
        if (func_020ab5dc() != 0) {
            *(u16 *)(obj + 46) = 2;
            *(u16 *)(obj + 48) = 0;
            *(u16 *)(obj + 256) = 10;
            func_020fddc0(1);
            return;
        }
        *(u16 *)(obj + 42) = 1;
        func_02097b94(0, 0x44e, 0, 0, 0);
        return;
    case 2:
        func_020ad7c8(obj, 12);
        func_020ad6fc(obj, 0);
        return;
    case 3:
        func_020ad7c8(obj, 7);
        func_020ad6fc(obj, 0);
        return;
    case 4:
        if (!func_0208dda0()) {
            *(u16 *)(obj + 42) = 1;
            func_02097b94(2, 0xc81, 0, 0, 0);
            return;
        }
        if (func_020ab5dc() == 0) {
            *(u16 *)(obj + 42) = 1;
            func_02097b94(0, 0x44e, 0, 0, 0);
            return;
        }
        *(u16 *)(obj + 46) = 2;
        *(u16 *)(obj + 48) = 0;
        *(u16 *)(obj + 256) = 6;
        func_020fddc0(1);
        return;
    case 5:
        if (func_020ab5dc() != 0) {
            func_020ad7c8(obj, 8);
            func_020ad6fc(obj, 0);
            return;
        }
        break;
    default:
        goto done;
    }
    *(u16 *)(obj + 42) = 1;
    func_02097b94(0, 0x44e, 0, 0, 0);
done:
    return;
}
