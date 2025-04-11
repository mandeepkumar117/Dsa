#include<iostream>
#include<stack>//stack follow the LIFO APPROACH (last in first out)
//there are four function = push(),pop(),top(),empty()

using namespace std;
int main(){
    stack<int>st;
    st.push(34);
    st.push(4);
    st.push(12);
    st.push(5);
    // while(!st.empty()){
    //     cout<<st.top()<<"\t";
    //     st.pop();
    // }
    // if(st.empty())
    // {
    //     cout<<"stack is empty";
    // }
    // else{
    //     cout <<"not empty";
    // }
    cout<<st.top();
    cout<<"\nstack is"<<st.empty();
    st.pop();
    cout<<"\n";
    cout<<"top="<<st.top();
}