#include <iostream>
using namespace std;

int main() {
	int n;
	int time[24] = {0};
	cin >> n;
	for(int counter = 0; counter < n; counter++) {
		int a, b;
		cin >> a >> b;
		for(int counter2 = a-1; counter2 < b-1; counter2++) {
		    time[counter2]++;
        }
	}
	n = time[0];
	for (int counter = 0; counter < 24; counter++) {
        if(n < time[counter]) {
            n = time[counter];
        }
    }
	cout << n << endl;
	return 0;
}
