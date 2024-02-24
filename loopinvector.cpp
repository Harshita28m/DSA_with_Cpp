#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size of the array:";
cin>>n;
cout<<"size of the array"<<n<<endl;
vector <int> v (n);
for(int i=0;i<n;i++){
    cin>>v[i];
    cout<<v[i];
}
return 0;
}