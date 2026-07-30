class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        int n=s.size();
        string word;
        for(char c:s){
            if(c==' '){
                int idx=word.back()-'0';
                word.pop_back();
                ans[idx]=word;
                word="";
            }
            else{
                word+=c;
            }
        }
        int idx=word.back()-'0';
        word.pop_back();
        ans[idx]=word;
        string str;
        for(int i=1;i<10;i++){
            if(ans[i]!=""){
                if(!str.empty()){
                    str+=' ';
                }
                str+=ans[i];
            }
        }
        return str;
    }
};