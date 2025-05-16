#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Podaej liczby naturalne: ";
    int liczba;
    int min = numeric_limits<int>::max();
    int max = 0;
    int count = 0;
    int sum = 0;
    while (true) {
        cin >> liczba;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (liczba == 0) {
            break;
        }
        if (liczba > max) {
            max = liczba;
        }
        if (liczba < min) {
            min = liczba;
        }
        sum = sum + liczba;
        count++;

    }
    cout << "Max: " << max << ", Min: " << min << ", Avg: " << (float(sum)/count) << endl;
    return 0;
}