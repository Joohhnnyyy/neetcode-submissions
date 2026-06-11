class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            if(i + 1  < nums.size() && nums[i] == nums[i+1]) res= true;
        }return res;
    }
};