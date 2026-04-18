int reducesum(int arr[],int n){
    if(n==1)return arr[0];
    if(n<=0)return 0;
    int mid=(n+1)/2;
    int n1=mid;
    int n2=n-mid;
    int *temp=(int*)malloc(sizeof(int)*n);
    int min=n1<n2?n1:n2;
    int i;
    for(i=0;i<n2;i++){
        temp[i]=arr[i]*2+arr[mid+i]*3;
    }
    if(n1>n2){
        temp[i]=arr[i];
    }
    // temp[min]=arr[min];
    int result =reducesum(temp,n1);
    return result;
   
}
int main(){
    // int arr[]={31,23,66,90,76,43};
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // reorder2(arr,n);
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    printf("%d",reducesum(arr,n));
    return 0;
}