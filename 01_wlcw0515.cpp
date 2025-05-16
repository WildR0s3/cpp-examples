#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

void check_input() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    float a, delta, x1, x2;
    float b;
    float c;

    cout << "Podaj a: ";
    cin >> a;
    check_input();
    cout << "Podaj b: ";
    cin >> b;
    check_input();
    cout << "Podaj c: ";
    cin >> c;
    check_input();

    delta = 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        cout << "x1: " << x1 << ", x2; " << x2 << endl;
    } else if (delta == 0) {
        x1 = -b / (2*(a));
        cout << "x1: " << x1 << endl;
    } else {
        cout << "Brak pierwiadstkow";
    }

    return 0;
}

