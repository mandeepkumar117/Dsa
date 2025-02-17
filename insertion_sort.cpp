 #include<iostream>
using namespace std;
void insrt(int arr[], int s)
{
	for(int i=1; i<s-1; i++)
	{
		int chotu=i;
		while(chotu>0 && arr[chotu]<arr[chotu-1])
		{
			int tmp;
			tmp=arr[chotu-1];
			arr[chotu-1]=arr[chotu];
			arr[chotu]=tmp;
			chotu--;
		}
	}
}
int main(){
    int arr[]={3,1,2,2,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s;i++)
    {
    	cout<<arr[i]<<"\n";
	}
	insrt(arr,s);
	cout<<"\n after applying insertion sort\n";
	for(int i=0; i<s; i++)
	{
		cout<<arr[i]<<"\n";
	}
}

