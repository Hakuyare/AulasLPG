#include <stdio.h>

void test(int k[],int n,int *pmaior,int *pvezes){
    int aux=0;
    int vezes=0;
    for(int i=0;i<n;i++){
        if (aux<*(k+i)){
            aux=*(k+i);
        }
    }
    *pmaior=aux;

    for(int i=0;i<n;i++){
        if (*(k+i)==aux)
            vezes++;
    }
    *pvezes=vezes;
}

int main(void){
    int n,maior,vezes;
    scanf("%d",&n);
    int vet[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }

    test(vet,n,&maior,&vezes);

    printf("Maior valor:%d\nQuantas vezes:%d\n",maior,vezes);
}
