#include "ctx.h"

typedef struct { u8 data[0x13c]; } SubA;
typedef struct { u8 data[0x40]; } SubB;

typedef struct {
    u8 pad0[6];
    s16 f6;
    u8 pad8[0x85c - 8];
    SubA a;          /* 0x85c */
    SubB b;          /* 0x998 */
} Obj;

typedef struct { u8 pad[0x30]; Obj *obj; } Mgr;

extern Mgr *data_02159424;
extern s16 func_02093054(void);
extern void func_020955e4(Obj *p, s16 a);
extern void func_02093160(Obj *p, s16 a);
extern void func_02095670(Obj *p);
extern void func_02095578(Obj *p, s16 a);
extern void func_02094afc(SubA *p, s16 a, s16 b);
extern void func_020949ec(SubA *p, s16 a, s16 b);
extern void func_0206c7bc(u16 data, void *dest, u32 size);
extern void func_02094a48(SubA *p, s16 a, s16 b);
extern void func_02094994(SubB *p, s16 a, s16 b);
extern void func_02094884(SubB *p, s16 a, s16 b);
extern void func_020948e0(SubB *p, s16 a, s16 b);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    MI_CpuFill16(dest, 0, size);
}

void func_020a4b88(s16 param)
{
    s16 idx;
    Obj *obj;
    s16 i;

    idx = func_02093054();
    obj = data_02159424->obj;
    func_020955e4(obj, param);
    obj->f6 = -1;
    func_02093160(obj, idx);
    func_02095670(obj);
    func_02095578(obj, param);
    for (i = 0; i < 20; i++) {
        func_02094afc(&obj->a, param, i);
        func_020949ec(&obj->a, idx, i);
        MI_CpuClear16(&obj->a, sizeof(SubA));
        func_02094a48(&obj->a, param, i);
        func_02094994(&obj->b, param, i);
        func_02094884(&obj->b, idx, i);
        MI_CpuClear16(&obj->b, sizeof(SubB));
        func_020948e0(&obj->b, param, i);
    }
}
