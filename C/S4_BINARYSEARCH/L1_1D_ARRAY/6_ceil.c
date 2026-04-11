#include<stdio.h>
int Ceil(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=key){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={3,4,4,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",arr[Ceil(arr,n,5)]);
    return 0;
}