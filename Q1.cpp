#include <iostream>
using namespace std;

void print_first_line(char number) {
    if (number == '2' || number == '3' || number == '5' || number == '7' || number == '8' || number == '9' || number == '0') {
        cout << "*****";
    }
    else if (number == '1') {
        cout << "    *";
    }
    else if (number == '4') {
        cout << "*   *";
    }
    else if (number == '6') {
        cout << "*    ";
    }
}

void print_second_line(char number) {
    if (number == '0' || number == '4' || number == '8' || number == '9') {
        cout << "*   *";
    }
    else if (number == '1' || number == '2' || number == '3' || number == '7') {
        cout << "    *";
    }
    else if (number == '5' || number == '6') {
        cout << "*    ";
    }
}

void print_third_line(char number) {
    if (number == '0') {
        cout << "*   *";
    }
    else if (number == '1' || number == '7') {
        cout << "    *";
    }
    else if (number == '2' || number == '3' || number == '4' || number == '5' || number == '6' || number == '8' || number == '9') {
        cout << "*****";
    }
}

void print_fourth_line(char number) {
    if (number == '0' || number == '6' || number == '8') {
        cout << "*   *";
    }
    else if (number == '2') {
        cout << "*    ";
    }
    else if (number == '1' || number == '7' || number == '3' || number == '4' || number == '5' || number == '9') {
        cout << "    *";
    }
}

void print_last_line(char number) {
    if (number == '2' || number == '3' || number == '5' || number == '6' || number == '8' || number == '0') {
        cout << "*****";
    }
    else if (number == '1' || number == '4' || number == '7' || number == '9') {
        cout << "    *";
    }
}

int main()
{
    string num = "";
    while (cin >> num) {
        for (int counter = 0; counter < 4; counter++) {
            print_first_line(num[counter]);
            if (counter != 3) {
                cout << " ";
            }
        }
        cout << endl;
        for (int counter = 0; counter < 4; counter++) {
            print_second_line(num[counter]);
            if (counter != 3) {
                cout << " ";
            }
        }
        cout << endl;
        for (int counter = 0; counter < 4; counter++) {
            print_third_line(num[counter]);
            if (counter != 3) {
                cout << " ";
            }
        }
        cout << endl;
        for (int counter = 0; counter < 4; counter++) {
            print_fourth_line(num[counter]);
            if (counter != 3) {
                cout << " ";
            }
        }
        cout << endl;
        for (int counter = 0; counter < 4; counter++) {
            print_last_line(num[counter]);
            if (counter != 3) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
