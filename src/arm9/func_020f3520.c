extern int func_020c8164(unsigned int a, unsigned int b);
extern void func_020c6300(void *self, unsigned int b, unsigned int c, unsigned int d, int e,
                          void *f, void *g, unsigned int h, void *i, void *j);
extern void func_020f3898(void);
extern void func_020f3700(void);
extern void func_020f36e8(void);
extern void func_020f36dc(void);

void func_020f3520(int param_1)
{
    int iVar1;
    iVar1 = func_020c8164(*(unsigned short *)((char *)param_1 + 160),
                          *(unsigned int *)((char *)param_1 + 0xf8));
    func_020c6300((void *)param_1, *(unsigned int *)((char *)param_1 + 0xf8), 0, 0, iVar1,
                  (void *)func_020f3898, (void *)func_020f3700, 0, (void *)func_020f36e8,
                  (void *)func_020f36dc);
}
