
#include<iostream>
using namespace std;
#include<forward_list>//insertion and deletion is done from the front
int main(){
    forward_list<int>f1;
    f1.push_front(10);
    f1.push_front(4);
    f1.push_front(21);
    f1.push_front(7);
    f1.push_front(4);
    for(auto p:f1){
        cout<<p<<"\t";
    }
    f1.sort(); //arrange the data in decending order
    f1.unique();//it will show the unique value only when it is adjecent to each other
    cout<<endl;
    for(auto p:f1)
    {
        cout<<p<<"\t";
    }
}
