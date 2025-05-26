class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
       int i=0;
       while(i<arr.size()){
           int index= arr[i]-1;
           if(index< arr.size() and arr[index]!= arr[i]){
               swap(arr[index], arr[i]);
           }
           else{
               i++;
           }
       }
        for (int i=0; i<arr.size(); i++){
            if(i+1 != arr[i]){
                return i+1;
            }
        }
        return arr.size()+1;
       
    }
};