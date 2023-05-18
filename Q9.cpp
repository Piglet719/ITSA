#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        long sum = 0;
        for (int counter = 3; counter <= N; counter +=3) {
            sum += counter;
        }
        cout << sum << endl;
    }
    return 0;
}
