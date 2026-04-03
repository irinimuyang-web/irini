#include <iostream>
using namespace std;

void showPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Enter n: ";
    cin >> limit;
    showPrimes(limit);
    return 0;
}
