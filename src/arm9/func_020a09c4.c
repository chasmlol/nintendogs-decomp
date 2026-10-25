#include "ctx.h"

typedef struct {
  u8 pad[0x20];
  u32 f20;
  u32 f24;
} Obj;

extern Obj data_021592e4;
extern u32 data_0215931c;
extern u16 data_02141fb4;
extern void func_02072fe4(void *p, int a, int b);
extern void func_020709c8(void *p, int a, int b);
extern void func_02070800(void *p, int a, int b);

int func_020a09c4(int param_1, int param_2)
{
  Obj *o;
  vu32 *g;

  o = &data_021592e4;
  o->f20 = 0;
  g = (vu32 *)&data_0215931c;
  if (*g == 0 && o->f24 == 0) {
    func_02072fe4((void *)g, 0x43, 0);
    o->f24 = 1;
  }
  if (*g != 0 && o->f24 != 0) {
    func_020709c8((void *)g, data_02141fb4, (param_2 >> 1) - 0x40);
    func_02070800((void *)g, 0xe, (s16)param_1);
    return 1;
  }
  return 0;
}
