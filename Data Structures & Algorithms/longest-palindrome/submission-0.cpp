class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int > f;
        bool odd = false;
        for(int i = 0 ; i < s.size() ; i++)f[s[i]]++;
        int res = 0;
        for( auto i : f ){
            int val = i.second;
            if( val % 2 == 0)res += val;
            else{
                res += val - 1;
                odd = true;
            }
        }
        return ( odd ? res + 1 : res );
    }
};