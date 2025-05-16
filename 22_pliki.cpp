#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

int main() {
    ifstream plik;
    string elem;
    float sum = 0;
    plik.open("file.txt");
    int counter = 1;
    int number = 0 ;
    float min = numeric_limits<float>::max();
    float max = 0;
    do {
        plik >> elem;
        // cout << elem << endl;
        if (counter == 3) {
            sum = sum + stof(elem);
            if (min > stof(elem)) {min = stof(elem);}
            if (max < stof(elem)) {max = stof(elem);}
            number++;
        }
        counter++;
        
        if (counter > 3) {counter = 1;}
    } while (!plik.eof());
    float avg = sum / number;
    cout << avg<< endl;

    plik.close();
    plik.open("file.txt");

    cout << min << endl;
    cout << max << endl;

    float value;
    counter = 1;
    ofstream output("output_norm.txt");
    do {
        plik >> elem;
        if (counter == 3) {
            value = stof(elem);
            value = (value -min)/(max - min); 
            output << value << endl;}
        counter++;
        if (counter > 3) {counter = 1;}
        
    } while (!plik.eof());

    return 0;
}