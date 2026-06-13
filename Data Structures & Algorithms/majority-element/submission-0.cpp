class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        unordered_map<int,int> st;
        for(int i = 0 ; i < nums.size() ; i++){
            st[nums[i]]++;
        }
        for(auto i : st){
            majority = max(majority , i.second);
        }
        int majorityElem = 0;
        for(auto i : st){
            if(i.second == majority){
                majorityElem = i.first;
            }
        }return majorityElem;

    }
};