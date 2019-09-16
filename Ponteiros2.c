#include <stdio.h>

void test(int k[],int n){
    for(int i=0;i<4;i++)
        *(k+i)=n;
}

int main(void){
    int a,vet[4];
    scanf("%d",&a);
    test(vet,a);


    for(int i=0;i<4;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");

}
