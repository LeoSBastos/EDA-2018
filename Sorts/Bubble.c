#include<stdio.h>
#include<stdlib.h>

void bubble(int vet[],int tam){
    int i,j,t;

    for(i=1;i<tam;i++){
        for(j=0;j<tam-i;j++){
            if(vet[j]>vet[j+1]){
                t=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=t;
            }
        }
    }

}
void main(){
    int vet[] = {3,5,7,1,2};
    int i;

    bubble(vet,5);

    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
}

