#include <iostream>
#include <cstdlib>
using namespace std;
void mostrarEleccion(int eleccion) {
    if (eleccion == 0) cout << "Piedra";
    else if (eleccion == 1) cout << "Papel";
    else cout << "Tijeras";
}

int main() {
    int usuario, computadora;
    int puntuacionUsuario = 0, puntuacionComputadora = 0;
    const int rondasParaGanar = 3;

    cout << "Bienvenido al juego de Piedra, Papel o Tijeras." << endl;

    while (puntuacionUsuario < rondasParaGanar && puntuacionComputadora < rondasParaGanar) {
        cout << "\nElige tu jugada (0: Piedra, 1: Papel, 2: Tijeras): "; cin >> usuario;

        if (usuario < 0 || usuario > 2) {
            cout << "Opcion invalida. Intenta de nuevo." << endl;
            continue;
        }

        computadora = rand() % 3;

        cout << "Tu elegiste: ";
        mostrarEleccion(usuario);
        cout << "\nLa computadora eligio: ";
        mostrarEleccion(computadora);
        cout << endl;

        if (usuario == computadora) {
            cout << "Es un empate." << endl;
        } else if ((usuario == 0 && computadora == 2) ||
                   (usuario == 1 && computadora == 0) ||
                   (usuario == 2 && computadora == 1)) {
                 cout << "Ganas esta ronda." << endl;
            puntuacionUsuario++;
        } else {
            cout << "La computadora gana esta ronda." << endl;
            puntuacionComputadora++;
        }

        cout << "Puntuacion - Tu: " << puntuacionUsuario << " Computadora: " << puntuacionComputadora << endl;
    }

    if (puntuacionUsuario == rondasParaGanar) {
        cout << "\n¡Felicidades! Ganaste el juego." << endl;
    } else {
        cout << "\nLa computadora gana el juego. Mejor suerte la proxima vez." << endl;
    }

    return 0;
}