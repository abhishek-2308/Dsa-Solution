class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        // code here
        
        vector<int> ans;
      map<int, int>mp;
      for(int i=0; i<arr.size(); i++){
          mp[arr[i]]++;
          
      }
    
    for(auto i: mp){
        if(i.second> 1){
            ans.push_back(i.first);
            
        }
    }
   if(ans.empty()){
       ans.push_back(-1);
       
   }
   return ans;


    }
};