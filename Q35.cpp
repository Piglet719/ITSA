#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int T, m, k;
        cin >> T >> m >> k;
        vector<int> gifts(k);
        for (int counter = 0; counter < k; counter++) {
            cin >> gifts[counter];
        }
        sort(gifts.begin(), gifts.end());
        int sum = 0;
        for (int counter = 0; counter < m; counter++) {
            sum += gifts[counter];
        }
        if (T >= sum) {
            cout << sum << endl;
        }
        else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
