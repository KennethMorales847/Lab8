
#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main()
{
    bool op;
    int a,b;
    do {
        cout << "Ingresa el n�mero a: "; cin >> a;
        cout << "Ingresa el n�mero b: "; cin >> b;
        if (a == b) {
            cout << "a y b son iguales" << endl;
        }
        else {
            cout << "a y b son diferentes" << endl;
        }
        cout << "La suma de los numeros es: " << suma(a, b) << endl;
        cout << "seguir?";cin >> op;
    } while (op != 0);


    return 0;
}
