#include <stdio.h>
#include "libprg/libprg.h"
int main(void) {
    pilha_t *p = criar_pilha();
    pop(p);
    push(p,3);
    push(p,5);
    push(p,7);
    push(p,5);
    push(p,7);
    push(p,7);
    push(p,5);
    push(p,7);
    return 0;
}