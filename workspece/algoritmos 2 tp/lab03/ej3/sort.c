/*
  @file sort.c
  @brief sort functions implementation
*/

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "helpers.h"
#include "sort.h"
#include "player.h"

bool goes_before(player_t x, player_t y)
{
    return (x.rank <= y.rank);
}

bool array_is_sorted(player_t atp[], unsigned int length)
{
    unsigned int i = 1u;
    while (i < length && goes_before(atp[i - 1u], atp[i]))
    {
        i++;
    }
    return (i == length);
}
void swap(player_t a[], unsigned int i, unsigned int j)
{
    player_t aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

void sort(player_t a[], unsigned int length) {
     for (unsigned int i = 1; i < length; ++i) {
        player_t key = a[i];
        int j = i - 1;

        // Desplazar los elementos mayores hacia la derecha
        while (j >= 0 && goes_before(key, a[j])) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        
        // Insertar el elemento actual en la posición correcta
        a[j + 1] = key;
    }
}

/*
static void insert(player_t a[], unsigned int i) {

    unsigned  int j = i;
    while (j>0 && goes_before(a[j],a[j-1]))

    {
        swap(a,j,j-1);
        j=j-1;
    }


}


*/


/*static unsigned int min_pos_from(player_t a[], unsigned int i, unsigned int length)
{
    unsigned int min_pos = i;
    for (unsigned int j = i + 1; j < length; ++j)
    {

        if (!goes_before(a[min_pos], a[j]))
        {
            min_pos = j;
        }
    }
    return (min_pos);
}






void sort(player_t a[], unsigned int length)
{
    for (unsigned int i = 1u; i < length; ++i) {
        insert(a, i);
    }
}*/
/*static unsigned int partition(player_t a[], unsigned int izq, unsigned int der)
{
      unsigned int i, j;
    unsigned ppiv = izq;
    i = izq + 1;
    j = der;

    while (i <= j)
    {
        if (goes_before(a[i], a[ppiv]))
        {
            i++;
        }
        if (goes_before(a[ppiv], a[j]))
        {
            j--;
        }
        if (!goes_before(a[i],a[ppiv]) && !goes_before(a[ppiv],a[j]))
        {
            swap(a, i, j);
        }
    }

    swap(a, ppiv, j);
    ppiv = j;

    return ppiv;
}

static void quick_sort_rec(player_t a[], unsigned int izq, unsigned int der)
{

    if (der > izq)
    {

        unsigned int pivot = partition(a, izq, der);
         if (pivot != 0u){
         quick_sort_rec(a, izq, pivot - 1);
        quick_sort_rec(a, pivot + 1, der);
         }
    }
}


void sort(player_t a[], unsigned int length)
{
quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
    }*/