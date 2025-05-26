class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int sum= 0;
        int ans=0;
        unordered_map<int, int> mp;
        for (int i=0; i<arr.size(); i++){
            sum= sum+ arr[i];
            if(sum==0){
             ans= ans+1;   
            }
            if(mp.find(sum-0)!= mp.end()){
                ans= ans+ mp[sum-0];
            }
           
                mp[sum]++;
            
        }
        return ans;
    }
};