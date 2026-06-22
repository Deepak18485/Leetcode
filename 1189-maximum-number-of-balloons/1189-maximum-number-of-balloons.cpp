class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;
        m['b']=0;
        for(char c:text){
            if(c=='b' || c=='a' || c=='l' || c=='l' || c=='o' || c=='o' || c=='n'){
                m[c]++;
            }
        }
        return min({m['b'],m['a'],m['l']/2,m['o']/2,m['n']});
    }
};