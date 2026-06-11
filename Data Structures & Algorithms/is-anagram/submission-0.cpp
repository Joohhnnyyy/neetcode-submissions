class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.size() != t.size() )return false;
        unordered_map<char ,int> freq1;
        unordered_map<char, int> freq2;
        for(int i = 0 ; i < s.size() ; i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }

        for(auto &i : freq1){
            if(freq2[i.first] != i.second)return false;
        }return true;
    }
};
