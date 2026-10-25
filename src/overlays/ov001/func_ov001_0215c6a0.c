#include "ctx.h"

typedef struct {
    s16 idx;            /* 0x0 */
    u8 pad0[0x0a];
    s32 col;            /* 0xc */
    u8 pad1[0xc134 - 0x10];
    s32 st134;
    s32 st138;
    s32 st13c;
    s32 st140;
    s32 st144;
    s32 st148;
    s32 st14c;
    s32 st150;
    s32 st154;
    s32 st158;
    u8 pad2[0xc16c - 0xc15c];
    u32 tabA[14];       /* 0xc16c */
    u32 tabB[14];       /* 0xc1a4 */
    s32 st1dc;          /* 0xc1dc */
} Obj;

extern Obj *data_ov001_0215e260;
extern u8 data_ov001_0215dfd0[][14];
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_ov001_0215c6a0(void)
{
    data_ov001_0215e260->st134 = data_ov001_0215e260->st138;
    switch (data_ov001_0215e260->st134) {
    case 0:
        if (data_ov001_0215e260->st154 != -1 || data_ov001_0215e260->st158 != -1) {
            data_ov001_0215e260->st14c = data_ov001_0215e260->st154;
            data_ov001_0215e260->st150 = data_ov001_0215e260->st158;
            data_ov001_0215e260->st154 = -1;
            data_ov001_0215e260->st158 = -1;
            data_ov001_0215e260->st13c = 0;
            data_ov001_0215e260->st1dc = 1;
            data_ov001_0215e260->st138 = 1;
        } else if (data_ov001_0215dfd0[data_ov001_0215e260->idx][data_ov001_0215e260->col] > 1) {
            data_ov001_0215e260->st140++;
            if (data_ov001_0215e260->st140 > 300) {
                s32 n = data_ov001_0215e260->st148 + 1;
                if (n >= data_ov001_0215dfd0[data_ov001_0215e260->idx][data_ov001_0215e260->col]) {
                    n = 0;
                }
                data_ov001_0215e260->st154 = data_ov001_0215e260->st144;
                data_ov001_0215e260->st158 = n;
                data_ov001_0215e260->st140 = 0;
            }
        }
        break;
    case 1:
        data_ov001_0215e260->st13c += 0xccc;
        if (data_ov001_0215e260->st13c > 0x10000) {
            data_ov001_0215e260->st144 = data_ov001_0215e260->st14c;
            data_ov001_0215e260->st148 = data_ov001_0215e260->st150;
            func_0207c910(12, 0, (data_ov001_0215e260->tabA + data_ov001_0215e260->st144)[data_ov001_0215e260->st148], 0xc000);
            func_0207c910(15, 0, (data_ov001_0215e260->tabB + data_ov001_0215e260->st144)[data_ov001_0215e260->st148], 256);
            data_ov001_0215e260->st13c = 0;
            data_ov001_0215e260->st138 = 0;
        }
        break;
    }
}
