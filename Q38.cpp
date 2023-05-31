#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int in;
	while(cin >> in){
		double nSu=0, Su=0;
		if (in > 700) {
            Su += (in - 700) * 5.63;
            nSu += (in - 700) * 4.5;
            in = 700;
        }
		if (in > 500) {
            Su += (in - 500) * 4.97;
            nSu += (in - 500) * 4.01;
            in = 500;
        }
		if (in > 330) {
            Su += (in - 330) * 4.39;
            nSu += (in - 330) * 3.61;
            in = 330;
        }
		if (in > 120) {
            Su += (in - 120) * 3.02;
            nSu += (in - 120) * 2.68;
            in = 120;
        }
		if (in > 0) {
            Su += in * 2.1;
            nSu += in * 2.1;
        }
		cout << fixed << setprecision(2) << "Summer months:" << Su << endl;
		cout << fixed << setprecision(2) << "Non-Summer months:" << nSu << endl;
    }
	return 0;
}
