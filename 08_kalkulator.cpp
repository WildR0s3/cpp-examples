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
    bool end = false;
    float a;
    float b;
    int operacja;
    do {
        cout << "Wprowadz liczbe 1: ";
        cin >> a;
        check_input();
        cout << "Wprowadz liczbe 2: ";
        cin >> b;
        check_input();

        cout << "Wprowadz operacje: ";
        cin >> operacja;
        check_input();
        if (operacja != '+' || operacja != '-', != )

    } while (!end);
    return 0;
}