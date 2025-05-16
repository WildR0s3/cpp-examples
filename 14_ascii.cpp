#include <iostream>

using namespace std;

int main() {
    char array[256] = {};
    for (int i = 0; i < 256; i++) {
        array[i] = char(i);
        cout << i << ". " << char(i) << endl;
    }
    for (char c: array) {
        cout << c << " - ";
    }
    return 0;
}