#include<iostream>
#include<queue>
using namespace std;
int main(){
    //we can insert the data
   

    deque<int>dq;
    dq.push_front(23);
    dq.push_front(7);
    dq.push_front(43);
    dq.push_front(65);
    cout<<"\nfront="<<dq.front();
    cout<<"\nback="<<dq.back();
    dq.push_back(100);
    cout<<"\nback="<<dq.back();
    dq.pop_back();
    cout<<"\nback="<<dq.back();
    dq.pop_front();
    cout<<"\nfront del="<<dq.front();

    
   
}