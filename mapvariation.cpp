#include<iostream>
using namespace std;
#include<map>
int main(){
    //syntax map<key,value>name{value1,value2}
    //it ignore the duplicate value and does not show error
    map<int,string>mp;
    mp[101]="amit";
    mp[234]="ajay";
    mp[19]="joy";
    mp[5];
    for(auto p:mp){
    cout<<p.first<<","<<p.second<<"\n";
   
}
map<string,int>mp2;
mp2["anu"]=21;
mp2["sonu"];
for(auto p:mp2)
{
    cout<<p.first<<","<<p.second<<"\n";
}
mp.erase(234);
for(auto p:mp){
    cout<<p.first<<","<<p.second<<"\n";
}
}