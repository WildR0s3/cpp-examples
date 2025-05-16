#include <iostream>


using namespace std;

int main() {
    string line;
    cout << "Wpisz cos: ";
    cin >> line;
    for (char &c: line) {
        if (islower(c)) {c= toupper(c);}
        else if (isupper(c)) { c= tolower(c);}
    }
    cout << line;
    return 0;
}