#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str, '\n');
    int n = str.length();
    int count =0;
    for (int i = 0; i < n; i++) {
        if(i==0) {
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==n-1){
            if(str[i]!= str[i-1]) count++;
        }
        else if (str[i]!= str[i-1] && str[i]!=str[i+1])  count++;
       
    }

    cout << count;

    return 0;
}