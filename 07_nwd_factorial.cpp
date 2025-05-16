#include <iostream>

using namespace std;

int main() {
    int liczba;
    cout << "POdaj liczbe: ";
    cin >> liczba;
    int result = 1;
    for (int i = 1; i <= liczba; i++) {
        result = result * i;
    }
    cout << result;
    // int a;
    // int b;
    // int c;
    // cout << "podaj a: ";
    // cin >> a;
    // cout << "podaj b: ";
    // cin >> b;
    // while (b != 0) {
    //     c = a % b;
    //     a = b;
    //     b = c;
    // }
    // cout << "NWD: " << a;
    return 0;
}