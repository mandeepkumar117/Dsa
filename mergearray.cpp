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
    cout<<'\n';
    for(auto p:f2)
    {
        cout<<p<<"\t";

    }
    f1.sort();
    f2.sort();
    f1.merge(f2);//it will merge and short two list when the two list data already sorted
    cout<<"\n after merge \n";
    for(auto p:f1){
        cout<<p<<"\t";
    }

}