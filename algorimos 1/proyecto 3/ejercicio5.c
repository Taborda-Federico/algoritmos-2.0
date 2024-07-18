#include<stdio.h>

int i;



int unoH(void){
      printf("Punto 1.h\n");
    printf("selecione un numero:");
    scanf("%d", &i);

    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
    } while (i!=0);
    printf("el valor de i es = %d\n", i);
}
int unoI(void){
      printf("Punto 1.i\n");
    printf("selecione un numero:");
    scanf("%d", &i);
    do
    {
        printf("el valor de i es = %d\n", i);
        i=0;
        printf("el valor de i es = %d\n", i);
        
    } while (i!=0);
    printf("el valor de i es = %d\n", i);
}
//b)


int unoJ(void){
    printf("selecione un numero:");
    scanf("%d", &i);
    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
        
    } while (i<0);
    printf("el valor de i es = %d\n", i);
}
int unoK(void){
    printf("selecione un numero:");
    scanf("%d", &i);
    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
        
    } while (i<=0);
    printf("el valor de i es = %d\n", i);
}
int unoL(void){
  printf("Punto 1.l\n");
    int r;
    printf("selecione un numero:");
    scanf("%d", &r);
    do
    {
    if (r<0)
    {
        printf("el valor de i es = %d\n", r);
        r=r+1;
        printf("el valor de i es = %d\n", r);
    }
    else
    {
        printf("el valor de i es = %d\n", r);
        r=r-1;
        printf("el valor de i es = %d\n", r);
    }
    printf("el valor de i es = %d\n", r);
    } while (r!=0);
    printf("el valor de i es = %d\n", r);
}
int main(){
    unoH();
    unoI();
    unoJ();
    unoK();
    unoL();
}