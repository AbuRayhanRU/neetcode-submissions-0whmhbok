class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>tri;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        tri.push_back(nums[i]);
                        tri.push_back(nums[j]);
                        tri.push_back(nums[k]);
                        sort(tri.begin(),tri.end());
                        int coun=count(ans.begin(),ans.end(),tri);
                        if(coun==0) ans.push_back(tri);
                        tri.clear();
                    }
                }
            }
        }
        return ans;
    }
};
