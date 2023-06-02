#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string str = "\n";
    while (n--) {
        int sum = 0;
        getline(cin, str);
        for (int counter = 0; counter < str.length(); counter++) {
            if((int) str[counter] > 31 && (int) str[counter] < 127) {
                sum += (int) str[counter];
            }
        }
        if (sum != 0) {
            cout << sum << endl;
        }
        else {
            n++;
        }
    }
    return 0;
}
