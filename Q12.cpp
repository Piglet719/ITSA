#include <iostream>
#include <cmath>
using namespace std;

int f (int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    return f(n - 1) + f(ceil(n/2));
}

int main() {
    int input;
    cin >> input;
    cout << f(input) << endl;
    return 0;
}
