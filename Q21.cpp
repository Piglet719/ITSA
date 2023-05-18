#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    float arr[10];
    int counter = 0;
    float maxNum = numeric_limits<float>::min();
    float minNum = numeric_limits<float>::max();
    while (counter < 10) {
        cin >> arr[counter];
        if (arr[counter] < minNum) {
            minNum = arr[counter];
        }
        else if (arr[counter] > maxNum) {
            maxNum = arr[counter];
        }
        counter++;
    }
    cout << "maximum:" << fixed << setprecision(2) << maxNum << endl;
    cout << "minimum:" << fixed << setprecision(2) << minNum << endl;
    return 0;
}
