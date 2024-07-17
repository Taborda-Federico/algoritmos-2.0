#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
 
if (x>=0)
  {
    *y=x;


  }else{

    *y=-x;
  }

  
}

int main(void) {
    int a=0, res=0;  
    a=-10;
    int *p;
    printf("%d \n", res);
    p=&res;
    //apunto al lugar donde esta res
    absolute(a, p);
    //en absolute *p=x 0 *p=-x entoces al lugar de memora asignado por res se lo cambia por x o -x
    printf("%d \n", res);

    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

/*¿El parámetro int *y de absolute() es de tipo in, de tipo out o de tipo in/out?
El parametro *y es de tipo in/out Porque lo lee y lo cambia dependiendo de lo que suceda en el if*/


/*
● ¿Qué tipo de parámetros tiene disponibles C para sus funciones?
○ Parámetros in
○ Parámetros out
○ Parámetros in/out




*/