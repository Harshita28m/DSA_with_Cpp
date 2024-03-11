#include <bits/stdc++.h>
using namespace std;
 int trap(vector<int>& height) {
        int n = height.size();
         if (n <= 2) return 0; 
        vector<int> arr(n,0);
        vector<int> brr(n,0);
        vector<int> crr(n,0);

        arr[0]=height[0];
        for(int i=1;i<n;i++){
            arr[i]=max(arr[i-1],height[i-1]);
        }
        brr[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            brr[i]=max(brr[i+1],height[i+1]);
        }
       
        for(int i=0;i<n;i++){
            crr[i]=min(arr[i],brr[i]);
        }
        int water =0;
        for(int i=0;i<n-1;i++){
            if(crr[i]>height[i]){
                water+= crr[i]-height[i];
            }
            }
            return water;
            
            }

    int main(){
    vector<int> v1;
    v1={4,2,0,3,2,5};
    cout<<trap(v1);
    return 0;
}