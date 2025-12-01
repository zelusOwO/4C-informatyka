#include <iostream>
// Funkcja wykonująca szybkie potęgowanie iteracyjne
// Zwraca wynik a^b dla liczb całkowitych (dla dużych b działa bardzo wydajnie)
long long fast_power(long long a, long long b) {
    long long result = 1; // wynik początkowy (a^0 = 1)
    while (b > 0) { // dopóki wykładnik > 0
        if (b % 2 == 1) {    // jeśli b jest nieparzyste
            result *= a;     // pomnóż wynik przez aktualne 'a'
        }
        a *= a;              // podnieś a do kwadratu (a = a^2)
        b /= 2;              // podziel wykładnik przez 2 (przesuwamy bity)
    }
    return result; // zwróć końcowy wynik
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a, b;
    std::cout << "Podaj podstawe (a): ";
    std::cin >> a;
    std::cout << "Podaj wykladnik (b): ";
    std::cin >> b;
    long long wynik = fast_power(a, b);
    std::cout << a << "^" << b << " = " << wynik << "\n";
    return 0;
}