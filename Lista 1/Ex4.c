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

Lista *buscaUltimo(Lista *luisa)
{
        Lista *choro = luisa;
        while (choro != NULL)
        {
                choro = choro->prox;
        }
        return choro;
}

Lista *insereFinal(Lista *luisa, int valor)
{
        Lista *choro = (Lista *)malloc(sizeof(Lista));
        choro->valor = valor;
        choro->prox = NULL;
        if (luisa != NULL)
        {
                Lista *choro = buscaUltimo(luisa);
                choro->prox = choro;
                return luisa;
        }
        else
        {
                luisa = choro;
                return luisa;
        }
}

Lista* concatenarLista(Lista* a, Lista* b){
        if( a != NULL && b!= NULL ) {
                if (a->prox == NULL)
                        a->prox = b;
                else
                        concatenarLista(a->prox,b);
        }
        else
        {
                printf("Algum é nulo%s\n");
        }

        return a;
}

void listaImprime (Lista* l){
        Lista* a;
        for (a = l; a != NULL; a = a->prox) {
                printf("%d ", a->valor);
        }
}

void main()
{
        Lista* lst1;
        Lista* lst2;
        lst1 = iniciaLista();
        lst2 = iniciaLista();
        int x;
        for(x=10; x>0; x--) {
                lst1= insereLista(lst1,x);
        }
        listaImprime(lst1);
        printf("\n");
        for(x=20; x>10; x--) {
                lst2= insereLista(lst2,x);
        }
        listaImprime(lst2);
        printf("\n");
        lst1=concatenarLista(lst1,lst2);
        listaImprime(lst1);

}
