
#include<iostream>

using namespace std;

int main(){

    long long n, m, a;
    cin >> n >> m >> a; 

  
    long long filas = (n + a - 1) / a; 
    long long columnas = (m + a - 1) / a; 

 
    long long total = filas * columnas;

    cout << total << endl; 

    return 0;
}