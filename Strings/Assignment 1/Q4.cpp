#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str(n, ' ');
    if(n%2==0){
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        
    }
 
    reverse(str.begin()+n/2, str.end());
       cout<<str<<endl;
    return 0;
}