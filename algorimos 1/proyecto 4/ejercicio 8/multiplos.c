#include<stdio.h>
#include<stdbool.h>

bool todos_pares(int tam, int a[]){
int i=0;

while(i<tam){
	if(a[i]%2==0){
		return true;
	} 
	  i++;
	      
    }
return false;

}
bool existe_multiplo(int m, int tam, int a[]){


printf("selecione un elemento m:");
scanf("%d", &m);
	

int i=0;	
while(i<tam){
	
		if(a[i]%m==0){
		 return true;
}
i++;	
}
 return false;	
	
	
	
	
}



int main(){
 int tam = 8;

 
 
 	printf("selecione numeros un tama�o del arreglo : ");
 scanf("%d",&tam);
 
 
 int a[tam];
 printf("ingrese los elementos del arreglo");
 
 
 
 int i=0;
 
 while(i<tam){
 	scanf("%d", &a[i] );
 	i++;
 }
 
 
 
 
int opcion;
    printf("Elija la funci�n a ejecutar:\n");
    printf("1. Comprobar si todos los elementos son pares\n");
    printf("2. Comprobar si existe un m�ltiplo de m\n");
scanf("%d", &opcion);


 
 
 
 
 
 
 if (opcion==1){
 	if (todos_pares( tam, a )){
 		printf("Todos los elementos son pares \n");
 		
 	}else{
 		 printf("No todos los elementos del arreglo son pares.\n");
 	}
 }
 
 
 
 
 
 
if(opcion ==2){
int m; 	       
printf("Ingrese un valor para m: ");
        scanf("%d", &m);

        if (existe_multiplo(m, tam, a)) {
            printf("Hay al menos un elemento que es m�ltiplo de %d.\n", m);
        } 
        else {
            printf("No hay ning�n elemento que sea m�ltiplo de %d.\n", m);
        }
		
		
}
		
		
else{
 	printf("opcion no valida.\n");
 }

return 0;

}


