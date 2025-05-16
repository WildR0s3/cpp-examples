#include <iostream>


using namespace std;

int main() {
    long long array[100] = {};
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < sizeof(array) / sizeof(array[0]); i++) {
        array[i] = array[i-2] + array[i-1];
    }
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        cout << array[i] << " ";
    }
    return 0;
}