#include <iostream>
#include <limits>
#include <vector>

using namespace std;


int fibbo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        int former = 1;
        int latter = 1;
        int current;
        for (int i = 3; i <= n; i++) {
            current = former + latter;
            former = latter;
            latter = current;
            cout << current << endl;
     }
     return current;
    }
    
    
}


int main() {
    cout << fibbo(12) << endl;
    return 0;
}