#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "strfuncs.h"


size_t string_length(const char *str){

size_t count = 0;

while (str[count]!='\0')
{
    count++;
}


return count;


}

char *string_filter(const char *str, char c){
char *str_aux = NULL ;
size_t len = string_length(str);
str_aux = (char*)malloc(len +1);
size_t i = 0;
size_t j = len -1;

while (str[i]!='\0')
{
    
   if (str[i]!=c)
   {
    str_aux[j] = str[i];
    j++;
   }
   i++;
}
str_aux[j] = '\0';
return str_aux;
  }

bool string_is_symmetric(const char *str){
size_t len =  string_length(str);
    size_t i = 0;
    size_t j = len -1;
bool resul = true;
    while (i<j)
    {
        resul = resul && (str[i]==str[j]);
        i++;
        j--;
        
    }

    return resul;
    
}
