class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> st;
        for(int i = 0 ; i< nums.size() ; i++) st[nums[i]]++;
        for(auto i : st){
            if(i.second > 1){
                return i.first;
            }
        }return -1;
    }
};
