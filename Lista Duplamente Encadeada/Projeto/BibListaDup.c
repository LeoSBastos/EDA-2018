#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct venda
{
    int codigo;
    char* nome;
    float valor;
    int qtd;
    struct venda *prox;
    struct venda*ant;
};
typedef struct venda Venda;

typedef struct num{
    float soma;
    int qnt;
} Num;

Venda* lst_cria (Venda* lst)
{

    return NULL;
}

Venda* lst_cadastro (Venda* lst, int codigo, char nome[], float valor, int qtd)
{
    Venda* novo = (Venda*) malloc(sizeof(Venda));
    novo->codigo = codigo;
    novo->nome = (char*)malloc(60);
    novo->nome = nome;
    novo->valor = valor;
    novo->qtd = qtd;
    novo->prox = lst;
    novo->ant = NULL;
    if (lst != NULL)
    {
        lst->ant = novo;
    }
    return novo;
}

Venda* lst_consulta_codigo (Venda* lst,int codigo)
{
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for (a=lst; a!=NULL; a=a->prox)
    {
        if (a->codigo == codigo)
        {
            printf("Codigo encontrado.\n");
            return lst;
        }
        else
        {
            printf("Codigo nao encontrado.\n");
            return lst;
        }
    }
}

Venda* busca_codigo (Venda* lst,int codigo)
{
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for (a=lst; a!=NULL; a=a->prox)
    {
        if (a->codigo == codigo)
        {
            return a;
        }
        else
        {
            return NULL;
        }
    }
}

Venda* lst_consulta_nomeproduto (Venda* lst,char* nome)
{
    int x;
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for (a=lst; a->prox!=NULL; a=a->prox)
    {
        if(a->nome==nome)
        {
            printf("Nome encontrado.\n");
            return lst;
        }
        else
        {
            printf("Nome nao encontrado.\n");
            return lst;
        }
    }
}

void lst_lista(Venda* lst)
{
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for(a = lst; a!=NULL; a= a->prox)
    {
        printf("-----------------\nCodigo: %d\n",a->codigo);
        printf("Nome: ");
        putchar(a->nome);
        printf("\n");
        printf("Valor: %f\n", a->valor);
        printf("Qtd: %d\n-----------------\n",a->qtd);
    }
}

void lst_lista_qntd (Venda* lst,int q)
{
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for(a=lst; a!=NULL; a = a->prox)
    {
        if(a->qtd < q)
        {
            printf("-----------------\nCodigo: %d\n",a->codigo);
            printf("Nome: ");
            putchar(a->nome);
            printf("\n");
            printf("Valor: %f\n", a->valor);
            printf("Qtd: %d\n-----------------\n",a->qtd);
        }

    }
}

Venda* lst_alteracao(Venda* lst, int codigo,char* nome,float valor, int qtd)
{
    Venda* a = (Venda*) malloc(sizeof(Venda));
    for (a=lst; a->codigo == codigo; a=a->prox)
    {
        a->nome = nome;
        a->valor=valor;
        a->qtd=qtd;
        return lst;
    }
    printf("Codigo nao encontrado.\n");
    return lst;
}

Venda* lst_remocao(Venda* lst, int codigo)
{
    Venda* a = busca_codigo(lst,codigo);
    if(a==NULL)
    {
        return lst;
    }
    if(lst==a)
    {
        lst=a->prox;
    }
    else
    {
        a->ant->prox = a->prox;
    }
    if(a->prox != NULL)
    {
        a->prox->ant = a->ant;
    }
    free(a);
    return lst;
}

void lst_venda(Venda* lst){

    Num n;
    n.soma=0;
    n.qnt=0;
    Venda* a = (Venda*) malloc(sizeof(Venda));

    for(a=lst;a!=NULL;a=a->prox){
        n.soma+=a->valor;
        n.qnt+=a->qtd;
    }

    printf("Total: %.2f", n.soma);
    printf("\nQnt Total: %d", n.qnt);
}
