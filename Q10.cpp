#include <iostream>
using namespace std;

int euclidean (int a, int b) {
    int f = a % b;
    if (f == 0) {
        return b;
    }
    return euclidean(b, f);
}

int main() {
    int num1, num2, temp;
    cin >> num1 >> num2;
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    cout << euclidean(num1, num2) << endl;
    return 0;
}
