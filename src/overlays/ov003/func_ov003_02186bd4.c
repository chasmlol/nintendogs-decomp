#include "ctx.h"

extern s32 func_ov003_02187168(u8 *p, u32 a, u32 b);
extern void func_02067e34(u8 *dst, u8 *src, u32 *out);
extern BOOL func_02009eb8(u32 *a, u32 *b);
extern void func_0203e908(u8 *p, u32 a);
extern void func_0203e8cc(u8 *p, u32 a, s32 b);
extern u32 data_02152cd8;

void func_ov003_02186bd4(u8 *p, s32 p2, s32 p3)
{
    u32 a[3];
    u32 b[3];
    BOOL bVar;

    if (func_ov003_02187168(p, p2, p3) == 0) goto other;
    a[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    a[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    a[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    func_02067e34(p + 0x33c, p + 0x30c + (s16)p3 * 12, b);
    if (p3 != 0) {
        bVar = !func_02009eb8(a, b);
    } else {
        bVar = func_02009eb8(a, b);
    }
    if (bVar) {
        func_0203e8cc(p, 0, (s16)(0x83 - p3));
        return;
    }
    func_0203e8cc(p, 0, (s16)(0x7f - p3));
    return;
other:
    func_0203e908(p, (s16)(p2 + 236));
}
