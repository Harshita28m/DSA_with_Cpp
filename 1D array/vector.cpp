#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
      v.push_back(10);
        v.push_back(7);
          v.push_back(9);
          v.push_back(8);
    cout<<v[0]<<endl;
    cout<<v.at(1)<<endl;
    v.pop_back();
    cout<<v[0];
    
    return 0;
}