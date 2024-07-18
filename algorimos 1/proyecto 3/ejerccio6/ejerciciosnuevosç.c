#include <stdio.h>
#include <stdbool.h>


/*
#include <stdio.h>
int main(void)
{
    int x, y, z;
    printf("Ingresar la variable x\n");
    scanf("%d", &x);
    printf("Ingresar la variable y\n");
    scanf("%d", &y);
    printf("Ingresar la variable z\n");
    scanf("%d", &z);

    printf("x + y + 1 = %d\n", x + y + 1);
    printf("z * z + y * 45 - 15 * x = %d \n", z * z + y * 45 - 15 * x);
    printf("y - 2 == (x * 3 + 1) % 5 = %d \n", y - 2 == (x * 3 + 1) % 5);
    printf("y / 2 * x = %d \n", y / 2 * x);
    printf("y < x * z = %d \n", y < x * z);
    return 0;
}

/*
Ingresar la variable x
7
Ingresar la variable y
3
Ingresar la variable z
5
x + y + 1 = 11
z * z + y * 45 - 15 * x = 55
y - 2 == (x * 3 + 1)  = 0
y / 2 * x = 7
y < x * z = 1


nuevo --

int pedir_entero(char name){
    int m;
    
    
    printf("Almacena un valor en  %c:", name);
    scanf("%d ",&m );
    return m;
}



int main () {
    int y;
    int x;
    int z;
    x= pedir_entero('x');
    y = pedir_entero2 ('y');
    z = pedir_entero2 ('z');

    printf("x + y + 1 = %d\n", x + y + 1);
    printf("z * z + y * 45 - 15 * x = %d \n", z * z + y * 45 - 15 * x);
    printf("y - 2 == (x * 3 + 1) % 5 = %d \n", y - 2 == (x * 3 + 1) % 5);
    printf("y / 2 * x = %d \n", y / 2 * x);
    printf("y < x * z = %d \n", y < x * z);
    return 0;

    

}
*/
/*
int pedir_entero(char name){
    int m;
    printf("Almacena un valor en  %c: \n", name);
    scanf("%d ",&m );
    return m;
}
bool pedir_booleano(char name){
    int m;
    printf("almacena un valor en %c (SOLO DE TIPO BOOL): ", name);
    scanf("%d", &m);
    return m;
}


int main(){

    int x,y,z,b,w;
    x= pedir_entero('x');
    y = pedir_entero ('y');
    z = pedir_entero ('z');
    b = pedir_booleano('b');
    w= pedir_booleano('w');

        printf ( "el valor de x=%d \n", x);
        printf("el resultado es =  %d\n", x%4==0);
        printf ( "el valor de x=%d\n", x);
        printf ( "el valor de x=%d \n", x);
        printf("el resultado es =  %d \n", x+y==0&&y-x==(-1)*z);
        printf ( "el valor de x=%d\n ", x);

        printf ( "el valor de x=%d \n", x);
        printf("el resultado es %d\n", !b&&w );

}*/
/*
ejrcioco 3
int pedir_entero(char name){
    int m;
    printf("Almacena un valor en  %c: \n", name);
    scanf("%d ",&m );
    return m;
}

int main (){
    int x,y;
    x= pedir_entero('x');
    y = pedir_entero ('y');


    x =5;
    printf("El valor de x = %d el valor de y = %d",x, y);
    printf(x=x+y);
    printf("EL vlor de x es \n %d \n el valor de y es %d", x ,y);
    printf (y=y+y);
    printf("EL vlor de x es \n %d \n el valor de y es %d", x ,y);
}*/
/*
int pedir_entero(char name){
    int m;
    printf("Almacena un valor en  %c: \n", name);
    scanf("%d ",&m );
    return m;
}
int main(){
    int y;
    int x;
    
    x= pedir_entero('x');
    y = pedir_entero ('y');
    


    
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
return 0;
}
*/


/*
int pedir_entero(char name){
    int m;
    printf("Almacena un valor en  %c: \n", name);
    scanf("%d ",&m );
    return m;
}
int main (){
    int i;
    i = pedir_entero('x');
   


    printf("Punto 1.h\n");
    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
    } while (i!=0);
    printf("el valor de i es = %d\n", i);

  printf("Punto 1.i\n");
    do
    {
        printf("el valor de i es = %d\n", i);
        i=0;
        printf("el valor de i es = %d\n", i);
        
    } while (i!=0);
      printf("el valor de i es = %d\n", i);

 printf("Punto 1.i\n");
    do
    {
        printf("el valor de i es = %d\n", i);
        i=0;
        printf("el valor de i es = %d\n", i);
        
    } while (i!=0);
    printf("el valor de i es = %d\n", i);


printf("ejercicio J");
    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
        
    } while (i<0);
    printf("el valor de i es = %d\n", i);



    printf("ejercicio k");
    scanf("%d", &i);
    do
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
        
    } while (i<=0);
    printf("el valor de i es = %d\n", i);



      printf("Punto 1.l\n");

    {
    if (i<0)
    {
        printf("el valor de i es = %d\n", i);
        i=i+1;
        printf("el valor de i es = %d\n", i);
    }
    else
    {
        printf("el valor de i es = %d\n", i);
        i=i-1;
        printf("el valor de i es = %d\n", i);
    }
    printf("el valor de i es = %d\n", i);
    } while (i!=0);
    printf("el valor de i es = %d\n", i);

}
*/


