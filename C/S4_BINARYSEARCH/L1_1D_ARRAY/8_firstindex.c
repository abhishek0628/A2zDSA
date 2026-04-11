#include<stdio.h>
int Firstindex(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key){
            
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={3,4,4,4,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",Firstindex(arr,n,4));
    return 0;
}