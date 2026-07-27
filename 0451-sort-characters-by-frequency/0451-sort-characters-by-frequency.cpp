class Solution {
public:
    typedef pair<char,int>P;
    struct comparator{
        bool operator()(P& p1,P& p2){
            return p1.second<p2.second;
        }
    };
    string frequencySort(string s) {
        priority_queue<P,vector<P>,comparator>pq;
        unordered_map<char,int>m;
        for(char ch:s){
            m[ch]++;
        }
        for(auto it:m){
            pq.push({it.first,it.second});
        }
        string ans;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            ans.append(it.second,it.first);
        }
        return ans;
    }
};