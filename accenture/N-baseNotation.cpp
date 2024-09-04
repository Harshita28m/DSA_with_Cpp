#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int,char> m;
    for(int i=0;i<=9;i++){
        m[i]=char(48+i);
    }
    char alpha = 'A';
    for (int i=10;i<36;i++){
        m[i] = alpha;
        alpha = char(alpha +1);
    }
    //for(auto i :m) cout<<i.first<<":"<<i.second<<endl;
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int n;
    cout<<"enter the divisor"<<endl;
    cin>>n;
    string ans="";
    while(num>n){
        int rem = num%n;
       ans= m[rem]+ans;
       num = num/n;

    }
    ans=m[num]+ans;
    cout<<ans;
   
}