//forward list is a singly linked list
//used in directed graph 
//front se insertion or front se deletion
//insertion and deletion is done from the front
//it dose not have size function
//it find unique using unique function but the condition 1st we have to sort the data
//before merge you have to sort the data of both the forward list  and the merge function act as a merge sort
//reverse function is used to reverse the data of the forward list

#include<iostream>
using namespace std;
#include<forward_list>//insertion and deletion is done from the front
int main(){
    forward_list<int>f;
    f.push_front(10);
    f.push_front(4);
    f.push_front(21);
    f.push_front(7);
    f.push_front(10);
    f.sort();
    f.unique();
    cout<<"after unique\n";
    for(auto p:f){
        cout<<p<<"\t";
    }
    f.pop_front();
    cout<<"\n after delete\n";
    for(auto p:f){
        cout<<p<<"\t";
    }
    cout<<"\nlength="<<distance(f.begin(),f.end());
    f.reverse();
    cout<<"\n after reverse\n";
    for(auto p:f){
        cout<<p<<"\t";
    }

    cout<<"\n merge \n";
    forward_list<int>f1{3,5,1,2,7,8};
    forward_list<int>f2{30,56,18,72,57,99};
    f1.sort();
    f2.sort();


    f1.merge(f2);
    for(auto p:f1){
        cout<<p<<"\t";
    }

} 