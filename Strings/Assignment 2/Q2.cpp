#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "2947578";
   int maximum = 0; 
    for (int i = 0; i < str.size(); i++) {
        int digit = str[i] -'0';
        if (digit > maximum)
            maximum = digit;
    }
    cout<<maximum<<endl;
    int maxi = 0;
    for (int i = 0; i < str.length(); i++) {
        int digi=str[i] -'0';
        if (digi > maxi && digi != maximum)
            maxi = digi;
    }
    cout << maxi;

    return 0;
}

