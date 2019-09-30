#include <stdio.h>
#include <stdlib.h>
#define n 5

int negativos(float **vet){
    int count=0;
    for(int i=0;i<n;i++){
        if(*(*vet+i)<0)
            count++;
    }

    printf("%d\n",count);
}

int main(void){
    float *p;

    p=calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%f",(p+i));

    negativos(&p);


    return 0;
}
