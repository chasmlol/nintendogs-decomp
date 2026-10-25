#include "ctx.h"

extern void func_020a4e94(void);
extern void func_020a8070(void *p, s32 v);
extern void func_02002fd0(void *p, void *f);
extern void func_02002e70(void *p, void *q);
extern void func_020a8028(s32 a, s32 b, s32 c);
extern void func_020a80f0(void *p, s32 a, s32 b);
extern void func_020a7fbc(s32 a, s32 b, s32 c, s32 d);

#define LOCAL_4E(s) (((s16 *)(s))[17])
#define LOCAL_4C(s) (((s16 *)(s))[18])

s32 func_020a8d80(void)
{
    s32 stk[26];
    s32 iVar1;
    s32 iVar2;

    iVar2 = -1;
    func_020a8070(&stk[7], 3);
    func_02002fd0(&stk[0], (void *)func_020a4e94);
    func_02002e70(&stk[0], &stk[7]);
    iVar1 = (s32)LOCAL_4E(stk);
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_020a8028(3, 2, LOCAL_4C(stk));
        func_02002fd0(&stk[0], (void *)func_020a4e94);
        func_02002e70(&stk[0], 0);
        func_020a80f0(&stk[10], LOCAL_4E(stk), LOCAL_4C(stk));
        func_02002fd0(&stk[0], (void *)func_020a4e94);
        func_02002e70(&stk[0], &stk[10]);
        func_020a7fbc(LOCAL_4E(stk), 2, LOCAL_4C(stk), 3);
        func_02002fd0(&stk[0], (void *)func_020a4e94);
        func_02002e70(&stk[0], &stk[10]);
    }
    return iVar2;
}
