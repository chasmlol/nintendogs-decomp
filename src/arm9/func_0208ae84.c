#include "ctx.h"

typedef struct Slot { struct Tgt *tgt; struct Slot *next; } Slot;
typedef struct Src { u8 pad[0x18]; Slot slot[1]; } Src;
typedef struct Tgt { u8 pad[0x18]; Slot *head; } Tgt;

extern void func_02089c08(Src *a);
extern void func_02089bf4(void);
extern void func_020800f0(void *a, u32 b);

void func_0208ae84(Src *src, s32 k, Tgt *tgt)
{
    Tgt *old;
    Slot *p;
    Slot *q;

    func_02089c08(src);
    old = src->slot[k].tgt;
    if (old != 0) {
        if (tgt == old) {
            func_02089bf4();
            return;
        }
        p = old->head;
        if (&src->slot[k] == p) {
            old->head = src->slot[k].next;
            func_020800f0(src->slot[k].tgt, 60);
        } else {
            if (p != 0) {
                do {
                    q = p->next;
                    if (&src->slot[k] == q)
                        break;
                    p = q;
                } while (p != 0);
            }
            p->next = src->slot[k].next;
            func_020800f0(p, 8);
        }
    }
    q = tgt->head;
    tgt->head = &src->slot[k];
    src->slot[k].next = q;
    src->slot[k].tgt = tgt;
    func_02089bf4();
    func_020800f0(src, 60);
    func_020800f0(tgt, 60);
}
