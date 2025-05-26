class Solution {
  public:
    void sort012(vector<int>& arr) {
        int mid=0;
        int min=0;
        int max= arr.size()-1;
        while(mid<=max){
            if(arr[mid]==0){
                swap(arr[mid++], arr[min++]);
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid], arr[max--]);
            }
        }
    }
};