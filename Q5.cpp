#include <iostream>
using namespace std;

int main() {
    int input;
    int binary[8];
    cin >> input;
    if (input < 0) {
        input += 256;
    }
    for (int counter = 7; counter >= 0; counter--) {
        binary[counter] = input % 2;
        input /= 2;
    }
    for (int counter = 0; counter < 8; counter++) {
        if (counter != 7) {
            cout << binary[counter];
        }
        else {
            cout << binary[counter] << endl;
        }
    }
    return 0;
}
