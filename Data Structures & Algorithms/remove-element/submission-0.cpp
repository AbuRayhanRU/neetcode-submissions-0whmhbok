class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        vector<int>ans=nums;
        nums.clear();
        for(int i=0;i<n;i++){
            if(ans[i]==val)continue;
            else nums.push_back(ans[i]);
        }
        return nums.size();
    }
};