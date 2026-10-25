#include "ctx.h"

typedef struct {
    int w0;
    int w1;
} Pair;

extern BOOL func_02088138(int a, char *b);
extern int func_02088064(int *a, Pair b);

u32 func_02088014(int *param_1, char *param_2)
{
    BOOL bVar1;
    int iVar2;
    Pair local;

    bVar1 = func_02088138((int)&local, param_2);
    if ((bVar1) && (iVar2 = func_02088064(param_1, local), iVar2 != 0)) {
        return 1;
    }
    return 0;
}
