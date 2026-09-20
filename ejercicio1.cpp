#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main() {
    int a, b;
  
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "\nAntes del intercambio:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    intercambiar(&a, &b);

    cout << "\nDespues del intercambio:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
