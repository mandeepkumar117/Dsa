#include<iostream>
using namespace std;
#include<forward_list>//insertion and deletion is done from the front
int main(){
    forward_list<int>f1;
    f1.push_front(10);
    f1.push_front(4);
    f1.push_front(21);
    f1.push_front(7);
    f1.push_front(8);
    int d;
    cout<<"enter value u want to delete";
    cin>>d;
    for(auto it=f1.begin(); it!=f1.end();++it){  //another way to write a code in this for loop when we dont know the end 
        cout<<*it<<"\t";
    }
    cout<<"\n";
    for(auto p:f1){
        cout<<p<<"\t";

    }
    f1.pop_front();
    cout<<"\n afte delete\n";
    for(auto p:f1)
    {
        cout <<p<<"\t";

    }
    f1.push_front(800);
    cout<<"\n after insertion\n";
    for(auto p:f1)
    {
        cout<<p<<"\t";
    }
}