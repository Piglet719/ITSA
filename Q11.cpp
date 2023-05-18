#include <iostream>
using namespace std;

int main() {
    int row, col;
    while (cin >> row && cin >> col) {
        int arr[row][col];
        for (int counter = 0; counter < row; counter++) {
            for (int counter2 = 0; counter2 < col; counter2++) {
                cin >> arr[counter][counter2];
            }
        }
        for (int counter = 0; counter < col; counter++) {
            for (int counter2 = 0; counter2 < row - 1; counter2++) {
                cout << arr[counter2][counter] << " ";
            }
            cout << arr[row-1][counter] << endl;
        }
    }
    return 0;
}
