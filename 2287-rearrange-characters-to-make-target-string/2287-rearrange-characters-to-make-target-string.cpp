class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>str,t;
        for(char c:target){
            t[c]++;
        }
        for(char c:s){
            str[c]++;
        }
        int ans=INT_MAX;
        for(auto it:t){
            ans=min(ans,str[it.first]/t[it.first]);
        }
    return ans;
    }
};