#include <stdio.h>
#include <stdlib.h>
#define n 5

int main(void){
    int *pi,aux;

    pi=(int*)calloc(n,sizeof(int));

    aux=*pi;
    for(int i=0;i<n;i++)
        scanf("%d",(pi+i));


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(pi+i)<*(pi+j)){
                aux=*(pi+i);
                *(pi+i)=*(pi+j);
                *(pi+j)=aux;
            }
        }

    }
    for(int i=0;i<n;i++)
        printf("%d ",*(pi+i));

    printf("\n");

}
