#include <bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int> arr, int n, int x) {
	int low =0;
	int high =n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if (x == arr[mid]){ 
            if(arr[mid-1]==x){
                high = mid-1;
            }
        else{
		return mid;
		break;
        }
		}
		else if(x>arr[mid]) low = mid+1;
		else high = mid-1;
		}
	return -1;

}
int main(){
    vector<int> arr = {1,2,2,2,3,4,5,5,6,7,8,9,12};
    cout<<firstOccurence(arr,12,5);
}