#include<stdio.h>

int pedir_entero(char name){
    int m;
    printf("Almacena un valor en  %c:", name);

    scanf("%d",&m);
    return m;
}
void imprimir_entero(int x){
    
    printf("el valor es = %d \n", x );
}

int main(){
    int h;
    h = pedir_entero('h');
    imprimir_entero(h);
    return 0;
}