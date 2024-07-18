#include<stdio.h>




int unoE(){
   
   

    printf("Punto 1.e\n");
int x, y;
    printf("ingrese x e y :");
    scanf("%d %d", &x, &y);
    

     if (x>=y)
     {
        x=0;
        printf("el valor de x = %d", x);
     }
     if (x<=y)
     {
        x=2;
        printf("el valor de x = %d", x);
     }
return 0;
}

int unoF(){
   printf("Punto 1.f \n");
    int z, p;
    printf("ingrese z e p :");
    scanf("%d %d", &z, &p);

     if (z>=p)
     {
        z=0;
         printf("EL vlor de p es \n %d \n el valor de p es %d", z ,p);
     }
     if (z<=p)
     {
         z=2;
         printf("EL vlor de z es \n %d \n el valor de p es %d", z,p);
     }
}

int unoG(){
   printf("punto 1.g\n");
int y;
int x;
printf("ingrese un valor x e y:");
scanf("%d %d", &x, &y);
printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);

if (x<=y)
{
   printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);
   x=0;
   printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);

}
else
{
   printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);
   x=2;
   printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);
}
printf("EL vlor de x es \n %d \n el valor de y es %d \n", x,y);

}


int main(void){
   unoE();
   unoF();
   unoG();
}


