#include<stdio.h>
int main(){
    //declaration
    int num[5];
    int arr[5] = {1, 2};  // becomes {1, 2, 0, 0, 0}
    int arr2[] = {10, 20, 30};  // size = 3
    int size=sizeof(arr2)/sizeof(arr[0]);//3
    for(int i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}