#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>f1{3,5,1,2,7,8};
    forward_list<int>f2{30,56,18,72,57,99};
    for(auto p:f1)
    {
        cout<<p<<"\t";


    }
    f1.remove(5);
    cout<<'\n';
    cout<<[](int a,int b){return a>b;}(200,30);
    cout<<"\t";
    int n;
    cout<<"enter no\n";
    cin>>n;
    f1.remove_if([n](int a){return a>n;});
    for(auto p: f1)
    {
        cout<<p<<"\t";
    }

}