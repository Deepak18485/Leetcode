class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int i=0,j=n-1;
        int a=0,b=0;
        int flag=0;
        while(i<j){
            if(!flag){
                if(piles[i]>=piles[j]){
                    a+=piles[i++];
                }
                else{
                    a+=piles[j--];
                }
            }
            else{
                if(piles[i]>=piles[j]){
                    b+=piles[j--];
                }
                else{
                    b+=piles[i++];
                }
            }
        }
        return a>b?true:false;
    }
};