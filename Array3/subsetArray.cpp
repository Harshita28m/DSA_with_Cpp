#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    if(n<m) return "subset doesn't exist";
    sort(a1, a1+n);
    sort(a2, a2+m);
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a2[j]==a1[i]){
        i++;
        j++;
        }
        else i++;
    }
    if(j==m) {
        return "yes";
    }
    else {
        return "no";
    }
    
}

int main()
{
    int a1[] = {10, 5, 2, 23, 19};
   int a2[] = {19, 5, 3};   
    string result = isSubset(a1, a2 , 8 , 5);
    cout<<result;
    return 0;
}

6 4
11 1 13 21 3 7
11 3 7 1