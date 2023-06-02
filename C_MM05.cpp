#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a;
    while (cin >> a) {
         cout << setprecision(1) << fixed << round(a * a * 10) / 10 << endl;
    }
    return 0;
}
