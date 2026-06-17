class Solution {
public:
int maxElem(vector<int> &a){
    int maxElement = -1;
    for(auto i : a){
        maxElement = max(maxElement , i);
    }
    return maxElement;
}
    int characterReplacement(string s, int k) {
        int left = 0 ; 
        int right = 0;
        int res = 0;
        vector<int> f(26,0);
        while( right < s.size() ){
            f[s[right] -'A']++;
            int maxCount = maxElem(f);
            while((right - left + 1) - maxCount > k){
                f[s[left++] - 'A']--;
                maxCount = maxElem(f);
            }
            res = max( right - left + 1 , res);
            right++;
        }return res;
    }
};
