#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "2947578";
    int maximum = 0; 
    for (int i = 0; i < str.length(); i++) {
        int digit = int(str[i]);
        if (digit > maximum)
            maximum = str[i];
    }
    int maxi = 0;
    for (int i = 0; i < str.length(); i++) {
        int digi=int(str[i]);
        if (digi > maxi && digi != maximum)
            maxi = str[i];
    }
    cout << maxi;

    return 0;
}

