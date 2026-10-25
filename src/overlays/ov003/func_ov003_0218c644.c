#include "ctx.h"

typedef struct { s32 x, y, z; } Vec3;
extern void *data_02159444;
void func_0203e908(u8 *obj, s32 v);

#define FXMUL(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

#define TEST_BLOCK(P, HI, LO) {     Vec3 v = *(Vec3 *)((u8 *)data_02159444 + 0x9c);     s32 dx = v.x - *(s32 *)((P) + 0x2a0);     s64 l1 = (s64)dx * *(s32 *)((P) + 0x18c) + 0x800;     s32 dz = v.z - *(s32 *)((P) + 0x2a8);     s64 l2 = (s64)dz * *(s32 *)((P) + 0x194) + 0x800;     if ((s32)(l1 >> 12) + (s32)(l2 >> 12) > 0) {         func_0203e908((P), (HI));         return 1;     }     func_0203e908((P), (LO));     return 1; }

BOOL func_ov003_0218c644(u8 *p)
{
    switch ((s8)p[0x8b]) {
    case 0:
        switch ((s8)p[0x8e]) {
        case 2:
        case 3:
        case 4:
            TEST_BLOCK(p, 0x37a, 0x37b)
        case 0:
        case 1:
            TEST_BLOCK(p, 0x378, 0x379)
        default:
            return 0;
        }
    case 1:
        TEST_BLOCK(p, 0x378, 0x379)
    case 2:
        TEST_BLOCK(p, 0x37a, 0x37b)
    case 3:
        TEST_BLOCK(p, 0x37a, 0x37b)
    case 4:
        TEST_BLOCK(p, 0x37a, 0x37b)
    case 5:
        if ((s8)p[0x97] == 4) {
            return 0;
        }
        TEST_BLOCK(p, 0x37a, 0x37b)
    default:
        return 0;
    }
}
