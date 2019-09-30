#include <stdio.h>
#include <stdlib.h>


int soma(int *k[],int *w[],int n,int m,int *a[]){
    if(n!=m)
        return 0;
    else{
        for(int i=0;i<m;i++)
            *(a+i)=(k+i) + (w+i);
        }
}



int main(void){
    int *v1,*v2,*array;
    int tam1,tam2;

    printf("TAMANHO DO 1 VET:\n");
    scanf("%d",&tam1);
    printf("TAMANHO DO 2 VET:\n");
    scanf("%d",&tam2);

    v1=calloc(tam1,sizeof(int));
    v2=calloc(tam2,sizeof(int));
    array=calloc(tam1,sizeof(int));
    printf("Valores do 1o Vet:\n");
    for(int i=0;i<tam1;i++)
        scanf("%d",(v1+i));

    printf("Valores do 2o Vet:\n");
    for(int i=0;i<tam2;i++)
        scanf("%d",(v2+i));

    soma(&v1,&v2,tam1,tam2,&array);


    printf("SOMA DOS VETORES:\n");
    for(int i=0;i<tam2;i++)
        printf("%d ",*(array+i));
    printf("\n");

    free(v1);
    free(v2);
    free(array);
    return 0;

    }
