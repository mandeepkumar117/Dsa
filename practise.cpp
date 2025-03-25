#include<iostream>
using namespace std;
void bubble(int arr[],int s)
{
int c=0;
for(int i=0; i<s; i++)
{
bool f=true;
for(int j=0; j<s-i-1; j++)
{
    c++;
    if(arr[j]>arr[j+1])
    {
        int temp;
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        f=false;
    }
}
if(f==true)
{
    break;
}
}
cout<<"total count="<<c<<"\n";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
    bubble(arr,s);
    cout<<"/n affter swapin array\n";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
