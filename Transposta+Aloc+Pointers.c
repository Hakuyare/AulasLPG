#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 3

int main(void){
  int **p,**q;
  int i,j;

  q=calloc(m,sizeof(int *));
  p=calloc(m,sizeof(int *));

  for(i=0;i<n;i++){
    *(p+i)=calloc(n,sizeof(int));
    *(q+i)=calloc(n,sizeof(int));
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",*p+(i*n+j));
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    *(*q+(i*n+j))= *(*p+(j*n+i));
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",*(*q+(i*n+j)));
    }
    printf("\n");
  }
}
