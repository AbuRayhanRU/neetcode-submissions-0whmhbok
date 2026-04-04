class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int > window(nums.begin(),nums.begin()+k);
        vector<int>ans;
        make_heap(window.begin(),window.end());

        for(int i=0;i<n-k+1;i++){
            ans.push_back(window.front());
            auto it=find(window.begin(),window.end(),nums[i]);
            if(it!=window.end())
            *it=window.back();
            window.pop_back();
            make_heap(window.begin(), window.end());
            window.push_back(nums[i+k]);         
            push_heap(window.begin(), window.end()); 
        }


    return ans;
    }
};
