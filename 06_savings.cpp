#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // cout << log2(8);
    cout << float(200000) / 12000 << endl;
    cout << log(float(200000) / 12000) / log(1.05) << endl;
    

    // log[b](x) = logn(x) / logn(b)
    double income = 12000;
    double final_amout = 200000;
    double ratio = final_amout / income;
    double base = 1.05;
    double result = log(ratio) /log(base);
    cout << "Nalezy oszczezac " << result << " lat";
    return 0;
}