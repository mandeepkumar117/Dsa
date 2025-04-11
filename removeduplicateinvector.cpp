#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v1{2,1,2,4,6,4,1,8};
    sort(v1.begin(),v1.end());
    int x=1;
    for(int a=1;a<v1.size();a++){
        if(v1[x-1]!=v1[a]){
            v1[x]=v1[a];
            x++;
        }
    }
    for(int i=0;i<x;i++){
        cout<<v1[i]<<" \t";
    }

    
}