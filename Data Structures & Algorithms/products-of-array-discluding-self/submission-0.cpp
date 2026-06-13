class Solution {
public:
    int pro(vector<int> nums , int var){
        int prod = 1;
        for(int i ; i < nums.size() ; i++){
            if( i == var ) continue ;
            prod *= nums[i];
        } return prod;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            res.push_back( pro(nums , i) );
        }return res;
    }
};
