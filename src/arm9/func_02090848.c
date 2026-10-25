#include "ctx.h"

typedef struct {
    u16 type;   /* 0x00 */
    u16 a;      /* 0x02 */
    u16 b;      /* 0x04 */
    u16 c;      /* 0x06 */
    u32 d;      /* 0x08 */
    u32 e;      /* 0x0c */
} Out;

typedef u32 (*TagFunc)(u32 key, u32 arg);

u32 func_02090848(Out *out, const u16 *tag, s32 base, s32 *next, u32 *flag, TagFunc func)
{
    u16 p16;
    u32 ret;
    u32 key;
    u32 p32a;
    u32 p32b;
    u8 p8;

    p16 = tag[3];
    p8 = (u8)tag[3];
    key = ((u32)(u16)(tag[1] >> 8) << 16) | tag[2];
    p32a = ((u32)tag[3] << 16) | tag[4];
    p32b = ((u32)tag[5] << 16) | tag[6];
    ret = 0;

    switch (key) {
    case 0x00000:
        out->type = 1;
        break;
    case 0x70000:
        out->type = 2;
        out->b = 2;
        out->d = p32a;
        out->e = p32b;
        break;
    case 0x70002:
        out->type = 2;
        out->b = 1;
        out->d = p32a;
        out->e = 0xffffffff;
        break;
    case 0x70003:
        out->type = 3;
        break;
    case 0x00004:
        out->a = p16;
        break;
    case 0x00009:
        *flag = 1;
        break;
    case 0x00002:
    case 0x00003:
    case 0x00005:
    case 0x00006:
    case 0x00007:
    case 0x00008:
    case 0x10002:
    case 0x10003:
        break;
    case 0x30000:
    case 0x30002:
    case 0x30003:
    case 0x30004:
    case 0x30005:
    case 0x30006:
    case 0x30008:
    case 0x30009:
    case 0x3000b:
    case 0x3000d:
    case 0x3000e:
    case 0x3000f:
    case 0x30010:
    case 0x30011:
    case 0x30012:
    case 0x30013:
    case 0x30014:
    case 0x30015:
        ret = func(key, p8);
        break;
    case 0x60002:
        out->c = p16;
        break;
    case 0xff0000:
        *next = base + p8;
        break;
    }
    return ret;
}
