#include <cmath>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;



void funkcja() {
    int count = 0;
    int suma = 0;
    int iloczyn = 1;
    int liczba;
    while (true) {
        cout << "Podaj liczby: ";
        cin >> liczba;
        if (liczba == 0) {
            break;
        }
        suma = suma + liczba;
        iloczyn = iloczyn * liczba;
        count++;
    }
    cout << "Iloczyn: " << iloczyn << ", Suma: " << suma << endl;
    cout << (count % 2 == 0);
    
}

int main() {
    funkcja();

    return 0;
}
