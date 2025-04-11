#include<iostream>
#include<map>

using namespace std;
int main(){
    map<string,int>mp;
    int n;
    string name;
    cout<<"enter the number of values\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the values\n";
        cin >>name;
        mp[name]++;

    }
    for(auto p:mp){
        cout<<p.first<<","<<p.second<<"\n";
    }
}