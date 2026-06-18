class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            int v1 = nums[i];
            int v2 = currMax * nums[i];
            int v3 = currMin * nums[i];
            currMax = max(v1, max(v2,v3));
            currMin=  min(v1, min(v2,v3));
            ans = max(ans , max(currMax , currMin));
        }return ans;
    }
};
