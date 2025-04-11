#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v;
    int size,n;
    cout<<"\n entersize\n";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"\n enter value for "<<i<<"index\n";
        cin>>n;
        v.push_back(n);
    }
    cout<<"\result\n";
    for(auto p:v){
        cout<<p<<"\t";
    }
}