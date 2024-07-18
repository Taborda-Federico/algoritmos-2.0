#include <stdbool.h>
#include <assert.h>
#include "fixstring.h"

unsigned int fstring_length(fixstring s)
{
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

bool fstring_eq(fixstring s1, fixstring s2)
{

    int i = 0;
    bool iguales=true;
    while (i < FIXSTRING_MAX &&  (s2[i]!='\0' && s1[i] != '\0')&&iguales)
    {
        iguales =  s1[i] == s2[i];
        i++;
       if ((s1[i]=='\0') != (s2[i]=='\0')){
       iguales = false;
    }
    }

    return iguales;
}

bool fstring_less_eq(fixstring s1, fixstring s2)
{
    unsigned int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < FIXSTRING_MAX)
    {
        i++;
    }
    return s1[i] <= s2[i];
}
