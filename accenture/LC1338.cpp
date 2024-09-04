class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n= arr.size();
        map<int,int> m;
        int target = n/2;
        for(int i=0;i<n;i++){
        m[arr[i]]++;
        }
        arr.clear();
        for(auto i : m){
            arr.push_back(i.second);
        }
        sort(arr.begin(),arr.end());
        int sum=0,count=0,i=arr.size()-1;
        while(sum<target){
            count++;
            sum=sum+arr[i--];

        }
        return count;
        
       
        
    }
};