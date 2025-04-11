#include<iostream>
#include<queue>
using namespace std;
int main(){
    //it follow the pattern of FIFO (First in first out)
    //insert(push ()) the data from rear
    //delete(pop()) from front
    //having empty() &front()

    queue<int>q;
    q.push(20);
    q.push(4);
    q.push(5);
    q.push(32);
    // q.pop();
    // q.pop();
    // cout<<"\n"<<q.front();
    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();

    }

}