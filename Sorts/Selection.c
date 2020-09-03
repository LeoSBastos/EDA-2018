#include<stdio.h>
#include<stdlib.h>

void selection(int vet[], int tam){
    int i, j, min, aux;
    for(i=0;i<tam-1; i++){
        min=i;
        for(j=(i+1);j<tam;j++){
            if(vet[j]<vet[min]){
                min=j;
            }
        }

        if (vet[i] != vet[min]){
            aux=vet[i];
            vet[i]=vet[min];
            vet[min]=aux;
        }
    }
}
void main(){
    int vet[] = {3,5,7,1,2};
    int i;

    selection(vet,5);

    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
}
