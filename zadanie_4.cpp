#include <iostream>
#include <vector>
using namespace std;
 
// Funkcja wykonująca rozkład liczby n na czynniki pierwsze.
// Zwraca wektor wszystkich znalezionych czynników.
vector<int> factorize(int n) {
    vector<int> factors;
 
    // Najpierw dzielimy przez 2, dopóki się da
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
 
    // Następnie sprawdzamy liczby nieparzyste od 3 do sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
 
    // Jeśli po wszystkich podziałach n > 1, to n jest liczbą pierwszą
    if (n > 1) {
        factors.push_back(n);
    }
 
    return factors;
}
 
int main() {
    int n;
    cout << "Podaj liczbe do rozkladu na czynniki pierwsze: ";
    cin >> n;
 
    if (n <= 1) {
        cout << "Liczba musi byc wieksza od 1.\n";
        return 0;
    }
 
    vector<int> result = factorize(n);
 
    cout << "Czynniki pierwsze liczby " << n << ": ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
 
    return 0;
}