#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string input;
    getline(cin, input);
    cin >> n;
    for (int counter = 0; counter < input.length(); counter++) {
		if((int)input[counter] >= 'A' && (int)input[counter] <= 'Z') {
			input[counter] = (char)(((int)(input[counter] - 'A') + n) % 26 + 'A');
		}
		if((int)input[counter] >= 'a' && (int)input[counter] <= 'z') {
			input[counter] = (char)(((int)(input[counter] - 'a') + n) % 26 + 'a');
		}
		if((int)input[counter] >= '0' && (int)input[counter] <= '9') {
			input[counter] = (char)(((int)(input[counter] - '0') + n) % 10 + '0');
		}
    }
	cout << input << endl;
    return 0;
}
