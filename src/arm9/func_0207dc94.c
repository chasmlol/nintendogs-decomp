#include "ctx.h"

typedef struct { void *headAllocator; void *tailAllocator; } FrmHeapHead;

extern s32 func_0205ebe0(s32 a);

#define NNSiGetUIntPtr(p) ((u32)(p))
#define AddU32ToPtr(p, v) ((void *)(NNSiGetUIntPtr(p) + (v)))
#define RoundUp(v, a) ((((a) - 1) + (v)) & ~((a) - 1))
#define RoundUpPtr(p, a) ((void *)RoundUp(NNSiGetUIntPtr(p), (a)))

static inline FrmHeapHead *GetFrmHeapHead(void *heap)
{
    return (FrmHeapHead *)AddU32ToPtr(heap, 0x24);
}

u32 func_0207dc94(void *heap, s32 alignment)
{
    const FrmHeapHead *h;

    alignment = func_0205ebe0(alignment);
    h = GetFrmHeapHead(heap);
    {
        const void *block = RoundUpPtr(h->headAllocator, alignment);
        if (NNSiGetUIntPtr(block) > NNSiGetUIntPtr(h->tailAllocator)) {
            return 0;
        }
        return NNSiGetUIntPtr(h->tailAllocator) - NNSiGetUIntPtr(block);
    }
}
