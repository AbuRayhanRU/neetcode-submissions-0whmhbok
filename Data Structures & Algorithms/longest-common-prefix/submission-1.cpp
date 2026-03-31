class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0],com={};
        int n=strs.size();

        for(int i=1;i<n;i++){
            int len=strs[i].size();
            com=ans;
            ans.clear();
            for(int j=0;j<len;j++){
                if (com[j]==strs[i][j]){
                    ans+=com[j];
                }
                else{
                    break;
                }

            }
            com.clear();
            
        }

        return ans;
    }
};