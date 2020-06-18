#include<iostream>

using namespace std;

int main(){
 
 float numero;
 
 cout<<"Digite un numero: ";
 cin>>numero;  cout<<endl;
 
 if(numero == 0){
  cout<<"El numero es 0";
 }
 else if(numero > 0){
  cout<<"El numero es positivo";
 }
 else{
  cout<<"El numero es negativo";
 }
 cout<<endl;
 
 return 0;
}