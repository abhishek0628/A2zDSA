// //Adjancy matrix
#include<stdio.h>
#include<stdlib.h>
#define V 5
void addEdge(int matrix[V][V],int i,int j){
    if(i>=0 && i<V && j<V &&j>=0){
        matrix[i][j]=1;
        matrix[j][i]=1;
    }
    
}
int main(){
    int matrix[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            matrix[i][j]=0;
        }
    }
    addEdge(matrix,0,1);
    addEdge(matrix,1,2);
    addEdge(matrix,2,3);
    addEdge(matrix,3,4);
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}