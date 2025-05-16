#include <iostream>

using namespace std;

int main() {
    string text = "DOXQRIRGB MFBOTPWX LPLYX ALPQXGB MIRPFHX";
    int offset = 3;
    for (char &c: text) {
        if (isalnum(c)) {c = (c - 'A' + offset) % 26 + 'A';}
        
    }
    cout << text;
    return 0;
}