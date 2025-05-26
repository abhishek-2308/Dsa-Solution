
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
       int i=0;
       sort(arr.begin(), arr.end());
       int j= arr.size()-1;
       while(i<j){
           int sum=arr[i]+ arr[j];
           if(sum==target){
               return true;
           }
          else if(sum<target){
              i++;
          }
          else{
              j--;
          }
           
       }
       return false;
        
    }
};