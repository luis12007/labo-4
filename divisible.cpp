#include <iostream>

using namespace std;

int main(){
    float a, b ,resp;

    cout<< "ingrese el primer numero" << endl;
    cin >> a;

    cout<< "ingrese el divisor numero" << endl;
    cin >> b;

    resp=a/b;

    if (a/b>0)
    {
        cout << "respuesta: " <<resp<< endl;
        cout << "es divisible" << endl;

    }else
    {
        cout << "respuesta: " <<resp<< endl;
        cout << "no es divisible" << endl;
    }
    
    



}