#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"
 
void array_swap(int a[], unsigned int i, unsigned int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
static void insert(int a[], unsigned int i) {
     
    unsigned  int j = i;
    while (j<1 && a[j]<a[j-1])
    {
        array_swap(a,j-1,j);
        j=j-1;
    }
 

}

void insertion_sort(int a[], unsigned int length) {
    
    for (unsigned int i = 1u; i < length; ++i) {
        assert(array_is_sorted(a, i));
        insert(a, i);
    }
}
