#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


bool isPalindrom(string napis) {
    string original = napis;
    reverse(napis.begin(), napis.end());
    return (napis == original);
}


int main() {
    ifstream plik;
    plik.open("hasla.txt");
    int parzyste = 0;
    int nieparzyste = 0;
    if (plik.is_open()) {
        string line;
        while (getline(plik, line)) {
            if (line.size() % 2 == 0) {
                parzyste++;
            } else {
                nieparzyste++;
            }
        }
    }

    plik.close();
    plik.open("hasla.txt");
    ofstream wyjsciowy("output_palin.txt");
    if (plik.is_open() && wyjsciowy.is_open()) {
        string line;
        while (getline(plik, line)) {
            if (isPalindrom(line)) {
                wyjsciowy << line << endl;
            }
        }
    }
    cout << "Parzyste: " << parzyste << " Nieparzyste: " << nieparzyste << endl;


    plik.close();
    plik.open("hasla.txt");
    int max = 0;
    int min = 20;
    string maxpass;
    string minpass;
    ofstream wyjsciowy2("output_special.txt");
    if (plik.is_open() && wyjsciowy2.is_open()) {
        string line;
        while (getline(plik, line)) {
            if (line.size() > max) {
                max = line.size();
                maxpass = line;
            }
            if (line.size() < min) {
                min = line.size();
                minpass = line;
            }
            for (int i = 0; i < line.size() - 1; i++) {
                if (line[i] + line[i+1] == 220) {
                    wyjsciowy2 << line << endl;
                    break;
                }
            }
        }
    }
    cout << "Max_pass: " << maxpass << " " << "Min_pass: " << minpass << endl;



    return 0;
}