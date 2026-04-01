class Solution {
public:
    int max(int x,int y){
        if(x>y)return x;
        else return y;
    }
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
       // cout<<n;
        set<char>ss;
        int ans=0;
        for(int i=0;i<n;i++){
            if(ss.count(s[i])){
                ans=max(ans,ss.size());
                ss.clear();
                int j=i-1;
                while(true){
                    if(s[j]==s[i]){
                        cout<<j<<i<<endl;
                    i=j;
                    break;
                    }
                    j--;
                }

            }
            else{
                ss.insert(s[i]);
            }

        }
        ans=max(ans,ss.size());
        return ans;
    }
};
