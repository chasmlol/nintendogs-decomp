#include "ctx.h"

extern u32 data_0214e58c;
extern u32 data_0214e58c__2;
extern u32 func_02088dfc(u8 *p);
extern u32 func_02088a28(u8 *a, u8 *b, u32 c);
extern void func_0206c924(u8 *p, u32 v, u32 n);
extern void func_02080b84(void);
extern void func_02000914(u32 a);
extern void func_0208010c(u32 a, u32 b);

void func_02088928(u8 *param_1)
{
    u32 uVar2;
    s32 bVar1;
    u32 *puVar4;
    u32 *puVar3;
    s32 diff;
    s32 q;
    u32 *tbl;

    uVar2 = func_02088dfc(param_1);
    if (*(vu16 *)0x027ffc40 == 2) {
        bVar1 = 0;
        if ((param_1[0x1f] & 2) != 0) {
            tbl = (u32 *)&data_0214e58c;
            diff = (s32)&data_0214e58c__2 - (s32)&data_0214e58c;
            q = diff / 20;
            if (*(u32 *)param_1 < (u32)q) {
                bVar1 = func_02088a28((u8 *)&data_0214e58c + *(u32 *)param_1 * 20, *(u8 **)(param_1 + 4), uVar2);
            }
        }
        if (bVar1 == 0) {
            func_0206c924(*(u8 **)(param_1 + 4), 0, uVar2);
            func_02080b84();
            return;
        }
    }
    if ((param_1[0x1f] & 1) != 0) {
        func_02000914(*(u32 *)(param_1 + 4) + uVar2);
    }
    func_0208010c(*(u32 *)(param_1 + 4), *(u32 *)(param_1 + 8));
    puVar4 = *(u32 **)(param_1 + 16);
    puVar3 = *(u32 **)(param_1 + 20);
    if (puVar4 < puVar3) {
        do {
            if (*puVar4 != 0) {
                ((void (*)(void))*puVar4)();
            }
            puVar4 = puVar4 + 1;
        } while (puVar4 < puVar3);
    }
}
