class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualZor = 0;
        int n = nums.size() ;
        for(int i = 0 ; i <= n ; i++){
            actualZor ^= i ;
        }
        int currZor = 0;
        for(int i = 0 ; i < n ; i++){
            currZor ^= nums[i];
        }
        return actualZor ^ currZor;
    }
};
