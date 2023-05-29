#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    int answer;
    int arr[4];
    cin >> answer;
    for (int counter = 0; counter < 4; counter++) {
        arr[counter] = answer % 10;
        answer /= 10;
    }
    while (1) {
        string s_input;
        int input, A = 0, B = 0;
        int in[4];
        cin >> s_input;
        if (strcmp(s_input.c_str(), "0000") == 0) break;
        input = atoi(s_input.c_str());
        for (int counter = 0; counter < 4; counter++) {
            in[counter] = input % 10;
            input /= 10;
            if (in[counter] == arr[counter]) {
                A++;
            }
        }
        for (int counter = 0; counter < 4; counter++) {
            for (int counter2 = 0; counter2 < 4; counter2++) {
                if (in[counter] == arr[counter2] && counter != counter2) {
                    B++;
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
    }
    return 0;
}
