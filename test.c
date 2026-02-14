#include<stdio.h>
#include<stdlib.h>
void  swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
// void permute(int arr[],int left,int right){
//    if(left==right){
//     for(int i=0;i<=right;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//    }
//    for(int i=left;i<=right;i++){
//     swap(&arr[left],&arr[i]);
//     permute(arr,left+1,right);
//     swap(&arr[left],&arr[i]);
//    }
// }
void generate(int arr[],int left,int right,int *index,int **result){
    if(left==right){
        for(int i=0;i<=right;i++){
            result[*index][i]=arr[i];
        }
        (*index)++;
        return;
    }
    for(int i=left;i<=right;i++){
        swap(&arr[left],&arr[i]);
        generate(arr,left+1,right,index,result);
        swap(&arr[left],&arr[i]);
    }
}
int **permute(int arr[],int n,int*returnsize){
     *returnsize=fact(n);
    int **result=(int**)malloc(sizeof(int*)*(*returnsize));
    for(int i=0;i<*returnsize;i++){
        result[i]=(int*)malloc(sizeof(int)*n);
    }
    int index=0;
    generate(arr,0,n-1,&index,result);
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // permute(arr,0,n-1);
    // return 0;
    int returnsize=0;
    int **result=permute(arr,n,&returnsize);
    for(int i=0;i<returnsize;i++){
        for(int j=0;j<n;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}