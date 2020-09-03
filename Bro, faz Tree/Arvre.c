#include <stdio.h>
#include <stdlib.h>

struct arv
{
    int info;
    struct arv* esq;
    struct arv* dir;
};

typedef struct arv Arv;

Arv* arv_criavazia (){
    return NULL;
}

int arv_vazia (Arv* a){
    return a==NULL;
}

Arv* arv_busca (Arv* a, int valor){
    Arv* aux;
    Arv* ref = a;

    if(!arv_vazia(ref)){

        else if(valor>ref->info){
            aux = arv_busca(ref->dir,valor);
       } else{
            aux = arv_busca(ref->esq,valor);
       }
    }
    else {
        aux = ref1;
    }
    return aux;
}

Arv* arv_insere (Arv* a,int valor){
    Arv* index = arv_busca(a,valor);
    Arv* novo = (Arv*)malloc(sizeof(Arv));
    if (valor>index->info){
        index->dir=novo;

    } else {
        index->esq=novo;
    }
    novo->esq = novo->dir = NULL;
    novo->info = valor;
    return a;
}

Arv* arv_libera (Arv* a){
    if(!arv_vazia(a)){
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}

int arv_pertence (Arv* a, int c){
    if(arv_vazia(a)){
        return 0;
    } else {
        return a->info==c || arv_pertence(a->esq,c) || arv_pertence(a->dir,c);
    }
}

void arvoreImprimePre(Arv* a){
    if(!arv_vazia(a)){
        printf("%c", a->info);
        arvoreImprimePre(a->esq);
        arvoreImprimePre(a->dir);
    }
}

void arvoreImprimeIn(Arv* a){
    if(!arv_vazia(a)){
        arvoreImprimeIn(a->esq);
        printf("%c", a->info);
        arvoreImprimeIn(a->dir);
    }
}

void arvoreImprimePos(Arv* a){
    if(!arv_vazia(a)){
        arvoreImprimePos(a->esq);
        arvoreImprimePos(a->dir);
        printf("%c", a->info);
    }
}

void main()
{
    Arv* arv = arv_criavazia();
    arv = arv_insere(arv, 10);
    arv = arv_insere(arv,15);
    arv = arv_insere(arv,5);
    arv = arv_insere(arv,3);
    arvoreImprimeIn(arv);
}
