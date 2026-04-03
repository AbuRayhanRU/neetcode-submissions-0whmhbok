class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size(),l=0,mf=0,ans=0;
        vector<int>ff(26,0);
        for(int r=0;r<n;r++){
            ff[s[r]-'A']++;
            mf=max(mf,ff[s[r]-'A']);
            if((r-l+1)-mf>k){
                ff[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
     return ans;   
    }
};
