#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int cantidad, maximo;

    cout << "Introduce la cantidad de numeros aleatorios: ";
    cin >> cantidad;

    cout << "Introduce el valor maximo permitido: ";
    cin >> maximo;

    // Inicializa la semilla con un valor fijo
    srand(42);

    cout << "Numeros aleatorios generados:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        int num = rand() % (maximo + 1);
        cout << num << " ";
    }

    cout << endl;
    return 0;
}