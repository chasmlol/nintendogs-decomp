extern int data_02159198[];
extern int data_021591a0[];
extern void func_02070c18(void *p, int arg);

int func_0209e494(int arg)
{
    int *piVar1 = data_02159198;
    int *piVar2 = data_021591a0;
    if (piVar1[16] != 0) {
        piVar1[16] = 0;
        *(short *)((char *)piVar1 + 52) = -1;
        piVar1[15] = -1;
        *(unsigned short *)((char *)piVar1 + 56) = 0;
        piVar1[17] = 0;
        if (*piVar2 != 0) {
            func_02070c18(piVar2, arg);
        }
        if (*piVar1 != 0) {
            func_02070c18(piVar1, arg);
            return 1;
        }
    }
    return 0;
}
