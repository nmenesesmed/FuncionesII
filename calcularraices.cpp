#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
void calcularRaices(double a, double b, double c, complex<double>& raiz1, complex<double>& raiz2, bool& sonReales) {
    double discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante >= 0) {
        sonReales = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        raiz1 = complex<double>(-b, sqrt(-discriminante)) / (2.0 * a);
        raiz2 = complex<double>(-b, -sqrt(-discriminante)) / (2.0 * a);
    }
}

int main() {
    double a, b, c;
    complex<double> raiz1, raiz2;
    bool sonReales;

    cout << "Introduce el coeficiente a: "; cin >> a;
    cout << "Introduce el coeficiente b: "; cin >> b;
    cout << "Introduce el coeficiente c: "; cin >> c;

    calcularRaices(a, b, c, raiz1, raiz2, sonReales);

    if (sonReales) {
        if (raiz1 == raiz2) {
            cout << "Las raices son reales e iguales:" << endl;
            cout << "Raiz: " << raiz1 << endl;
        } else {
            cout << "Las raices son reales y diferentes:" << endl;
            cout << "Raiz 1: " << raiz1 << endl;
            cout << "Raiz 2: " << raiz2 << endl;
        }
    } else {
        cout << "Las raices son complejas y conjugadas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }

    return 0;
}