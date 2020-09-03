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

void listaImprime (Lista* l){
        Lista* a;
        for (a = l; a != NULL; a = a->prox) {
                printf("%d ", a->valor);
        }
}

int inverteLista(Lista* l){
        Lista* n = instancia_lista();
        Lista* a;

        for (a = l; a != NULL; a = a->prox) {
                n=insere_lista(n,a->valor);
        }
        a = l;
        while (a != NULL) {
                Lista* s= a->prox;
                free(a);
                a = s;
        }

        return n;
}



int main(int argc, char const *argv[]) {
        Lista* l;
        int i;
        l = instancia_lista();
        for (i = 0; i < 5; i++) {
                l = insere_lista(l,i+1);
        }
        listaImprime(l);
        l = inverteLista(l);
        listaImprime(l);
        return 0;
}
