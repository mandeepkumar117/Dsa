#include <iostream>
using namespace std;

void selection(int arr[],int s){
	for(int i=0;i<s;i++){
		int small=i;
		for(int j=i+1;j<s;j++){
			if(arr[j]<arr[small]){
				small=j;
			}
		}
		int temp=arr[small];
		arr[small]=arr[i];
		arr[i]=temp;
		
	}
}

int main(){
	int arr[]={5,4,3,2,1};
	int s=sizeof(arr)/sizeof(arr[0]);
	
	selection(arr,s);
	
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<" \n ";
}
