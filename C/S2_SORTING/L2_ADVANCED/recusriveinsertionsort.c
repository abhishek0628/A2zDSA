#include<stdio.h>
void sort(int arr[],int n){
    if(n<=1)return;
    sort(arr,n-1);
    int last=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int n;
    printf("Enter sizeof of array: ");
    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        sacnf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
