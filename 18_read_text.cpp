#include <iostream>
#include <string>

using namespace std;


int main() {
    string text;
    string array[100];
    cout << "Wpisz tekst: ";
    getline(cin, text, '.');
    string word;
    int index = 0;
    while (text, word, ' ') {
        if (word.length() > 4) {
            array[index] = word;
            index++;
        }
    }
    string nowy = "";
    for (int i = 0; i < sizeof(array)/ sizeof(array[0]); i++) {
        nowy += array[i][1];
        nowy += array[i][2];
    }
    cout << text;
    return 0;
}