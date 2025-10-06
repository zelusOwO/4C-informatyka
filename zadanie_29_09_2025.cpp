#include <iostream>
using namespace std;
 
// Funkcja wyszukiwania binarnego
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
 
    while (left <= right) {
        int mid = (left + right) / 2; // środek tablicy
 
        if (arr[mid] == target) {
            return mid; // znaleziono element, zwracamy jego indeks
        }
        else if (arr[mid] < target) {
            left = mid + 1; // szukamy w prawej części tablicy
        }
        else {
            right = mid - 1; // szukamy w lewej części tablicy
        }
    }
    return -1; // jeśli nie znaleziono
}
 
int main() {
    // posortowana tablica
    int numbers[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(numbers) / sizeof(numbers[0]); // obliczamy długość tablicy
 
    int target;
    cout << "Podaj liczbe do wyszukania: ";
    cin >> target;
 
    int result = binarySearch(numbers, n, target);
 
    if (result != -1) {
        cout << "Znaleziono liczbe " << target << " na indeksie " << result << endl;
    }
    else {
        cout << "Nie znaleziono liczby " << target << " w tablicy." << endl;
    }
 
    return 0;
}