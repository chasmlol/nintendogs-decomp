#include "ctx.h"

typedef struct { u8 pad[0xd0]; u8 *ent[3]; } ObjE;
extern u8 *data_ov009_0215cce0;
extern u8 data_02152ce0[];
extern u8 data_02152cd8[];
extern u8 data_02152f18[];
extern u8 data_02152f24[];
extern u8 data_02152f30[];
extern u8 data_02152d24[];
extern u8 data_ov009_0215cc80[];

void func_ov009_0215c2c0(u8 *p);
void func_ov009_0215cb20(u8 *p);
void func_0206a890(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u32 h);
void func_0206a6f8(u8 *a, u8 *b, u8 *c, s32 d, u8 *e);
void func_02074768(s32 *a);
void func_02074790(s32 *a);
void func_020747b8(void);
void func_02077168(u8 *a);
void func_020778d0(void);
void func_020066d0(s32 a);

typedef struct {
    s32 v[3];
} T3;

void func_ov009_0215c0ac(void)
{
    u8 *r5;
    u8 *obj;
    u8 *p1;
    u8 *p2;
    u8 *p3;
    s32 i;
    u32 k;
    u8 *ptr;
    s32 *pv;

    func_ov009_0215c2c0(data_ov009_0215cce0 + 8);
    func_ov009_0215cb20(data_ov009_0215cce0 + 8);
    obj = data_ov009_0215cce0;
    r5 = obj + 8;
    p1 = r5 + 20;
    func_0206a890(*(s32 *)(r5 + 0), *(s32 *)(r5 + 4), *(s32 *)(r5 + 8), *(s32 *)(r5 + 12),
                  *(s32 *)(r5 + 0x10), 0x1000, 0, (u32)data_02152ce0);
    {
        *(vu32 *)(data_02152cd8 + 0xfc) = *(vu32 *)(data_02152cd8 + 0xfc) & 0xffffffafu;
    }
    p3 = p1 + 12;
    p2 = p1 + 24;
    *(T3 *)data_02152f18 = *(T3 *)p1;
    *(T3 *)data_02152f24 = *(T3 *)p2;
    *(T3 *)data_02152f30 = *(T3 *)p3;
    func_0206a6f8(p1, p2, p3, 0, data_02152d24);
    {
        *(vu32 *)(data_02152cd8 + 0xfc) = *(vu32 *)(data_02152cd8 + 0xfc) & 0xffffff17u;
    }
    *(u16 *)(data_ov009_0215cce0 + 0xf0) = (u16)(*(u16 *)(data_ov009_0215cce0 + 0xf0) + 0x200);
    *(u16 *)(data_ov009_0215cce0 + 0xf2) = (u16)(*(u16 *)(data_ov009_0215cce0 + 0xf2) + 0x400);
    i = 0;
    do {
        ptr = ((ObjE *)data_ov009_0215cce0)->ent[i];
        *(s32 *)ptr = *(s32 *)ptr + 0x1000;
        ptr = ((ObjE *)data_ov009_0215cce0)->ent[i];
        i = i + 1;
        if (*(s32 *)ptr >= (s32)((u32)*(u16 *)(*(u8 **)(ptr + 8) + 4) << 12)) {
            *(s32 *)ptr = 0;
        }
    } while (i < 3);
    pv = *(s32 **)(data_ov009_0215cce0 + 0xe8);
    *pv = *pv + 0x1000;
    pv = *(s32 **)(data_ov009_0215cce0 + 0xe8);
    if (*pv >= (s32)((u32)*(u16 *)(*(u8 **)((u8 *)pv + 8) + 4) << 12)) {
        *pv = 0;
    }
    {
        s32 loc30b[3] = {0, 0, 0};
        s32 loc24b[3];
        *(T3 *)loc24b = *(T3 *)data_ov009_0215cc80;
        func_02074768(loc24b);
        func_02074790(loc30b);
    }
    func_020747b8();
    func_02077168(data_ov009_0215cce0 + 0x7c);
    func_020778d0();
    k = 0;
    do {
        func_020066d0(k);
        k = (u16)(k + 1);
    } while (k < 2);
}
