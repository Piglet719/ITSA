#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string input, ss;
    while (getline(cin, input)) {
        double counter = 0, sum = 0;
        istringstream cut(input);
        string output;
        while (getline(cut, output, ' ')) {
            int num = 0;
            istringstream ss(output);
            ss >> num;
            sum += num;
            counter++;
        }
        cout << "Size: " << int(counter) << endl;
        cout << "Average: " << fixed << setprecision(3) << sum / counter << endl;
    }
    return 0;
}
