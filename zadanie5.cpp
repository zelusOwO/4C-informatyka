#include <iostream>
#include <string>
 
using namespace std;
 
// Funkcja zamieniająca liczbę dziesiętną na binarną
string decimalToBinary(int number) {
    if (number == 0) {
        return "0";
    }
 
    string binary = "";
 
    while (number > 0) {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
 
    return binary;
}
 
int main() {
    int decimal;
 
    cout << "Podaj liczbe dziesietna: ";
    cin >> decimal;
 
    string result = decimalToBinary(decimal);
 
    cout << "Liczba binarna: " << result << endl;
 
    return 0;
}