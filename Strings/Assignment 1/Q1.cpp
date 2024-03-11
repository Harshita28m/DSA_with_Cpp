#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str, '\n');

    for (int i = 0; i < str.length(); i++) {
        if (i % 2 != 0) {
            str[i] = '#';

        }
    }

    cout << str << endl;

    return 0;
}