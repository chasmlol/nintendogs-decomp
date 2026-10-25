#include "ctx.h"

extern void func_0206c9b8(u16 *a, u16 *b, u32 c);

void func_0206e668(int param_1, int param_2, u32 param_3, u16 param_4)
{
    u8 *rec;
    u8 *pw;

    rec = (u8 *)(param_1 + 0x1d4 + param_3 * 0x68);
    pw = (u8 *)(param_1 + 0x138);
    if ((param_2 != 0xd) && (rec[2] == rec[3])) {
        return;
    }
    *(u32 *)pw = 0xc;
    *(s16 *)(pw + 10) = (s16)(1 << param_3);
    rec[3] = rec[2];
    pw[0xd] = rec[2];
    *(u16 *)(pw + 14) = param_4;
    if (param_2 > 2) {
        goto sw;
    }
    if (param_2 != 2) {
        goto done;
    }
    goto c2;
sw:
    switch (param_2) {
    case 8:
        *(u32 *)(pw + 0x14) = *(u32 *)(rec + 0x10);
        goto done;
    c2:
        *(s16 *)(pw + 0x14) = *(s16 *)(rec + 10);
        *(s16 *)(pw + 0x16) = *(s16 *)(rec + 6);
        *(s16 *)(pw + 0x18) = *(s16 *)(rec + 4);
        goto done;
    case 10:
        if (rec[0xd] > 9) {
            pw[0x1d] = 0;
        } else {
            pw[0x1d] = rec[0xd];
            func_0206c9b8(*(u16 **)(rec + 0x20), (u16 *)(pw + 0x14), pw[0x1d]);
        }
        break;
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
        break;
    }
done:
    *(int *)(pw + 4) = param_2;
    if (*(void (**)(u32 *))(pw + 0x10) == NULL) {
        return;
    }
    (*(void (**)(u32 *))(pw + 0x10))((u32 *)pw);
}
