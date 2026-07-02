class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int>need;
        unordered_map<char ,int>have;
        for(int i = 0 ; i < ransomNote.size() ; i++)need[ransomNote[i]]++;
        for(int i = 0 ; i < magazine.size() ; i++)have[magazine[i]]++;
        for( auto i : need){
            int f_need = i.second;
            int f_have = have[i.first];
            if( f_have < f_need)return false;
        }return true;
    }
};