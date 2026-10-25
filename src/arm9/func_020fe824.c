#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u16 c;
    u16 pad;
} Ent;

extern u8 data_02147988[];
extern u8 data_02147998[];
extern u8 data_021479a8[];
extern u8 data_021479b8[];
extern u8 data_021479d0[];
extern Ent data_0214790c[];
extern u8 data_021478cc[];

void func_0210ea40(u32 a, u32 b, u32 c, u32 d);
u32 func_0210e968(u32 a, void *b);
void func_02113090(u32 a, u32 b);
void func_021130c4(u32 a, u32 b);
void func_0211305c(u32 a, u32 b);
void func_02112ed0(u32 a, u32 b);
void func_02112e74(u32 a, u32 b);
void func_020fc8b0(u32 a, u32 b, u32 c);
void func_02101cf4(void);
u32 func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
u32 func_020fc938(u32 a, u32 b, u32 c, u32 d);
void func_02101be4(u32 a, u32 b);
void func_021017d4(u32 a, u32 b, u32 c);
void func_02101118(u32 a, u32 b, u32 c, u32 d, void *e);
void func_0211216c(u32 a, u32 b);
void func_02107e1c(void);
void func_02112744(u32 a, void *b, u32 c);
void func_02117a58(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);

void func_020fe824(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;
    u32 iVar5;
    u16 *puVar6;
    Ent *piVar7;

    func_0210ea40(0x2b, param_2, param_3, param_4);
    iVar1 = func_0210e968(0x2b, data_02147988);
    iVar2 = func_0210e968(0x2b, data_02147998);
    iVar3 = func_0210e968(0x2b, data_021479a8);
    iVar4 = func_0210e968(0x2b, data_021479b8);
    iVar5 = func_0210e968(0x2b, data_021479d0);
    func_02113090(2, iVar1);
    func_021130c4(2, iVar2);
    func_0211305c(2, iVar3);
    func_02112ed0(2, iVar4);
    func_02112e74(2, iVar5);
    func_020fc8b0(2, 0, 0);
    func_02101cf4();
    {
        s32 cnt = 0;
        Ent *pt = data_0214790c;
        do {
            iVar5 = func_02101894(0, iVar4, iVar2, pt->a, 0);
            puVar6 = (u16 *)func_020fc938(2, 0, pt->c, 0);
            func_02101be4(iVar5, 0);
            func_021017d4(0, iVar5, 0xe);
            if (puVar6 != (u16 *)0) {
                func_02101118(0, iVar3, pt->a, pt->b, puVar6);
            }
            cnt = cnt + 1;
            pt = pt + 1;
        } while (cnt < 5);
    }
    func_0211216c(2, 2);
    func_02107e1c();
    func_02112744(2, data_021478cc, 0);
    func_02117a58(param_1 + 1, 2, 1, 0, 0, 0, 0, 0, 0, 10, 10);
    func_02117a58(param_1 + 0x10, 2, 3, 0, 0, 0, 0, 0, 0, 10, 10);
    func_02117a58(param_1 + 0x1f, 2, 2, 0, 0, 0, 0, 0, 0, 10, 10);
    func_02117a58(param_1 + 0x2e, 2, 0, 0, 0, 0, 0, 0, 0, 10, 10);
    func_02117a58(param_1 + 0x3d, 2, 4, 0, 0, 0, 0, 0, 0, 10, 10);
}
