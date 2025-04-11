#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<string>s{"one","two","three"};
    for(auto p:s)
    {
        cout<<p<<"\n";
    }
    cout<<"\n";
    vector<int>v;
    v.push_back(10);//dynamic
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(56);
    v[1]=900;//edit
    cout<<"sizeof v="<<v.size()<<"\n";
    cout<<"size of v="<<v.capacity()<<"\n";

    cout<<v.size()<<"\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    v.pop_back();
    cout<<"\ndelete\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }

}