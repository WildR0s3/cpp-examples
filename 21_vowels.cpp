#include <iostream>
#include <string>

using namespace std;

int main() {
    string vowels = "aeiouy";
    int array[6] = {0};
    string text = "Ala ma kota, a ktop ma psa. Dupa to jego raz i dwa";
    for (char c: text) {
        size_t pos = vowels.find(tolower(c));
        if (pos != string::npos) {
            array[pos]++;
        }
    }
    for (int i = 0; i < 6; i++) {
        cout << vowels[i] << " - " << array[i] << endl;
    }
    return 0;
}