#include<stdio.h>
// int subarray(int arr[],int n,int k){
//     int sum=0;
//     int count=0;
//     int max=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(sum==k){
//             if(count>max)max=count;

//         }
        
//         else if(sum<0){
//             count=0;
//             sum=0;

//         }
//         count++;
//     }
//     return max;
// }
int subarray(int arr[],int n,int k){
    int sum=0;
    int len=0;
    int maxlen=0;
    int left=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
        while(right==n-1&&left<=right){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            len=right-left+1;
            if(len>maxlen)maxlen=len;
        }
    }
    return maxlen;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int m=subarray(arr,n,k);
    return 0;
}