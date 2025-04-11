#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<tuple>
int main()
//we can create multiple coloumn with the help of tupel while in pair we only create 2 coloumn
{
    tuple<int,string,int>tp{101,"honey",21};
    //tp=make_tuple(102,"sunny",20);  //another way to declare a tuple
    cout<<get<0>(tp)<<"\n";
    cout<<get<1>(tp)<<"\n";
    cout<<get<2>(tp)<<"\n";

}