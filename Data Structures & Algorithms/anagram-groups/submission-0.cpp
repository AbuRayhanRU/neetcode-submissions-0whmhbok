class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>ans1;

        for (auto s : strs){
            string sorts=s;
            sort(sorts.begin(),sorts.end());
            ans1[sorts].push_back(s);
        }
        for(auto s: ans1){
            ans.push_back(s.second);
        }
        return ans;
    }
};
