#include "ctx.h"
typedef struct { u32 value : 24; u32 top : 8; } Packed;
u32 func_02088dfc(u8 *p) { if (p[0x1f] & 1) return ((Packed *)(p + 0x1c))->value; return *(u32 *)(p + 8); }
