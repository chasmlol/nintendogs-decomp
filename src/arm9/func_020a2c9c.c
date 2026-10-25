#include "ctx.h"

typedef struct {
  u16 val;
  s16 next;
} Ent;

extern u32 data_02159320;
extern s16 data_02141fc0;
extern s16 data_02141fbc;
extern int func_01ffdb08(int a);
extern void func_02027540(int a);
extern void func_0202707c(int a, int b);
extern void func_020274f8(int a, int b);

void func_020a2c9c(int param_1)
{
  u8 *pp = (u8 *)param_1;
  u32 r4;
  u32 cnt;
  u32 val;
  Ent *tab;
  int s80;
  int iVar3;
  int iVar5;

  s80 = *(s16 *)(pp + 0x80);
  if (s80 == -1) {
    return;
  }
  r4 = *(u16 *)(pp + 0x88);
  cnt = *(u16 *)(pp + 0x8a);
  tab = *(Ent **)&data_02159320;
  if (r4 < cnt) {
    val = tab[r4].val;
    if (val != 0xffff) {
      goto mid;
    }
  }
  if (s80 != -1) {
    *(s16 *)(pp + 0x80) = -1;
    *(u32 *)(pp + 0x84) = 0;
    *(u16 *)(pp + 0x88) = 0;
    *(u16 *)(pp + 0x8a) = 16;
  }
  return;
mid:
  if (*(u32 *)(pp + 0x84) != val) {
    goto inc;
  }
  if (tab[r4].next != -1) {
    goto call;
  }
  if (s80 != -1) {
    *(s16 *)(pp + 0x80) = -1;
    *(u32 *)(pp + 0x84) = 0;
    *(u16 *)(pp + 0x88) = 0;
    *(u16 *)(pp + 0x8a) = 16;
  }
  return;
call:
  iVar3 = func_01ffdb08(*(s16 *)(pp + 0x24));
  iVar5 = tab[*(u16 *)(pp + 0x88)].next;
  func_02027540(iVar3);
  if (iVar5 > 74) {
    iVar5 = 74;
  } else if (iVar5 < 61) {
    iVar5 = 61;
  }
  iVar5 = data_02141fbc * (iVar5 - data_02141fc0);
  func_0202707c(iVar3, 34);
  func_020274f8(iVar3, iVar5);
  *(u16 *)(pp + 0x88) = *(u16 *)(pp + 0x88) + 1;
  *(u32 *)(pp + 0x84) = 0;
  return;
inc:
  *(u32 *)(pp + 0x84) = *(u32 *)(pp + 0x84) + 1;
}
