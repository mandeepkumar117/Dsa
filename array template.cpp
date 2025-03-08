//array template


#include<iostream>
using namespace std;
#include<array>
#include<algorithm>

int main(){
    array<int,6>arr{12,23,43,45,65,46};
    sort(arr.begin(),arr.end());
    cout<<"min="<<arr.front();
    cout>>"\n max="<<arr.back();
    cout<<"size of array="<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++){
    	cout<<arr.at(i)<<"\t";
	}
	cout<<"first value of array="<<arr.front();
	cout<<"\n last value of array="<<arr.back();
}

