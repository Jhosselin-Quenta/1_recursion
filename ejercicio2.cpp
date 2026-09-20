#include <iostream>
#include <cstdlib>
using namespace std;

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mcd(b, a % b);
}

void simplificar(int &numerador, int &denominador) {
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }

    int divisor = mcd(abs(numerador), denominador);

    if (divisor != 0) {
        numerador /= divisor;
        denominador /= divisor;
    }
}

int main() {
    int numerador, denominador;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador : ";
    cin >> denominador;

    if (denominador == 0) {
        cout << "Error: el denominador no puede ser cero ."
             << endl;
        return 1;
    }

    simplificar(numerador, denominador);

    cout << "la Fraccion simplificada: "
         << numerador << "/" << denominador << endl;

    return 0;
}
