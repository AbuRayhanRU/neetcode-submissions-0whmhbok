class Solution {
public:
    string minWindow(string s, string t) {
        int ns=s.size(),nt=t.size();
        if(nt>ns)return "";

        unordered_map<char,int>need;
        for(int i=0;i<nt;i++){
            need[t[i]]++;
        }

        int start=0,left=0,minlen=INT_MAX,have=0,total=need.size();

        unordered_map<char,int>window;
        for(int r=0;r<ns;r++){
            window[s[r]]++;
            if(need.count(s[r])&&window[s[r]]==need[s[r]]){
                have++;
            }
            while(have==total){
                if(r-left+1<minlen){
                    minlen=r-left+1;
                    start=left;
                }
                window[s[left]]--;
                if(need.count(s[left])&&window[s[left]]<need[s[left]]){
                    have--;
                }
                left++;
            }
        }

        return minlen==INT_MAX ? "":s.substr(start,minlen);
    }
};
