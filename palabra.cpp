#include <iostream>
#include <cstring>

using namespace std;

int main(){
char palabra[30];

    int a;
    cout << "ingrese su palabra" << endl;
    cin >> palabra;
    a= strlen(palabra)-1;

    cout << endl << "la primera letra es: " << palabra[0]  << endl <<" y la ultima es: " << palabra[a] << endl;


if (palabra[0] == palabra[a])
{
    cout <<"las dos son iguales" <<endl;
}else
{
    cout <<"no son iguales" <<endl;
}



return 0;
}
