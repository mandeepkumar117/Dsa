#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<tuple>
int main(){
    vector<tuple<int,string,string>>v;
    int rec,roll;
    string name,city;
    cout<<"enter an no of records\n";
    cin>>rec;
    for(int i=0;i<rec;i++){
        cout<<"enter rollno\n";
        cin>>roll;
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter city\n";
        cin>>city;
        v.push_back({roll,name,city});


    }
    cout<<"\nstored data\n";
    for(auto p:v)
    {
        cout<<get<0>(p)<<","<<get<1>(p)<<","<<get<2>(p)<<"\n";
    }
}