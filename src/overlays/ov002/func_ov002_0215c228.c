#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 pad[8]; s32 count; u8 pad0c[12]; u8 *pal; } Ctx;
extern Ctx *data_ov002_0215c800;
extern void func_0207c910(int a, int b, void *c, int d);

void func_ov002_0215c228(void)
{
    u8 *pal = data_ov002_0215c800->pal;
    u8 v;

    data_ov002_0215c800->count++;
    if (data_ov002_0215c800->count >= 62)
        data_ov002_0215c800->count = 0;
    if (data_ov002_0215c800->count < 32)
        v = data_ov002_0215c800->count;
    else
        v = 62 - data_ov002_0215c800->count;
    pal[0x22] = v | (v << 5);
    pal[0x23] = (v >> 3) | (v << 2);
    func_0207c910(31, 0, pal, 512);
}
