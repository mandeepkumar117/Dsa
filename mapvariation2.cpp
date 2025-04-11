#include<iostream>
using namespace std;
#include<map>
int main(){
    
    map<string,int>mp;
    string name;
    int mob,n;
    cout<<"enter how many records\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter mobile\n";
        cin>>mob;
        mp.insert({name,mob});
    }
    cout<<"result\n";
    for(auto p:mp)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }
    string s;
    cout<<"serch name\n";
    cin>>s;
    if(mp.find(s)!=mp.end()){//by default endis null 
        cout<<mp[s];
    }else
    {
        cout<<"record does not exist";
    }
}