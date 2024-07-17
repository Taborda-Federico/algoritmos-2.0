#include<iostream>

using namespace std;


int main (){
    int part;
    cin>>part;
    int k;
    cin>>k;
    int contador=0;
    int a[part];
    for(int i = 0; i<part ; i++){
      cin>>a[i];
     
 cout<<" el valor de i:\n"<<a[i] ;

    }
     for(int i = 0; i<part ; i++){

      cout<<"\nvalor contador="<<contador;

      if(a[i]>=a[k-1]&& a[i]>0){
      cout<<"\n compraracion= "<<a[i]<<" valor de k "<<a[k-1];

   

        contador++;
      }
    }

    cout<<contador<<endl;
    return 0;

}