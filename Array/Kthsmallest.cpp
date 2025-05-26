class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
       priority_queue<int> pq;
    for (int i=0; i<arr.size(); i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    
       return pq.top();
    }
};