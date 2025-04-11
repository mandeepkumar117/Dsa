#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<pair<int,string>>v;
    int rno,n;string name;
    cout<<"\nenter no of record\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nenter no";
        cin>>rno;
         cout<<"\nenter name";
        cin>>name;
        v.push_back({rno,name});

    }
    for(auto p:v){
        cout<<p.first<<","<<p.second<<"\n";
    }
}