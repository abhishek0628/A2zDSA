#include<stdio.h>
int main(){
    int arr1[]={1,4,8,12,23,39};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,3,9,10,24,34};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i];
            i++;
        }
        else {
            arr[k++]=arr2[j];
            j++;
        }
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
    for(int p=0;p<k;p++){
        printf("%d ",arr[p]);
    }
    return 0;
}