#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 101;
    int guess;
    int count = 0;
    bool end = false;
    do {
        cout << "Zgadnij liczbe: ";
        cin >> guess;
        if (guess > number) {
            cout << "Za duzo!" << endl;
            count++;
        } else if (guess < number) {
            cout << "Za malo!" << endl;
            count++;
        } else {
            cout << "You guessed it!" << endl;
            count++;
            end = true;
        }
    } while (!end);
    cout << "You guessed the number: " << number << " in " << count << " attempts" << endl;
    return 0;
}