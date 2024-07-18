#include<stdio.h>

int x;
int n;
int main(){
    printf("selecione un Ejecicio :");
    scanf("%d",&n);


    if(n==1){
    printf("selecione x :");
    scanf("%d", &x);
    x =5;
    printf("El valor de x = %d",x);
    }
    if (n==2) {
        int y;
        printf("selecione un x e y=");
        scanf("%d %d", &x, &y);
        printf("EL valor de x es \n %d \n el valor de y es %d\n",(x=x+y));
        printf("EL valor de x es  %d el valor de y es %d \n", x ,y);
        printf ("EL vlor de x es \n %d \n el valor de y es %d",(y=y+y));
        printf("EL vlor de x es \n %d \n el valor de y es %d", x ,y);

    }
    
    
    






    return 0;
}