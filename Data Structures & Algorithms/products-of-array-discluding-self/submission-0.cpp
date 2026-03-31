class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        long int prefix[n],sufix[n];
        prefix[0]=nums[0];
        sufix[n-1]=nums[n-1];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i];
            sufix[n-(i+1)]=nums[n-(i+1)]*sufix[n-i];
        }
        vector<int> ans;
        ans.push_back(sufix[1]);
        for(int i=1;i<n-1;i++){
            ans.push_back(prefix[i-1]*sufix[i+1]);
        }
        ans.push_back(prefix[n-2]);
        return ans;
    }
};
