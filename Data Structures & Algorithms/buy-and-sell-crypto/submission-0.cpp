class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                ans=max(ans,p[j]-p[i]);
                cout<<i<<" "<<j<<" "<<ans<<endl;
            }
        }
        return ans;
    }
};
