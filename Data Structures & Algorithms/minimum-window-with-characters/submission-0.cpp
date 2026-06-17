class Solution {
public:
bool valid(unordered_map<char,int>&need , unordered_map<char,int>&have){
     for(auto i : need){
        if(have[i.first] < i.second)return false;
     }return true;
}
    string minWindow(string s, string t) {
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        for(int i = 0 ; i < t.size() ; i++){
            need[t[i]]++;
        }
        int left = 0 ;
        int right = 0;
        int res = INT_MAX;
        int start = -1;
        while( right < s.size()){
            have[s[right]]++;
            while(valid(need,have)){
                if( res > right - left + 1){
                    res = right - left + 1;
                    start = left;
                }
                have[s[left++]]--;
                if(have[s[left]] == 0)have.erase(s[left]);
            }right++;
        }
        return ( res == INT_MAX ? "" : s.substr(start , res));
    }
};
