#include <stdio.h>

void test(int *pa,int *pb){
    int aux;
        if(*pb>*pa){
            aux=*pa;
            *pa=*pb;
            *pb=aux;
        }
}

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("A=%d\nB=%d\n",a,b);
    test(&a,&b);
    printf("Verificando...\n");

    printf("A=%d\nB=%d\n",a,b);
}
