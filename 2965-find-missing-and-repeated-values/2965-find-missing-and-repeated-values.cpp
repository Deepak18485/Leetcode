class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans(2);
        map<int,int>m;
        int p=grid.size();
        int q=grid[0].size();
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                m[grid[i][j]]++;
            }
            
        }
        int i=1;
        for(auto num:m){
            if(!(num.first==i)){
                ans[1]=i;
                i++;
            }
            if(num.second>=2){
                ans[0]=num.first;
            }
            i++;
        }
        if(ans[1]==0){
            ans[1]=p*p;
        }
        return ans;
    }
};