#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int length, sex;
    while (cin >> length && cin >> sex) {
        if (sex == 1) {
            cout << fixed << setprecision(1) << (length - 80) * 0.7 << endl;
        }
        else {
            cout << fixed << setprecision(1) << (length - 70) * 0.6 << endl;
        }
    }
    return 0;
}
