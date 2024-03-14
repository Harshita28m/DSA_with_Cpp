#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "pw";
    string rev= str;
    reverse(rev.begin(), rev.end()); 
    str = str + rev;
    cout << str;
    return 0;
}
