class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max= INT_MIN;
      for (int i=0; i<arr.size(); i++){
          if(arr[i]>= max){
              max= arr[i];
          }
      }
      //Find the Second largest Element
      int sec= -1;
      for (int i=0; i<arr.size(); i++){
          if(arr[i]> sec and arr[i]!= max){
              sec= arr[i];
          }
      }
      return sec;
    }
};