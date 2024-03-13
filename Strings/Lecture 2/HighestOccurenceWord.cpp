#include <bits/stdc++.h>
using namespace std;

int main() {
   string s ="harshita is a student. harshita is a very good girl";
   stringstream ss(s);
 
   string temp;
   vector <string> arr;

   while(ss>>temp){
    arr.push_back(temp);
   }
   sort(arr.begin(),arr.end());
int count=1;
int maxcount=1;
   for(int i=1;i<arr.size();i++){
    if(arr[i]==arr[i-1]) count++;
    else {
        if(count>maxcount) maxcount=count;
        count=1;
    }
   }

   for(int i=1;i<arr.size();i++){
    if(arr[i]==arr[i-1]) count++;
   else count=1;
   if(count==maxcount) cout<<arr[i]<<" "<<maxcount<<endl;
    }
   

    

   

    return 0;
}