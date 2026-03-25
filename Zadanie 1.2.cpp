#include <iostream>
using namespace std;
 
// Funkcja realizująca schemat Hornera
double horner(int n, double a[], double x) {
    double wynik = a[0];  // zaczynamy od najwyższego współczynnika
 
    for(int i = 1; i <= n; i++) {
        wynik = wynik * x + a[i];
    }
 
    return wynik;
}
 
int main() {
    int stopien;
    
    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;
 
    double wspolczynniki[100];
 
    cout << "Podaj wspolczynniki od najwyzszej potegi do wyrazu wolnego:\n";
    for(int i = 0; i <= stopien; i++) {
        cin >> wspolczynniki[i];
    }
 
    double x;
    cout << "Podaj wartosc x: ";
    cin >> x;
 
    // Wywołanie funkcji
    double wynik = horner(stopien, wspolczynniki, x);
 
    // Prezentacja wyniku
    cout << "Wartosc wielomianu dla x = " << x << " wynosi: " << wynik << endl;
 
    return 0;
}
 