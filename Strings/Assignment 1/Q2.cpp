#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str, '\n');
    int n =str.length();
    int count=0;
    for (int i = 0; i < n; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')  continue;
        else count++;
    }

    cout << count;

    return 0;
}