#include "ctx.h"

extern u32 data_0215be3c;
extern void func_020eba24(void);
extern int func_01ffdb08(int a);
extern void func_020ecbec(u32 a);
extern void func_020eb780(int a);

typedef struct {
  s16 st[4];
  u32 p[3];
} Blk;

#define BLK (*(Blk **)&data_0215be3c)

void func_020ec63c(void)
{
  s16 i;
  s16 sv;
  u32 v;

  func_020eba24();
  i = 0;
  do {
    if (func_01ffdb08(i) == 0) {
      v = BLK->p[i];
      if (v != 0) {
        func_020ecbec(v);
        BLK->p[i] = 0;
      }
    }
    if (BLK->p[i] == 0) {
      sv = BLK->st[i];
      if (sv != 0 && sv == 2) {
        BLK->st[i] = 0;
        v = BLK->p[i];
        if (v != 0) {
          func_020ecbec(v);
          BLK->p[i] = 0;
        }
        func_020eb780(i);
      }
    }
    i = i + 1;
  } while (i < 3);
}
