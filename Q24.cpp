#include <iostream>
using namespace std;

int main() {
    long double r, sum;
    long int n, p;
    while (cin >> r >> n >> p) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += p;
            sum *= (1 + r);
        }
        cout << (long long) sum << endl;
    }
    return 0;
}
