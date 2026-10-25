#include "ctx.h"

#define reg_MI_EXMEMCNT (*(vu16 *)0x04000204)

typedef struct {
    u32 rom1st;
    u32 rom2nd;
} RomCycles;

void func_02000c54(RomCycles *p)
{
    reg_MI_EXMEMCNT = (u16)((p->rom1st << 2) | (reg_MI_EXMEMCNT & ~0xc));
    reg_MI_EXMEMCNT = (u16)((p->rom2nd << 4) | (reg_MI_EXMEMCNT & ~0x10));
}
