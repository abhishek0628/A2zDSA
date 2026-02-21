#include<stdio.h>
int subarray(int arr[],int n,int k){
    int maxlen=0;
    int sum=0;
    int left=0;
    int len=0;
    int start=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
       
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;

        }
        if(sum==k){
            len=right-left+1;
            if(len>maxlen){
                maxlen=len;
            }
        }
    }
    for(int i=left-1;i<left+maxlen;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",left);
    printf("\n");
    
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
    printf("%d",subarray(arr,n,k));
    return 0;

}