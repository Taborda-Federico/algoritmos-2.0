#include <stdio.h>
#include <stdbool.h>
b
bool esprimo(int num) {
if (num <= 1) {
        return false;
    }
int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
     i++;
	}

    return true;
}


int nesimo_primo(int N){
if (N <= 0) {
        printf("Error: Debe ingresar un n�mero positivo.\n");
        return -1;
    }
int contador = 0;
int num=2;
while(contador<N){

	

	if(esprimo){
		contador++;
	}
	num++;
}
return num-1;


}
int main(){

    int n;
    printf("Ingrese un n�mero positivo para encontrar el n-�simo primo: ");
    scanf("%d", &n);

    int resultado = nesimo_primo(n);

    if (resultado != -1) {
        printf("El %d-�simo numero primo es: %d\n", n, resultado);
    }

    return 0;
}

