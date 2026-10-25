#include "ctx.h"

typedef struct { u32 a; u16 pad; s16 e; s16 c; } S;

extern void func_020a4e94(void);
extern void func_020a8070(S *s, u32 b);
extern void func_02002fd0(u32 *a, void (*f)(void));
extern void func_02002e70(u32 *a, u32 *b);
extern void func_020a8028(u32 a, u32 b, s32 c);
extern void func_020a829c(u32 *a, s32 b, s32 c);
extern void func_020a7fbc(s32 a, u32 b, s32 c, u32 d);

s32 func_020a8f20(void)
{
    u32 A[7];
    S s;
    u32 B[16];
    s32 iVar1, iVar2;

    iVar2 = -1;
    func_020a8070(&s, 1);
    func_02002fd0(A, func_020a4e94);
    func_02002e70(A, (u32 *)&s);
    iVar1 = s.e;
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_020a8028(1, 0, s.c);
        func_02002fd0(A, func_020a4e94);
        func_02002e70(A, 0);
        func_020a829c(B, s.e, s.c);
        func_02002fd0(A, func_020a4e94);
        func_02002e70(A, B);
        func_020a7fbc(s.e, 0, s.c, 1);
        func_02002fd0(A, func_020a4e94);
        func_02002e70(A, B);
    }
    return iVar2;
}
