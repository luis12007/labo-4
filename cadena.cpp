#include<iostream>
#include <cstring>


using namespace std;

int main(){
    char palabra[30];
    int a;
    cout << "ingrese su palabra" << endl;
    cin >> palabra;

    cout << endl << "la cantidad es: " << strlen(palabra) << endl;

    a= strlen(palabra);

    a= (a%2);

 if(a == 0){
  cout<<"El numero es par";
 }else
 {
     cout <<"el numero es impar" << endl;
 }
 
 
    return 0;
}