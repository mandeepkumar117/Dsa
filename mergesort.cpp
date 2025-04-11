#include<iostream>
using namespace std;
void combine(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int K=low;
    int bk[high+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            bk[K]=arr[i];
            i++;
            K++;

        }
        else{
            bk[K]=arr[j];
            j++;
            K++;
        }
    }
    while(i<=mid){
        bk[K]=arr[i];
        i++;
        K++;

    }
    while(j<=high){
        bk[K]=arr[j];
        j++; 
        K++;

    }
    for(int i=low;i<K;i++){
        arr[i]=bk[i];
    }
}


void mergesrt(int arr[],int low ,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesrt(arr,low,mid);
        mergesrt(arr,mid+1,mid);
        combine(arr,low,mid,high);

    }
}


int main(){
    int arr[]={9,2,3,1,6,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";

    }
    cout<<"\nafter merge short";
    mergesrt(arr,0,s-1);
    cout<<"\after quick sort\n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }

}