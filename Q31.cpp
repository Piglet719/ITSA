#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    string num, ss;
    while (getline(cin, num)) {
        int len = 0;
        string n;
        istringstream cut(num);
        while (getline(cut, n, ' ')) {
            int input = 0;
            istringstream ss(n);
            ss >> input;
            len++;
            m[input] += 1;
        }
        int max_num = 0, max_num_cnt = 0;
        for (map<int,int>::iterator p = m.begin(); p != m.end(); p++) {
            if (p->second > max_num_cnt) {
                max_num_cnt = p->second;
                max_num = p->first;
            }
        }
        if (max_num_cnt > len / 2) {
            cout << max_num << endl;
        }
        else {
            cout << "NO" << endl;
        }
        m.clear();
    }
    return 0;
}
