#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
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
    vector<int>::iterator it=v.begin();
    v.erase(it+1);
    cout<<"\nafter delete result\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    v.insert(it+2,999);
        cout<<"\nafter insert result\n";
        for(auto p:v){
            cout<<p<<"\t";
        }
    }