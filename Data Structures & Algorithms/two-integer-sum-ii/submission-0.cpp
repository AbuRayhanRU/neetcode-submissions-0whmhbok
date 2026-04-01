class Solution {
public:
    vector<int> twoSum(vector<int>& num, int t) {
        int n=num.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(num[i]+num[j]==t)
                return {i+1,j+1};
            }
        }
    }
};
