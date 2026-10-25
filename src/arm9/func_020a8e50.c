#include "ctx.h"
extern void func_020a4e94(void);
extern void func_020a8070(u32 *p, s32 a);
extern void func_02002fd0(u32 *p, void *f);
extern void func_02002e70(u32 *p, void *q);
extern void func_020a8028(s32 a, s32 b, s32 c);
extern void func_020a8210(u32 *p, s32 a, s32 b);
extern void func_020a7fbc(s32 a, s32 b, s32 c, s32 d);

typedef struct {
    u32 a70[7];
    u32 s54;
    s16 pad32;
    s16 s4e;
    s16 s4c;
    u32 a48[16];
} Frame;

s32 func_020a8e50(void)
{
    Frame f;
    s32 iVar1;
    s32 iVar2;

    iVar2 = -1;
    func_020a8070(&f.s54, 2);
    func_02002fd0(f.a70, (void *)func_020a4e94);
    func_02002e70(f.a70, &f.s54);
    iVar1 = f.s4e;
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_020a8028(2, 1, f.s4c);
        func_02002fd0(f.a70, (void *)func_020a4e94);
        func_02002e70(f.a70, NULL);
        func_020a8210(f.a48, f.s4e, f.s4c);
        func_02002fd0(f.a70, (void *)func_020a4e94);
        func_02002e70(f.a70, f.a48);
        func_020a7fbc(f.s4e, 1, f.s4c, 2);
        func_02002fd0(f.a70, (void *)func_020a4e94);
        func_02002e70(f.a70, f.a48);
    }
    return iVar2;
}
