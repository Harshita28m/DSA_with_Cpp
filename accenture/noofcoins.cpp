#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=(i*i);
        cout<<ans<<endl;

    }
    cout<<ans;
    return 0;

}