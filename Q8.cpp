#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, counter;
    while (cin >> num) {
        if (num == 1) {
            cout << "NO" << endl;
        }
        for (counter = sqrt(num)*10/10; counter > 1; counter--) {
            if (num % counter == 0) {
                cout << "NO" << endl;
                break;
            }
        }
        if (counter == 1) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
