#include "ctx.h"

typedef struct {
  u8 p0[2];
  s16 id;
  u32 w4;
  u32 w8;
  u16 wc;
  u8 pe[0x12];
} Ent;
typedef struct {
  s32 n;
  u8 pad[0x90];
  Ent ent[70];
  s16 A[3];
  s16 B[3];
} S;

extern u8 *data_0215be48;
extern void func_02110f30(u16 *a, u32 b);
extern void func_02110dbc(u32 a, u32 b, u32 c);
extern void func_0210f2c0(int a, int b, u32 c, u32 d, u32 e);
extern s32 func_0211b228(s32 a);
extern void func_02112798(int a, u32 b, u32 c);
extern u32 func_02112dec(int a, s32 b);
extern void func_02112dc4(int a, u32 b, u32 c);

void func_0211079c(u32 param_1, s32 param_2)
{
  s32 cnt;
  s32 v;
  Ent *e;
  S *s;
  s32 j;
  s32 i;
  u32 m;
  s32 x;
  s32 y;
  u16 loc[18];

  cnt = 0;
  s = (S *)(data_0215be48 + 0xc4);
  func_02110f30(loc, param_1);
  if (param_2 < 0 || param_2 >= 70) {
    param_2 = 0;
  }
  e = &s->ent[param_2];
  func_02110dbc((u32)s, (u32)loc, (u32)e);
  func_0210f2c0(5, 2, loc[0], e->w8, param_1);
  i = 0;
  do {
    x = (e->id == s->A[i]) ? 1 : 0;
    cnt = cnt + x;
    y = (e->id == s->B[i]) ? 1 : 0;
    cnt = cnt + y;
    i = i + 1;
  } while (i < 3);
  j = 0;
  if (s->n <= 0) {
    return;
  }
  do {
    i = func_0211b228(j);
    m = (e->id == s->A[i]);
    if (m != 0) {
      v = 41;
    } else if (cnt >= e->wc) {
      v = 42;
    } else {
      v = 40;
    }
    func_02112798(2, loc[j + 7], m);
    m = func_02112dec(2, v);
    func_02112dc4(2, loc[j + 4], m);
    j = j + 1;
  } while (j < s->n);
}
