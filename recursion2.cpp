#include <iostream>
using namespace std;

int suma(int arreglo[], int n) {
    if (n == 0) {
        return 0;
    }

    return arreglo[n - 1] + suma(arreglo, n - 1);
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }
    cout << "La suma es: "
         << suma(arreglo, n) << endl;
    return 0;
}
