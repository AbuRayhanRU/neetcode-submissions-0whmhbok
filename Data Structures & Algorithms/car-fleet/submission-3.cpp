class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=speed.size();
        vector<pair<int,double>>t;
        double x;
        for(int i=0;i<n;i++){
            x=(double)(target-position[i])/speed[i];
            t.push_back({position[i],x});
        }
        sort(t.rbegin(),t.rend());
        int fleet=0;
        double ct,pt=0;
        for(auto x:t){
            ct=x.second;
            
            if(ct>pt){
                fleet++;
                cout<<ct<<"  "<<pt<<endl;pt=ct;}
            
        }
        return fleet;
    }
};
