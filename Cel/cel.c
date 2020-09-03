#include <stdio.h>
#include <stdlib.h>

struct cel
{

    int info;
    struct cel *prox;
};

typedef struct cel Celula;

Celula *cel_cria()
{
    return NULL;
}

Celula *busca_ultimo(Celula *cel)
{
    Celula *a = cel;
    while (a->prox != NULL)
    {
        a = a->prox;
    }
    return a;
}

Celula *cel_insere(Celula *cel, int info)
{
    Celula *novo = (Celula *)malloc(sizeof(Celula));
    novo->info = info;
    novo->prox = NULL;
    if (cel != NULL)
    {
        Celula *p = busca_ultimo(cel);
        p->prox = novo;
        return cel;
    }
    else
    {
        cel = novo;
        return cel;
    }
}

Lista *copiaLista(Lista *l, int *v, int i)
{
    Lista *p = l;
    for (i; i > 0; i--)
    {
        l = insereLista(l, v[i]);
        printf("%d\n", p->valor);
        p = p->prox;
    }
    return l;
}

void cel_imprime(Celula *cel)
{
    Celula *p;
    for (p = cel; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

int cel_vazia(Celula *cel)
{
    return (cel == NULL);
}

Celula *busca(Celula *cel, int v)
{
    Celula *p;
    for (p = cel; p != NULL; p = p->prox)
    {
        if (p->info == v)
            printf("Tem aqui seu bosta!");
        return p
    }
    printf("Não tem aqui seu bosta!") return NULL;
}

Celula *cel_retira(Celula *cel, int info)
{
    Celula *a = NULL;
    Celula *p = cel;
    while (p != NULL && p->info != info)
    {
        a = p;
        p = p->prox;
    }
    if (p == NULL)
        return cel;
    if (a == NULL)
    {
        cel = p->prox;
    }
    else
    {
        a->prox = p->prox;
    }
    free(p);
    return cel;
}

void cel_libera(Celula *cel)
{
    Celula *p = cel;
    while (p != NULL)
    {
        Celula *t = p->prox;
        free(p);
        p = t;
    }
}

Celula *cel_insere_ordenado(Celula *cel, int info)
{
    Celula *novo = (Celula *)malloc(sizeof(Celula));
    Celula *a = NULL;
    Celula *p = cel;

    while (p != NULL && p->info < info)
    {
        a = p;
        p = p->prox;
    }

    novo->info = info;

    if (a == NULL)
    {
        novo->prox = cel;
        cel = novo;
    }
    else
    {
        novo->prox = a->prox;
        a->prox = novo;
    }
    return cel;
}
