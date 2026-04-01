#include<stdio.h>
void maxheapify(int arr[],int n,int i){
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<n&&arr[left]>arr[largest] ){
        largest=left;

    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(i!=largest){
        int t=arr[i];
        arr[i]=arr[largest];
        arr[largest]=t;
       maxheapify(arr,n,largest);
    }
}
void minheapify(int arr[],int n,int i){
    int left=2*i+1;
    int right=2*i+2;
    int smallest=i;
    if(left<=n&&arr[left]<arr[smallest] ){
        smallest=left;

    }
    if(right<=n && arr[right]<arr[smallest]){
        smallest=right;
    }
    if(i!=smallest){
        int t=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=t;
        minheapify(arr,n,smallest);
    }
}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int t=arr[0];
        arr[0]=arr[i];
        arr[i]=t;
        maxheapify(arr,i,0);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}