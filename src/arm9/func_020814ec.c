#include "ctx.h"

extern void func_0206bdf0(void);
extern void func_0206bc1c(void);
extern void func_0206bc8c(void *a, u32 b, u32 c);

typedef struct {
  u32 lo : 4;
  u32 rest : 28;
} Bits4;

typedef struct {
  u8 pad0[4];
  Bits4 b;
  u32 v;
} Obj;

typedef struct {
  Obj *obj;
  u32 res;
  u32 pad[3];
} Ent;

typedef struct {
  u8 pad0[0x20];
  Ent *tab;
  u8 pad1[2];
  u16 count;
} Hdr;

u32 func_020814ec(Hdr *param_1, u32 (*param_2)(u32, u32))
{
  s32 i;
  Ent *e;
  Obj *o;
  u32 uVar1;
  func_0206bdf0();
  for (i = 0; i < (s32)param_1->count; i++) {
      e = &param_1->tab[i];
      o = e->obj;
      uVar1 = param_2(o->v, o->b.lo == 5);
      func_0206bc8c((u8 *)e->obj + 0x20, uVar1, o->v);
      e->res = uVar1;
  }
  func_0206bc1c();
  return 1;
}
