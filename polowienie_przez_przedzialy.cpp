#include <iostream>
#include <cmath>
 
using namespace std;
 
// Funkcja, której miejsce zerowe szukamy
double f(double x) {
    return x * x * x - x - 2;
}
 
// Metoda bisekcji
double bisekcja(double a, double b, double epsilon) {
    double c;
 
    if (f(a) * f(b) >= 0) {
        cout << "Brak zmiany znaku w przedziale!" << endl;
        return NAN;
    }
 
    while ((b - a) >= epsilon) {
        c = (a + b) / 2;
 
        if (f(c) == 0.0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
 
    return (a + b) / 2;
}
 
int main() {
    double a = 1;
    double b = 2;
    double epsilon = 0.0001;
 
    double wynik = bisekcja(a, b, epsilon);
 
    cout << "Przybliżone miejsce zerowe: " << wynik << endl;
 
    return 0;
}