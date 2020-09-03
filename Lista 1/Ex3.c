#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int valor;
    struct lista *prox;
} lista;

typedef struct lista Lista;

Lista *iniciaLista()
{
    return NULL;
}

Lista *insereLista(Lista *l, int v)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->valor = v;
    novo->prox = l;
    return novo;
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

int percorreLista(Lista *l)
{
    Lista *a;
    int i = 0;
    for (a = l; a != NULL; a = a->prox)
    {
        i++;
    }
    return i;
}

Lista *copiaLista(Lista *luisa)
{
    Lista *choro = (Lista *)malloc(sizeof(Lista));
    choro = iniciaLista();
    Lista *p = luisa;
    int i;
    for (i = 0; i < percorreLista(luisa); i++)
    {
        choro = insereFinal(choro, p->valor);
        p = p->prox;
    }
    return choro;
}
void listaImprime(Lista *l)
{
    Lista *a;
    for (a = l; a != NULL; a = a->prox)
    {
        printf("%d ", a->valor);
    }
}

void main()
{
    Lista *lst;
    Lista *copy;
    lst = iniciaLista();
    int x;
    for (x = 10; x > 0; x--)
    {
        lst = insereLista(lst, x);
    }
    copy = copiaLista(lst);
    listaImprime(copy);
}
