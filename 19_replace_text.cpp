#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Fancy poly trawi poly etykiweta poly";
    string forbidden = "poly";
    string replacement = "fuck";
    size_t pos = 0;
    size_t current_pos = 0;

    while ((pos = text.find(forbidden,  current_pos)) != string::npos) {
        text.replace(pos, forbidden.length(), replacement);
        current_pos = (pos + forbidden.length());
    }
    cout << text;
    return 0;
}