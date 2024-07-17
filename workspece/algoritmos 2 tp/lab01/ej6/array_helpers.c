

#include <stdio.h>
#include <stdbool.h>
#include "array_helpers.h"


bool array_is_sorted(int a[], unsigned int length){
    bool r = true;
    for(unsigned int i = 0; i<length-1; i++){
        if(a[i]>a[i+1]){
            r=false;
        }
    }

  return r;  
}
void reverse_array(int a[], unsigned int length) {
    for (unsigned int i = 0; i < length / 2; ++i) {
        array_swap(a, i, length - 1 - i);
    }
}
void array_swap(int a[], unsigned int i, unsigned int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
    


unsigned int array_from_file(int array[], unsigned int max_size, const char *filepath) {
    unsigned int array_size;
    FILE *fp;
    fp = fopen(filepath, "r");
    fscanf(fp,"%u", &array_size);
    if(array_size<=max_size){
        max_size=array_size;
    }

    for(unsigned int i = 0; i<array_size;i++ ){
    fscanf(fp, "%d",&array[i]);
    
    }
    return array_size;

}
void array_dump(int a[], unsigned int length){
      reverse_array(a, length);
    printf("Arreglo invertido:\n[");
                for(unsigned int i = 0; i<length; i++){
                    if(i!=0){
                    printf(",");
                }
                printf("%d", a[i]);

                }   
        printf("]");   

     
}



