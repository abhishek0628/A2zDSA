#include<stdio.h>
void reverse(int arr[],int start,int end){
    if(start>=end)return;
    int t=arr[start];
    arr[start]=arr[end];
    arr[end]=t;
    reverse(arr,start+1,end-1);
}
void kreverse(int arr[],int n,int k){
    int l=0;
    while(l<n){
        int r=l+k-1;
        if(r>=n){
            r=n-1;
        }
        reverse(arr,l,r);
        l=l+k;
    }
}
int main(){
    int arr[]={2,9,5,12,34,76,762,321};
    int n=sizeof(arr)/sizeof(arr[0]);
    kreverse(arr,n,3);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}