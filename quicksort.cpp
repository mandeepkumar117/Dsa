#include<iostream>
using namespace std;
int part(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do
    {
     while(arr[i]<pivot)
     {
        i++;
     }
while(arr[j]>pivot){
    j--;
}
if(i<j)
{
    int tmp;
    tmp=arr[j];
    arr[j]=arr[i];
    arr[i]=tmp;

}
    }while (i<j);
    int tmp;
    tmp=arr[low];
    arr[low]=arr[j];
    arr[j]=tmp;
    return j;
    
}


void qksrt(int arr[],int low,int high){
    int pv;
    if(low<high){   //it check array have more than one value or not 
        
        pv=part(arr,low,high);//it returns pivot element
        qksrt(arr,0,pv-1);
        qksrt(arr,pv+1,high);
    }                     
}
int main(){
    int arr[]={5,9,5,6,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";

    }
    cout<<"\n";
    qksrt(arr,0,s-1);
    cout<<"\after quick sort\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }

}