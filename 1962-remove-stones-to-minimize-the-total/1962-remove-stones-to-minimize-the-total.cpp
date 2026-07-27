class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ans=0;
        for(int num:piles){
            pq.push(num);
            ans+=num;
        }
        while(k--){
            int num=pq.top();
            pq.pop();
            int r=num/2;
            num-=r;
            ans-=r;
            pq.push(num);
        }
        return ans;
    }
};