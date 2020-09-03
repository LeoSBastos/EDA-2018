#include <stdio.h>
#include <stdlib.h>


struct lista {
        int valor;
        struct lista* prox;
        struct lista* ant;
};
typedef struct lista Lista;

Lista* instancia_lista(){
        return NULL;
}

Lista* insere_lista(Lista* l,int v){
        Lista* n = (Lista*) malloc(sizeof(Lista));
        n->valor = v;
        n->prox = l;
        n->ant = NULL;
        if (l != NULL) {
                l->ant = n;
        }
        return n;
}

void percorre_lista(Lista* l){
        Lista* a;
        for (a = l; a !=NULL; a = a->prox) {
                printf("%d\n", a->valor);
        }
}


Lista* trocarPosicao(Lista* l, int i, int j){
        Lista* a = (Lista*)malloc(sizeof(Lista));
        Lista* b = (Lista*)malloc(sizeof(Lista));
        Lista* t = (Lista*)malloc(sizeof(Lista));

        for(a=l; i>=0; i--) {
                a = a->prox;
        }
        for(b=l; j>=0; j--) {
                b = b->prox;
        }

        t->valor = a->valor;
        t->prox = a->prox;
        t->ant = a->ant;

        a->valor = b->valor;
        a->prox = b->prox;
        a->ant = b->ant;

        b->valor = t->valor;
        b->prox = t->prox;
        b->ant = t->ant;

        return l;
}



void main() {
        Lista* l;
        int i;
        l = instancia_lista();
        for (i = 4; i > 0; i--) {
                l = insere_lista(l,i);
        }
        percorre_lista(l);
        l = trocarPosicao(l,2,3);
        percorre_lista(l);
        return 0;
}
