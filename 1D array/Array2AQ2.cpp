#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v={1,1,4,5,3,6,6};
int max1=INT_MIN;
int max2=INT_MIN;
int max3=INT_MIN;

    for(int i=0;i<v.size();i++){
        if(v[i]>max1){
            max1=v[i];
        }
    }
        for(int i=0;i<v.size();i++){
        if(v[i]>max2 && v[i]!=max1){
            max2=v[i];
        }
    }
        for(int i=0;i<v.size();i++){  
        if(v[i]>max3 && v[i]!=max2 && v[i]!=max1){
            max3=v[i];
        }
    }
          
    
    
    cout<<max1<<","<<max2<<","<<max3;
}