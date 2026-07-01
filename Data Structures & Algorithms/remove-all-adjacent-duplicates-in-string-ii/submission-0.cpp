class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack< pair<char ,int >> st;
        string res = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(st.empty())st.push({s[i] , 1});
            else if(!st.empty() && st.top().first != s[i])st.push({s[i] , 1});
            else if( st.top().first == s[i] && st.top().second < k -1)st.top().second++;
            else st.pop();
        }
        while(!st.empty()){
            while(st.top().second--){
                res.push_back(st.top().first);
            }st.pop();
        }
        reverse(res.begin() , res.end());
        return res;
    }
};