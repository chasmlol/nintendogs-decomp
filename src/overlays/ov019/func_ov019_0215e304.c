#include "ctx.h"

typedef struct { s32 w[3]; } V3;

extern s16 data_02126868[];
extern void func_02067288(u32 *a, u32 *b, s32 c, s32 d);
extern void func_01ff810c(u32 *a, u32 *b, u32 *c);
extern u8 *func_ov019_021611a0(void);
extern void func_01ff8058(s32 *a, u32 *b, u32 *c);
extern void func_02067e68(u32 *a, s32 *b, s32 *c);
extern s32 func_0200b0cc(s32 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern s32 func_02009eb8(s32 *a, s32 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);

void func_ov019_0215e304(u8 *p)
{
  u8 *o;
  s32 unaff_r8;
  s32 unaff_r7;
  s32 unaff_r6;
  s32 unaff_r5;
  s32 unaff_r4;
  s32 unaff_r11;
  s32 i6;
  s32 k;
  u8 *vq;
  u8 *vb;
  s16 counter;
  s32 local_e0;
  s32 bVar9;
  s32 local_d8;
  s32 m1;
  s32 t60;
  s32 t64;
  s32 t68;
  s32 local_b0;
  s32 local_ac;
  s16 sVar3;
  s32 uVar8;
  s32 uVar5;
  s32 T;
  u32 ta;
  u32 tb;
  u32 tc;
  u32 vec[3];
  u32 auStack_9c[12];
  V3 vA;
  V3 vB;
  V3 vC;
  s32 local_48[6];
  s32 aiStack_30[3];
  s32 part;
  s32 part2;
  u16 hv;

  hv = 0;
  ta = *(u32 *)(p + 0x50);
  tb = *(u32 *)(p + 0x4c);
  tc = *(u32 *)(p + 0x48);
  vec[0] = tc;
  vec[2] = ta;
  vec[1] = tb;
  i6 = (s32)(*(u16 *)(*(u8 **)(p + 0xac) + 6)) >> 4;
  func_02067288(auStack_9c, vec, data_02126868[i6 * 2], data_02126868[i6 * 2 + 1]);
  func_01ff810c((u32 *)(p + 0x48), auStack_9c, (u32 *)(p + 0x48));
  o = *(u8 **)(p + 0xac);
  *(u16 *)(o + 4) = *(u16 *)(o + 4) + *(u16 *)(o + 6);
  bVar9 = 0;
  m1 = -1;
  local_d8 = 0;
  local_b0 = 0;
  local_ac = 0;
  counter = 0;
  do {
    i6 = *(s16 *)(*(u8 **)(p + 0xac) + counter * 2 + 8);
    if (i6 != -1) {
      if (i6 < 0) goto Z;
      if (i6 < 0x32) goto C;
Z:
      o = (u8 *)local_d8;
      goto N;
C:
      o = func_ov019_021611a0();
      o = *(u8 **)(o + i6 * 4 + 4);
N:
      if (o != 0) {
        if (o != 0) sVar3 = *(s16 *)(o + 0x24); else sVar3 = m1;
        if (sVar3 == 7) {
          if (o != 0) sVar3 = *(s16 *)(o + 0x1e); else sVar3 = m1;
          if (sVar3 == 1) {
            if (!bVar9) {
              local_48[0] = 0;
              local_48[1] = 0xc00;
              local_48[2] = 0;
              func_01ff8058(local_48, (u32 *)(p + 0x48), (u32 *)local_48);
              func_02067e68((u32 *)(p + 0x3c), local_48, local_48);
              uVar8 = (s32)((((s64)data_02126868[((s32)(*(u16 *)(*(u8 **)(p + 0xac) + 4)) >> 4) * 2]) * 1024 + 0x800) >> 12);
              i6 = uVar8 * 6;
              if (i6 < 0) i6 = -i6;
              if (*(u16 *)(*(u8 **)(p + 0xac) + 6) < 0x8000) {
                unaff_r8 = -vec[2];
                unaff_r7 = vec[0];
              } else {
                unaff_r8 = vec[2];
                unaff_r7 = -vec[0];
              }
              unaff_r6 = -unaff_r8;
              uVar5 = (s32)((((s64)unaff_r7 * 0x600) + 0x800) >> 12);
              T = (s32)((((s64)unaff_r8 * (i6 >> 1)) + 0x800) >> 12);
              part = local_48[0] + uVar5;
              unaff_r5 = part + T;
              unaff_r11 = (local_48[0] - uVar5) - T;
              uVar5 = (s32)((((s64)unaff_r6 * 0x600) + 0x800) >> 12);
              T = (s32)((((s64)unaff_r7 * (i6 >> 1)) + 0x800) >> 12);
              part2 = local_48[2] + uVar5;
              unaff_r4 = part2 + T;
              local_e0 = (local_48[2] - uVar5) - T;
              bVar9 = 1;
            }
            if (o != 0) vA = *(V3 *)(*(u8 **)(o + 0xac) + 0x18);
            if (o != 0) vB = *(V3 *)(*(u8 **)(o + 0xac) + 0x24);
            if (o != 0) vC = *(V3 *)(*(u8 **)(o + 0xac) + 0x30);
            if (func_0200b0cc((s32 *)&vA, unaff_r7, unaff_r6, unaff_r8, unaff_r7, unaff_r5, unaff_r4, unaff_r11, local_e0) ||
                func_0200b0cc((s32 *)&vB, unaff_r7, unaff_r6, unaff_r8, unaff_r7, unaff_r5, unaff_r4, unaff_r11, local_e0) ||
                func_0200b0cc((s32 *)&vC, unaff_r7, unaff_r6, unaff_r8, unaff_r7, unaff_r5, unaff_r4, unaff_r11, local_e0)) {
              **(u32 **)(p + 0xac) = 1;
              t68 = *(s32 *)(o + 0x68);
              t64 = *(s32 *)(o + 0x64);
              t60 = *(s32 *)(o + 0x60);
              local_48[3] = t60;
              local_48[4] = t64;
              local_48[5] = t68;
              func_02067e34((s32 *)(o + 0x3c), (s32 *)(p + 0x3c), aiStack_30);
              if (func_02009eb8(&local_48[3], aiStack_30)) {
                *(s16 *)(*(u8 **)(o + 0xac) + 6) = 0x200;
              } else {
                *(u16 *)(*(u8 **)(o + 0xac) + 6) = 0xfe00;
              }
              *(s16 *)(o + 0x1e) = 6;
              i6 = local_b0;
              vq = *(u8 **)(p + 0xac);
              k = *(s16 *)(o + 0x1c);
              do {
                if (k == *(s16 *)(vq + i6 * 2 + 8)) {
                  *(s16 *)(vq + i6 * 2 + 8) = m1;
                  break;
                }
                i6 = (i6 + 1) * 0x10000 >> 0x10;
              } while (i6 < 8);
              i6 = local_ac;
              vq = *(u8 **)(o + 0xac);
              do {
                if (*(s16 *)(p + 0x1c) == *(s16 *)(vq + i6 * 2 + 8)) {
                  *(s16 *)(vq + i6 * 2 + 8) = m1;
                  break;
                }
                i6 = (i6 + 1) * 0x10000 >> 0x10;
              } while (i6 < 8);
            }
          }
        }
      }
    }
    counter = (s16)(counter + 1);
  } while (counter < 8);
  vb = *(u8 **)(p + 0xac);
  hv = *(u16 *)(vb + 6);
  if (hv >= 0x8000) goto HI;
  if (*(u16 *)(vb + 4) >= 0x4000) {
    *(s16 *)(p + 0x1e) = 7;
    return;
  }
HI:
  if (hv <= 0x8000) return;
  if (*(u16 *)(vb + 4) <= 0xc000) *(s16 *)(p + 0x1e) = 7;
}
