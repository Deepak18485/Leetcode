class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>m;
        for(int candy:candyType){
            m[candy]++;
        }
        int n=candyType.size();
        int eat=n/2;
        if(m.size()<eat){
            return m.size();
        }
        return eat;
    }
};