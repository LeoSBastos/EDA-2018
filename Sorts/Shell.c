#include <stdio.h>
#include <stdlib.h>

void shellSort(int* v, int tam){
    int i,j,valor,dist=1;
    while (dist<tam){
        dist=3*dist+1;
    }
    while (dist>1){
        dist/=3;
        for(i = dist;i < tam;i++){
            valor = v[i];
            j=i;
            while(j >= dist && valor < v[j - dist]){
                v[j] = v[j-dist];
                j=j-dist;
            }
            v[j]=valor;
        }
    }
}

void main()
{
    int vet[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(vet)/sizeof(vet[0]);
    shellSort(vet,n);
    int i;
    for (i=0; i < n; i++)
        printf("%d ", vet[i]);
}
