#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Ingresar la variable x\n");
    scanf("%d", &x);
    printf("Ingresar la variable y\n");
    scanf("%d", &y);
    printf("Ingresar la variable z\n");
    scanf("%d", &z);

    printf("x + y + 1 = %d\n", x + y + 1);
    printf("z * z + y * 45 - 15 * x = %d \n", z * z + y * 45 - 15 * x);
    printf("y - 2 == (x * 3 + 1) % 5 :%d \n", y - 2 == (x * 3 + 1) % 5);
    printf("y / 2 * x = %d \n", y / 2 * x);
    printf("y < x * z = %d \n", y < x * z);
    return 0;
}
/*
Ingresar la variable x
7
Ingresar la variable y
3
Ingresar la variable z
5
x + y + 1 = 11
z * z + y * 45 - 15 * x = 55
y - 2 == (x * 3 + 1)  = 0
y / 2 * x = 7
y < x * z = 1
*/