#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double down, h;
    while(cin >> down >> h) {
        cout << setprecision(1) << fixed << down * h / 2 << endl;
    }
    return 0;
}
