class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
       int sum=0;
       int j=0;
       for (int i=0; i<arr.size(); i++){
           sum= sum+arr[i];
           while(sum>s and j<i){
               sum= sum-arr[j];
               j++;
           }
           if(sum==s){
               return {j+1, i+1};
           }
       }
       return {-1};
    }
}