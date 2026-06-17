class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int res = -1;
        unordered_map<char,int> mp;
        for(int right = 0 ; right < s.size() ; right++){
            mp[s[right]]++;
            while(mp[s[right]] > 1){
                mp[s[left]]--;
                if(mp[s[left]] == 0)mp.erase(s[left]);
                left++;
            }
            if(mp[s[right]] == 1){
                int len = right - left + 1;
                res = max( res , len);
            }
        }return (res == -1 ? 0 : res);
    }
};
