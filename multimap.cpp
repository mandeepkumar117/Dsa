//allow duplicay and sorte data
#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<int,string>up;
    up.insert({109,"anup"});
    up.insert({32,"rupesh"});
    up.insert({10,"ravi"});
    up.insert({10,"shubham"});
    for(auto p:up){
        cout<<p.first<<","<<p.second<<"\n";
    }
}