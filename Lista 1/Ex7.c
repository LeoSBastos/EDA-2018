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

int percorreIgual(Lista* l1, Lista* l2){
        Lista* a1 = l1;
        Lista* a2 = l2;

        while (a1!=NULL&&a2!=NULL) {

                if(a1->valor != a2->valor) {
                        return 0;
                }
                else{
                        a1=a1->prox;
                        a2=a2->prox;
                }

        }
        if((a1!=a2)) {
                return 0;
        } else return 1;
}



int main(int argc, char const *argv[]) {
        Lista* l;
        Lista* r;
        int i;
        l = instancia_lista();
        r = instancia_lista();
        for (i = 0; i < 10; i++) {
                l = insere_lista(l,i+1);
        }
        for (i = 0; i < 10; i++) {
                r = insere_lista(r,i+1);
        }
        printf("%d\n", percorreIgual(l,r));
        for (i = 10; i > 0; i--) {
                r = insere_lista(r,i);
        }
        printf("%d\n",percorreIgual(l,r));
        return 0;
}
