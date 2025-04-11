#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mp;
    int roll,n;
    string name;
    cout<<"\nenter how many records\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter rollno\n";
        cin>>roll;
        cout<<"enter name\n";
        cin>>name;
        mp.insert({roll,name});
    }
    cout<<"\nrecords are\n";
    for(auto p:mp){
        cout<<p.first<<":"<<p.second<<"\n";
    }
auto t=mp.find(102);
if(t!=mp.end()){
    cout<<t->first<<":"<<t->second<<"\nrecord found\n";
    mp.erase(102);
    cout<<"\n records are\n";
    for(auto p:mp){
        cout<<p.first<<":"<<p.second<<"\n";
    }
}
else{
    cout<<"not found";
}
}