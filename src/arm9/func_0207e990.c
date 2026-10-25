#include "ctx.h"

u32 func_0207e990(u32 *p)
{
    if (p == 0) {
        return 1;
    }
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[0] = 0x67452301;
    p[1] = 0xefcdab89;
    p[2] = 0x98badcfe;
    p[3] = 0x10325476;
    p[4] = 0xc3d2e1f0;
    p[0x18] = 0;
    p[0x19] = 0;
    return 0;
}
