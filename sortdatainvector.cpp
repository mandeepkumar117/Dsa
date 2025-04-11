#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector<int>v1{10,4,7,13,2,1};
    sort(v1.begin(),v1.end(),greater<int>());
    vector<int>v2{100,300,400,500};
    cout<<"\ndata of v1\n";
    for(auto k:v1)
    {
        for(auto k:v1){
            cout<<k<<'\t';
        }
        cout<<"\ndata of v2\n";
        for(auto k:v1){
            cout<<k<<'\t';
        }
        v1.swap(v2);
        cout<<"\n after swapping\n";
        cout<<"\ndata of v1\n";
        for(auto k:v1){
            cout<<k<<"\t";
        }
        cout<<"\ndata of v2\n";
        for(auto k:v2){
            cout<<k<<"\t";
        }
    }
}