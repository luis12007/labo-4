#include <iostream>
#include<cstdlib>
#include <cstdio>
using namespace std;

int main(){
 
 int numero;
 
 cout<<"Digite un numero: ";
 cin>>numero;  cout<<endl;
 
numero= (numero%2);

 if(numero == 0){
  cout<<"El numero es par";
 }else
 {
     cout <<"el numero es impar" << endl;
 }
 
 return 0;
}