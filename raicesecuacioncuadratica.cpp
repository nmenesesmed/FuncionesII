#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
int main() {
    double a, b, c;

    cout << "Introduce el coeficiente a: "; cin >> a;
    cout << "Introduce el coeficiente b: "; cin >> b;
    cout << "Introduce el coeficiente c: "; cin >> c;

    double discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante > 0) {
        // Raíces reales y diferentes
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y diferentes:" << endl;
        cout << "Raíz 1: " << raiz1 << endl;
        cout << "Raíz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        // Raíces reales e iguales
        double raiz = -b / (2 * a);
        cout << "Las raices son reales e iguales:" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        // Raíces complejas
        complex<double> raiz1 = complex<double>(-b, sqrt(-discriminante)) / (2.0 * a);
        complex<double> raiz2 = complex<double>(-b, -sqrt(-discriminante)) / (2.0 * a);
        cout << "Las raices son complejas y conjugadas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }

    return 0;
}