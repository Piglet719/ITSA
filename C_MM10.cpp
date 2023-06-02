#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a;
    while (cin >> a) {
         cout << setprecision(1) << fixed << a*9/5+32 << endl;
    }
    return 0;
}
