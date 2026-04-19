/*
Time Complexity:
O(n + max)
- Finding max: O(n)
- Building hash: O(max)
- Counting frequency: O(n)
- Searching result: O(max)

Space Complexity:
O(max)
- Extra hash array used for frequency counting

Note:
- Works only for non-negative integers
- Not suitable if values are large or negative
*/
#include<stdio.h>
#include<limits.h>

int number(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int hash[max];
    for(int i=0;i<max;i++){
        hash[i]=0;
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<max;i++){
        if(hash[i]==1){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m=number(arr,n);
    printf("%d",m);
    return 0;
}