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
int percorreLista (Lista* l){
        Lista* a;
        int i=0;
        for (a = l; a != NULL; a = a->prox) {
                i++;
        }
        return i;
}

int* escreveLista(int i, Lista* l) {
        int* V = malloc(i);
        Lista* p = l;
        int aux;
        for(aux = 0; aux < i; aux++) {
                *(V+aux) = p->valor;
                p=p->prox;
        }
        return V;
}


void main()
{
        Lista* lst;
        lst = iniciaLista();
        int x;
        for(x=10; x>0; x--) {
                lst= insereLista(lst,x);
        }
        int tam = percorreLista(lst);
        int* V=escreveLista(tam,lst);
        for(x=0; x<10; x++) {
                printf("%d\n", V[x]);
        }

}
