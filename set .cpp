#include<iostream>
using namespace std;
#include<set>
int main()
{
set<int>s{20,4,1,3,6};
for(auto p:s)
{
    cout<<p<<"\t";
}
s.insert(7);
cout<<"\n";
for(auto p:s)
{
    cout<<p<<"\t";
}
s.erase(20);
cout<<"\n";
auto t=s.find(4);
if(t!=s.end())
{
    cout<<"data found="<<*t<<"\t";
}
else
{
    cout<<"not found";
}
}
