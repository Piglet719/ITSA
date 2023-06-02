#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double top, down, h;
    while(cin >> top >> down >> h) {
        cout << setprecision(1) << fixed << "Trapezoid area:" << (top + down) * h / 2 << endl;
    }
    return 0;
}
