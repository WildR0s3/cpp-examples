#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word = "zakaz";
    string copy = word;
    reverse(copy.begin(), copy.end());
    if (word == copy) {cout << "Palindorm" << endl;}
    word = "trzask";
    copy = word;
    reverse(copy.begin(), copy.end());
    if (word == copy) {cout << "Not a palindorm";}
    return 0;
}