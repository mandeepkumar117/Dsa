#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    // pair<string,int>p{"sumit",2002};//to store a multiple record we use this tye of notation
    // //or
    // p=make_pair("amit",101);//another way to store pair
    // cout<<p.first<<"\n";
    // cout<<p.second<<"\n";

    vector<pair<int,string>>v;
    v.push_back({101,"sumit"});
    v.push_back({101,"amit"});
    v.push_back({101,"sumita"});
    v.push_back({101,"mita"});
    for(auto p:v)
    {
        cout<<p.first<<","<<p.second<<"\n";
    }

}