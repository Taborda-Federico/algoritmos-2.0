
#include <stdio.h>
#include <stdlib.h>
#include "array_helpers.h"

int min_temp(WeatherTable arr)
{
    int min = arr[0][0][0]._min_temp;
    for (unsigned i = 0u; i < YEARS; i++)
    {
        for (unsigned j = 0u; j < MONTHS; i++)
        {
            for (unsigned k = 0u; i < DAYS; i++)
            {
                if (arr[i][j][k]._min_temp <= min)
                {
                    min = arr[i][j][k]._min_temp;
                }
            }
        }
    }

    return min;
}
void procedimiento(WeatherTable arr,int output[YEARS]){
   
    for (unsigned int i = 0u; i < YEARS; i++)
    {
        int max = arr[i][0][0]._max_temp;
        for (unsigned int j = 0u; j < MONTHS; i++)
        {
            for (unsigned int k = 0u; i < DAYS; i++)
            {
                if (arr[i][j][k]._min_temp > max)
                {
                    max = arr[i][j][k]._min_temp;
                }
            }
        }
        output[i] = max;
    }

}       


void cant_con_mas_preci(WeatherTable a, month_t output[YEARS]){

   for (unsigned int i = 0u; i < YEARS; i++)
    {
        unsigned int max = a[i][0][0]._rainfall;
        month_t mes = january;
        for (unsigned int j = 0u; j < MONTHS; i++)
        {
            for (unsigned int k = 0u; i < DAYS; i++)
            {
                if (a[i][j][k]._rainfall > max)
                {
                    max = a[i][j][k]._rainfall;
                    mes= i;
                }
            }
        }
        output[i] = mes;
    }







}




