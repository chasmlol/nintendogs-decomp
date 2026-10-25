#include "ctx.h"

typedef struct { u16 v; } S16;

extern int *data_ov027_0215c5e0;
extern u16 data_ov027_0215c578;
extern u16 data_ov027_0215c57c;
extern int data_02159030;
extern int data_02159058;
extern void func_0208f6ac(int a);
extern short *func_02090cac(int a, int b, int c);
extern void func_0208fd90(short *a, int b, int c, S16 d, S16 e, int f, int g, short *h, int i, int j);

void func_ov027_0215c1b8(void)
{
    short asStack_1c[10];
    S16 s1;
    S16 s2;
    short *psVar3;

    func_0208f6ac(*data_ov027_0215c5e0);
    s1.v = data_ov027_0215c578;
    s2.v = data_ov027_0215c57c;
    psVar3 = func_02090cac(*(int *)(data_02159030 + 0x28), 0x27d8, 0);
    func_0208fd90(asStack_1c, data_02159058, *(int *)((u8 *)data_ov027_0215c5e0 + 4), s1, s2, 1, 1, psVar3, 1, 0);
}
