#include<iostream>
using namespace std;
#include<forward_list>
#include<vector>
void unq(vector<int>&v)
{
    forward_list<int>f;
    for(int i=0;i<v.size();i++){
        f.push_front(v[i]);
    }
    f.sort();
    f.unique();
    for(auto p:f){
        cout<<p<<"\t";
    }
}
int main(){
    vector<int>v;
    int n,data;
    cout<<"enter size|\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
    }
    unq(v);
}