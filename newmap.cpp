#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
int main()
{

    map<int,string>mp{{101,"amit "},{100,"sumit"},{102,"dinesh"}};
    for(auto p:mp){
        cout<<p.first<<":"<<p.second<<"\n";
    }
    map<string,int>student{{"anju",12},{"ashok",23},{"amit",20}};
    for(auto i=student.begin();i!=student.end();i++){
        cout<<i->first<<","<<i->second
    }

}



    // map<int,string>up;
    // up.insert({109,"anup"}); 
    // up.insert({32,"rupesh"});
    // up.insert({10,"ravi"});
    // for(auto p:up){
    //     cout<<p.first<<","<<p.second<<"\n";
    // }

//did not allow duplicacy and not sorte