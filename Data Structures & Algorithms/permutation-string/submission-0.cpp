class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>maps1;
        map<char,int>maps2;
        int n1=s1.size();
        int n2=s2.size();
        if (n1 > n2) return false;
        for(int i=0;i<n1;i++){
            maps1[s1[i]]++;
        }
        for(int i=0;i<n2-n1+1;i++){
            maps2.clear();
            for(int j=i;j<i+n1;j++){
                maps2[s2[j]]++;
            }
            if(maps1==maps2)return true;

        }
        return false;
    }
};
