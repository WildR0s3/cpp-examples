#include <iostream>
#include <random>
#include <ctime>

using namespace std;


int get_coord() {
    return rand() % 3;
}

int main() {

    srand(time(0));
    int number = rand() % 3;
    int size = 3;

    char** array = new char*[size];
    for (int i =0; i<size; i++) {
        array[i] = new char[size];
    }

    for (int i = 0 ; i < size; i++) {
        delete[] array[i];
    }
    delete[] array;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
           array[i][j] = 'O';
        }
       
    }

    array[get_coord()][get_coord()] = 'X';

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}