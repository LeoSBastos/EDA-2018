#include <stdio.h>
#include <stdlib.h>


struct lista {
        int valor;
        struct lista* prox;
} lista;

typedef struct lista Lista;

Lista* iniciaLista(){
        return NULL;
}

Lista* insereLista(Lista* l, int v){
        Lista* novo = (Lista*) malloc(sizeof(Lista));
        novo->valor = v;
        novo->prox = l;
        return novo;
}

Lista* copiaLista (Lista* l, int v[],int i){
        for(i; i>0; i--) {
                l = insereLista(l,v[i-1]);
        }
        return l;
}

        void listaImprime (Lista* l){
                Lista* a;
                for (a = l; a != NULL; a = a->prox) {
                        printf("%d ", a->valor);
                }
        }
