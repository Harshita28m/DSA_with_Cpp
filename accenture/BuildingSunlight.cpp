//Given the array arr[] of heights of certain buildings that lie adjacent to each other, Sunlight starts falling from the left side of the buildings. If there is a building of a certain height, all the buildings to the right side of it having lesser heights cannot see the sun. 

class Solution {
  public:
    int longest(vector<int>& arr) {
        int count =1;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=max) {
                max=arr[i];
                count++;
        }
        }
        return count;
        
    }
};