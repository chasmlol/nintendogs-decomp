#pragma avoid_byte strb
#include "ctx.h"

extern int data_0214f464;
extern void func_02026bac(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_0202c0ec(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_0201dea4(u8 *p)
{
    s32 s;
    s16 uVar1;
    int *q;
    s32 iVar2;
    ((Obj *)p)->s0 = 0x111;
    s = *(s16 *)(p + 0x164);
    if (s == 0x11) goto c17;
    if (s != 0x12) goto def;
    goto c18;
c17:
    uVar1 = 18;
    goto join;
c18:
    uVar1 = 17;
    goto join;
def:
    q = (int *)data_0214f464;
    iVar2 = *q * 0x10dcd + 1;
    *q = iVar2;
    uVar1 = (s16)(0x11 + (u16)((u32)(iVar2 << 16) >> 31));
join:
    ((Obj *)p)->s1 = uVar1;
    *(u8 *)(p + 151) = 4;
    *(u8 *)(p + 152) = 6;
    func_02026bac(p);
    func_02025bb0(p);
    func_0202c0ec(p);
}
