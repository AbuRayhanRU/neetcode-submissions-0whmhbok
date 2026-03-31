class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        if (strs.empty())return "\x01";
        int n=strs.size();
        for (int i=0;i<n;i++){
            for (auto ch: strs[i]){
                if(ch=='\\'||ch=='|'){
                    result+='\\';
                }
                result+=ch;
            }
            if(i+1<n){
                result+='|';
            }
        }
        cout<<result;
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string current;
        if(s=="\x01")return {};
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='\\'&& i+1<n){
                current+=s[++i];
            }
            else if(s[i]=='|'){
                result.push_back(current);
                current.clear();
            }
            else{
                current+=s[i];
            }
        }
        result.push_back(current);
        //if(n==0)result.clear();

        return result;

    }
};
