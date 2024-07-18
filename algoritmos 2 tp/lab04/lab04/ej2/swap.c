#include <stdlib.h>
#include <stdio.h>

void sawp(int *a, int *b){
int *aux;

*aux=*a;
*a=*b;
*b=*aux;


}

int  main(){
    int x,y;
    int *p,*q;
    x=6;
    q=&x;
    y=4;
    p=&y;
    printf("x=%d\nxy=%d\n", x,y);
    sawp(p,q);
      printf("x=%d\ny=%d\n", x,y);
 }
