#include<stdio.h>
int isMaxheap(int arr[],int n ,int i){
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<n && arr[left]>arr[largest]){
        return 0;
    }
    if(right<n && arr[right]>arr[largest]){
        return 0;
    }
    
    return isMaxheap(arr,n,left)&& isMaxheap(arr,n,right);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int r=isMaxheap(arr,n,0);
    return 0;
}