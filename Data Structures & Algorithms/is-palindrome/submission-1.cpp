class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        for (char& c : s) {
        c = std::tolower(static_cast<unsigned char>(c));
        if((c>=97&&c<=122)||(c>=48&&c<=57))
        ss+=c;
    }
    int n=ss.size();
    cout<<ss<<endl;
        for(int i=0;i<n/2;i++){
            if(ss[i]!=ss[n-i-1]){
                cout<<"check"<<i<<ss[i]<<"  "<<ss[n-i-2]<<endl;
                return false;

                }
        }

     return true;
    }
};
