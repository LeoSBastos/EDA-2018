#include <stdio.h>
#include <stdlib.h>

void swap (int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int particao (int v[], int menor, int maior){
    int pivo = v[maior];
    int i = menor-1;
    int j;
    for(j=menor;j<=maior-1;j++){
        if(v[j]<=pivo){
            i++;
            swap(&v[i],&v[j]);
        }
    }
    swap(&v[i+1],&v[maior]);
    return (i+1);
}

void quickSort(int v[], int menor, int maior){
    if(menor<maior){
        int ip = particao(v,menor,maior);
        quickSort(v,menor,ip-1);
        quickSort(v,ip+1,maior);
    }
}

void main()
{
    int vet[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(vet)/sizeof(vet[0]);
    quickSort(vet, 0, n-1);
     int i;
    for (i=0; i < n; i++)
        printf("%d ", vet[i]);
}
