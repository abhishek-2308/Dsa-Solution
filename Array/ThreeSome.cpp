class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(begin(arr), end(arr));
       for (int i=0; i<arr.size(); i++){
           int j= i+1;
           int k= arr.size()-1;
           while(j<k){
               int sum= arr[i]+ arr[j]+ arr[k];
               if(sum==target){
                   return 1;
               }
               else if(sum> target){
                   k--;
               }
               else{
                   j++;
               }
           }
       }
       return 0;
    }
};