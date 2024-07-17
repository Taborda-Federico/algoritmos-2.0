#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

static unsigned int partition(int a[], unsigned int izq, unsigned int der)
{
    unsigned int ppiv, i, j;
    ppiv = izq;
    i = izq + 1;
    j = der;
    while (i <= j)
    {

        if (a[i] <= a[ppiv])
        {

            i++;
        }
        if (a[j] >= a[ppiv])
        {
            j = j - 1;
        }
        if (a[i] > a[ppiv] && a[j] < a[ppiv])
        {
            swap(a, i, j);
        }
    }
    swap(a, ppiv, j);
    ppiv = j;
    return ppiv;
}

static void quick_sort_rec(int a[], unsigned int izq, unsigned int der)
{

    if (der > izq)
    {

        unsigned int pivot = partition(a, izq, der);
         (pivot != 0u)
        if quick_sort_rec(a, izq, pivot - 1);
        quick_sort_rec(a, pivot + 1, der);
    }
}

void quick_sort(int a[], unsigned int length)
{
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}
