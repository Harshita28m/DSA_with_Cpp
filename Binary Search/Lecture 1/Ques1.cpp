#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
	int low =0;
	int high =n-1;
	int mid=low+(high-low)/2;
	while(low<high){
		if(x==arr[mid]) return arr[mid-1];
		else if(x<arr[mid]) high = mid-1;
		else if (x>arr[mid]) low = mid+1;
		else return arr[n+1];

	}
	return arr[high];

}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int x = 8;
    cout<<lowerBound(arr,n,x);
}