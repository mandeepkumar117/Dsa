#include<bits/stdc++.h>
using namespace std;

void tsum(vector<int> &vt,int t){
    map<int,int>mp;
    for(int i=0;i<vt.size();i++){
        int a=vt[i];
        int m=t-a;
        if(mp.find(m)!=mp.end()){
            cout<<mp[m]<<","<<i<<endl;
        }
mp[a]=i;

    }
}
int main() 
{
    vector<int>v{2,6,5,8,11,12};
    int t=14;

    tsum(v,t);
    return 0;
}