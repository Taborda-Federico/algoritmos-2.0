#include<stdio.h>
int w;
int b;
int y;
int x;
int z;
int mai(void){
    int n;
    printf("selecione un numero de funcion:");
    scanf("%d",&n);



    if(n==1){
        printf("selecione un x: ");
        scanf("%d ",  &x);
        printf("el resultado es =  %d", x%4==0);
        }

    if(n==2){
        printf("selecione un x,y,z: ");
        scanf("%d %d %d",  &x,&y,z);
        printf("el resultado es =  %d", x+y==0&&y-x==(-1)*z);
            
            
            
                
    }
    if (n==3)
    {
        printf("ingrese el valor de b,w:");
        scanf("%d %d", &b,&w);
        pintf("el resultado es %d", !b&&w );
    }
    
                






    return 0;


}