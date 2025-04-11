#include<iostream>
#include<set>
using namespace std;
// set is used to store the data in sorted order as well as not allowed duplicate value.
//there are three type of set
// a. order set
// b. unorder set
// c. multi set
int main(){
    set<int>p;
    p.insert(103);
    p.insert(9);
    p.insert(4);
    p.insert(7);
    p.insert(4);
    for(auto K:p){
        cout <<K<<"\t";
    }
}