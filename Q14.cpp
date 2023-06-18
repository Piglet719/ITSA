#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    bool ans = true;
    for (int counter = input.length()-1, counter2 = 0; counter >= input.length()/2; counter--, counter2++) {
        if (input[counter] != input[counter2]) {
            cout << "NO" << endl;
            ans = false;
        }
    }
    if (ans) {
       cout << "YES" << endl;
    }
    return 0;
}
