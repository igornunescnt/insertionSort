#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int n=0, vetor[6], aux, k;
    printf("\n\n Não Ordenado ~> ");
    for(int i = 0; i < 6; i++){
        vetor[i] = rand() % 20;
        printf(" %d ",vetor[i]);
    }
    
    for(int j=1; j<6;j++){
        aux = vetor[j];
        k=j-1;
        while (k >= 0 && vetor[k] > aux){
            vetor[k+1]=vetor[k];
            k--;
        }
        vetor[k+1] = aux;
    }
    printf("\n\n Ordenado ~~~~~> ");
    for(int i = 0; i < 6; i++){
        printf(" %d ",vetor[i]);
    }
}