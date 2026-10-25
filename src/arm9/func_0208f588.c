#include "ctx.h"

typedef struct Node {
    u32 w0;
    u32 w1;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Owner {
    u8 pad[0x10];
    Node *head;
} Owner;

void func_0208f588(Owner *param_1, Node *param_2)
{
    Node *iVar2;
    Node *iVar1;
    if (param_1 == 0) {
        return;
    }
    if (param_2 == 0) {
        return;
    }
    iVar2 = param_1->head;
    if (iVar2 == 0) {
        param_1->head = param_2;
        param_2->next = param_2;
        param_2->prev = param_2;
    } else {
        iVar1 = iVar2->next;
        param_2->next = iVar1;
        param_2->prev = iVar2;
        iVar2->next = param_2;
        iVar1->prev = param_2;
    }
}
