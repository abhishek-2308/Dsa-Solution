class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; 
        int j= height.size()-1;
        int ans= INT_MIN;
        while(i<j){
            int weight= j-i;
            int mini = min(height[i], height[j]);
            int area= mini*weight;
            ans= max(ans, area);
            height[i]> height[j] ? j-- : i++;
        }
        return ans;
    }
};