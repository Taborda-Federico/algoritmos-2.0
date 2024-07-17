#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a[6][6];

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    int col, fila;

    for (int i = 1; i <= 5; i++){
    
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                fila = i;
                col = j;
            }
        }

        int contador = abs(col - 3) + abs(fila - 3);
        cout << contador << endl;

        return 0;
    }
}  
