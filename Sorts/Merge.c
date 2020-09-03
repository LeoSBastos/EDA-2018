#include <stdio.h>
#include <stdlib.h>

void merge(int vet[], int inicio, int meio, int fim){
    int com1 = inicio, com2 = meio+1, comAux = 0, tam=fim-inicio+1;
    int* vetAux=(int*)malloc(tam*sizeof(int));

    while(com1 <= meio && com2 <=fim){
        if(vet[com1]< vet[com2]){
            vetAux[comAux] = vet[com1];
            com1++;
        } else {
            vetAux[comAux] = vet[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){
        vetAux[comAux] = vet[com1];
        comAux++;
        com1;;
    }

    while(com2 <= fim){
        vetAux[comAux] = vet[com1];
        comAux;
        com2++;
    }

    for(comAux = inicio; comAux <= fim; comAux++){
        vet[comAux] = vetAux[comAux-inicio];
    }

    free(vetAux);
}
void mergeSort(int vet[],int inicio,int fim){
    if(inicio < fim){
        int meio = (fim+inicio)/2;

        mergeSort(vet,inicio,meio);
        mergeSort(vet,meio+1,fim);
        merge(vet,inicio,meio,fim);
    }
}

void main(){
    int vet[] = {3,5,7,1,2};
    int i;

    mergeSort(vet,0,4);

    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
}
