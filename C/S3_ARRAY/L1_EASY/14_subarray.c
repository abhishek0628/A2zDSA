#include<stdio.h>
#include<stdlib.h>
int longest(int arr[],int n,int key){
    int len=0;
    int maxlen=-1;
    int sum=0;
    int left=0;
    int end=-1;
    int start=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
        
        while(sum>key &&left<right){
            sum-=arr[left];
            
            left++;
        }
        if(sum==key){
            len=right-left+1;
            if(len>maxlen){
                maxlen=len;
                start=left;
                end=right;
            }
        }
    }
    printf("%d %d\n",start,end);
    return maxlen;
}
int main(){
    int arr[]={10,5,2,7,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("\n");
    printf("%d",longest(arr,n,15));
    return 0;
}