#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1{1,4,5,8};
    vector<int>v2{2,1,1};
    int x=0;
    int y=0;
    for(int i=0;i<v1.size();i++){
        x=x*10+v1[i];
    }
    for(int j=0;j<v2.size();j++){
        y=y*10+v2[j];
    }
    cout<<"result="<<x+y;
}