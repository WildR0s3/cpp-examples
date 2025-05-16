#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    int liczba;
    vector<int> binary;
    vector<char> hex;
    char hexDig;
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;
    
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int copy = liczba;
    while (copy > 0) {
        int reminder = copy % 2;
        copy /= 2;
        binary.insert(binary.begin(), reminder);
    }
    for (int l : binary) {
        cout << l;
    }
    cout << endl;

    copy = liczba;
    while (copy > 0) {
        int reminder = copy % 16;
        copy /= 16;
        if (reminder > 10) {
            hexDig = reminder - 10 + 'A';
        } else {
            hexDig = reminder + '0';
        }
        hex.insert(hex.begin(), hexDig);
    }

    for (char c: hex) {
        cout << c;
    }
    return 0;
}