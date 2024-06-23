#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
	int low =0;
	int high =n-1;
	int flag =0;
	while(low<=high){
		int mid=low+(high-low)/2;
		if (x == arr[mid]){ 
		flag =1;
		return arr[mid+1];
		break;
		}
		else if(x>arr[mid]) low = mid+1;
		else high = mid-1;
		}
	if(flag==0) return arr[high+1];

}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,12};
    cout<<lowerBound(arr,10,11);
}