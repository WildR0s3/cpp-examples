#include <iostream>
#include <fstream>

using namespace std;


string toBinary(int decimal) {
    int reminder;
    string binary = "";
    while (decimal > 0) {
        reminder = decimal % 2;
        binary = to_string(reminder) + binary;
        decimal /= 2;
    }
    return binary;
}



int main() {
    int parzyste = 0;
    int max = 0;
    int count = 0;
    int sum = 0;
    string max_s;
    ifstream plik;
    ofstream output("odpowiedzi2.txt");
    plik.open("liczby.txt");
    if (plik.is_open()) {
        string line;
        while (getline(plik, line)) {
            if ((line.back() - '0') == 0) {
                parzyste++;
            }
            if (stoi(line, nullptr, 2) > max) {
                max_s = line;
                max = stoi(line, nullptr, 2);
            }
            if (line.size() == 9) {
                cout << line << endl;
                count++;
                sum += stoi(line, nullptr, 2);
            }
        }
    }
    output << "1. " << parzyste << endl;
    output << "2. " << max_s << ", " << max << endl;
    output << "3. " << count << ":  " << toBinary(sum) << ", " << sum << endl;
    return 0;
}
