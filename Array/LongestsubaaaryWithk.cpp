class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int sum= 0;
        int ans= 0;
        unordered_map<int, int> mp;
        for (int i=0; i<arr.size(); i++){
            sum= sum+ arr[i];
            if(sum==k){
                ans= i+ 1;
            }
            else if(mp.find(sum- k)!= mp.end()){
                ans= max(ans, i-mp[sum-k]);
            }
        //If not present pisgs
        if(mp.find(sum)==mp.end()){
            mp[sum]= i;
        }
        }
        return ans;
        
    }
};