#include<stdio.h>
#include<stdlib.h>

void insertion(int vet[],int tam){
    int i,j,aux;
    for(i=1;i<tam;i++){
        aux=vet[i];

        for(j=i-1;(j>=0) && (aux<vet[j]);j--){
            vet[j+1] = vet[j];
        }
        vet[j+1]=aux;
    }
}

void main(){
    int vet[] = {3,5,7,1,2};
    int i;

    insertion(vet,5);

    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
}
