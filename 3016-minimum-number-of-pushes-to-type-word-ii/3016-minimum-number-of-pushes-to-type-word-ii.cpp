class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>m;
        for(char c:word){
            m[c]++;
        }
        priority_queue<int>pq;
        for(auto it:m){
            pq.push(it.second);
        }
        int cnt=1;
        int ans=0;
        while(!pq.empty()){
            int f=pq.top();
            pq.pop();
            if(cnt<=8){
                ans+=1*f;
            }
            else if(cnt<=16){
                ans+=2*f;
            }
            else if(cnt<=24){
                ans+=3*f;
            }
            else{
                ans+=4*f;
            }
            cnt++;
        }
        return ans;
    }
};