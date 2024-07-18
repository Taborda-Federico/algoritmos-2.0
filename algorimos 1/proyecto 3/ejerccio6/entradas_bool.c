#include <stdio.h>
#include <stdbool.h>

bool pedir_booleano(char name){
    int m;
    printf("almacena un valor en %c (SOLO DE TIPO BOOL): ", name);
    scanf("%d", &m);
    return m;
}
void imprimir_booleano(bool x){

    if (x==0)
    {
        printf("Verdadero\n");
    }else{
        printf("Falso\n");
    }
    
}
int main(){
    bool h;
    h=pedir_booleano('h');
    imprimir_booleano(h);

    return 0;
}