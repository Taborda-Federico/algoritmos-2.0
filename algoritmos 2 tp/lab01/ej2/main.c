/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Maximum allowed length of the array */
#define MAX_SIZE 100000


unsigned int array_from_stdin(int array[],unsigned int max_size) {
    
    
unsigned int total;
printf("\nIngrese un array_size:");
scanf("%u", &total);  

if(total<max_size){
   total = max_size;
}

printf("\nIngrese elementos al arreglo:");
   for(unsigned int i= 0; i <total ; i++)
   {
    scanf("%d", &array[i]);
   
   }
   return total;

}

void array_dump(int a[], unsigned int length) {
    printf("[");
    for (unsigned int i = 0; i < length; i++){
        if (i != 0) {
            printf(" ,");
        }
        printf(" %d", a[i]);
    }
    printf("]\n");
}
  

int main() {
  
   
    
    
    /* create an array of MAX_SIZE elements */
    int array[MAX_SIZE];
    
    /* parse the file to fill the array and obtain the actual length */
    unsigned int length = array_from_stdin(array, MAX_SIZE);
    
    /*dumping the array*/
    array_dump(array, length);
    
    return EXIT_SUCCESS;
}
