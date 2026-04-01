class Solution {
public:
    
    int trap(vector<int>& h) {
        int ans=0,n=h.size();
        int sufix[n],prefix[n];
        sufix[0]=h[0];
        prefix[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            sufix[i]=max(sufix[i-1],h[i]);
            prefix[n-i-1]=max(prefix[n-i],h[n-i-1]);
        }
        for(int i=0;i<n;i++){
            ans+=min(sufix[i],prefix[i])-h[i];
        }
        return ans;

    }
};
