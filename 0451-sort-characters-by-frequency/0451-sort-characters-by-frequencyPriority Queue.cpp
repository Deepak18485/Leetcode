class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char ch:s){
            m[ch]++;
        }
        vector<pair<char,int>>freq(m.begin(),m.end());
        sort(freq.begin(),freq.end(),[](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        });
        string str;
        for(auto it:freq){
            str.append(it.second,it.first);
        }
        return str;
    }
};