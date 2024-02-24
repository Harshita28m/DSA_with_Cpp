#include<bits/stdc++.h>
using namespace std;
void sortedArray(vector < int > a, vector < int > b) {
    int n= a.size();
    int m= b.size();
    vector < int > k;
    vector < int > arr;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            k.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i]){
            k.push_back(b[j]);
            j++;
        }
        
        
        while(i<n && j==m){
            k.push_back(a[i]);
            i++;
        }
        while(j<m && i==n){
            k.push_back(b[j]);
            j++;
        }
    }
    

    for (int idx = 0; idx < k.size(); idx++) {
        if (idx == 0 || k[idx] != k[idx - 1]) {
            arr.push_back(k[idx]);
        }
    }
    for(auto i:arr) cout<<i<<",";
}
 int main(){
    vector<int> v1;
    vector<int> v2;
    v1={2,3,5,5,6,8,8,9 };
    v2={1,5,7,7,9,10 };
    sortedArray(v1,v2);
    return 0;
}