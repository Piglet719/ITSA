#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int input;
    double answer;
    while(cin >> input){
        answer = input * 1.6;
        cout << fixed << setprecision(1) << answer << endl;
    }
    return 0;
}
