#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool cybrome(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>v{3,5,1,2,7,8};
    sort(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<"\n";
    }
    cout<<[](int a,int b){return a>b;}(4,20);
    cout<<"\n";
    sort(v.begin(),v.end(),less<int>());// ye inbuilt h
    sort(v.begin(),v.end(),greater<int>());//ye inbult h
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});//ye hame ne khud ka banaya h
    for(auto p:v){
        cout<<p<<"\t";
    }
}
// all_of();none_of();any_of(); ye 3 function h jo hame bool value return karte h
// all_of() agar sare element true h to true return karega