#include <stdio.h>
#include <stdlib.h>


struct lista {
        int valor;
        struct lista* prox;
};
typedef struct lista Lista;

Lista* instancia_lista(){
        return NULL;
}

Lista* insere_lista(Lista* l,int v){
        Lista* n = (Lista*) malloc(sizeof(Lista));
        n->valor = v;
        n->prox = l;
        return n;
}

int percorre_lista(Lista* l){
        int cont = 0;
        Lista* a;
        for (a = l; a!= NULL; a = a->prox) {
                cont++;
        }
        return cont;
}

int main(int argc, char const *argv[]) {
        Lista* l;
        int i;
        l = instancia_lista();
        for (i = 0; i < 100; i++) {
                l = insere_lista(l,i+1);
        }
        percorre_lista(l);
        return 0;
}
