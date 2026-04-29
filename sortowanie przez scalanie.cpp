#include <iostream>
 
using namespace std;
 
// Funkcja scalająca dwie części tablicy
void scal(int tab[], int lewy, int srodek, int prawy) {
    int n1 = srodek - lewy + 1;
    int n2 = prawy - srodek;
 
    int* L = new int[n1];
    int* P = new int[n2];
 
    // kopiowanie danych
    for (int i = 0; i < n1; i++)
        L[i] = tab[lewy + i];
    for (int j = 0; j < n2; j++)
        P[j] = tab[srodek + 1 + j];
 
    int i = 0, j = 0, k = lewy;
 
    // scalanie
    while (i < n1 && j < n2) {
        if (L[i] <= P[j]) {
            tab[k] = L[i];
            i++;
        } else {
            tab[k] = P[j];
            j++;
        }
        k++;
    }
 
    // kopiowanie reszty
    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        tab[k] = P[j];
        j++;
        k++;
    }
 
    delete[] L;
    delete[] P;
}
 
// Funkcja sortująca (Merge Sort)
void mergeSort(int tab[], int lewy, int prawy) {
    if (lewy < prawy) {
        int srodek = lewy + (prawy - lewy) / 2;
 
        mergeSort(tab, lewy, srodek);
        mergeSort(tab, srodek + 1, prawy);
 
        scal(tab, lewy, srodek, prawy);
    }
}
 
// Funkcja do wyświetlania tablicy
void wyswietl(int tab[], int n) {
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}
 
int main() {
    int tab[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(tab) / sizeof(tab[0]);
 
    cout << "Tablica przed sortowaniem:\n";
    wyswietl(tab, n);
 
    mergeSort(tab, 0, n - 1);
 
    cout << "Tablica po sortowaniu:\n";
    wyswietl(tab, n);
 
    return 0;
}