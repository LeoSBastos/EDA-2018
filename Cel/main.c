#include<stdio.h>
#include<stdlib.h>

void main()
{
    Celula* cel = cel_cria();
    cel = cel_insere(cel,1);
    cel = cel_insere(cel,2);
    cel = cel_insere(cel,3);
    cel = cel_insere_ordenado(cel, 5);
    cel = cel_insere_ordenado(cel,4);
    cel_imprime(cel);
    cel = cel_retira(cel, 3);
    cel_imprime(cel);
}
