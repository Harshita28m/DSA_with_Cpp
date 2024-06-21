#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
	int low =0;
	int high =n-1;
	int mid=low+(high-low)/2;
	while(low<=high){
		if (x == arr[mid]) {
            if (mid > 0) 
                return arr[mid - 1];
            else
                return arr[mid];
		}
		else if(x<arr[mid]) high = mid-1;
		else low = mid+1;
		}
	return arr[high];

}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout<<lowerBound(arr,10,8);
}