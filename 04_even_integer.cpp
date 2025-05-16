#include <iostream>

using namespace std;

int main() {
    for (int i = 31; i < 53; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (i % 4 == 0) {
            if ((i % 8 == 0) || (i % 10 == 0)) {
                continue;
            }
            cout << i << endl;
        }
    }
    return 0;
}