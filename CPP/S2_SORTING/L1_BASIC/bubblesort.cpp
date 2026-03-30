#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>&v){
   int n=v.size();
   for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
         if(v[j]>v[j+1]){
            int t=v[j];
            v[j]=v[j+1];
            v[j+1]=t;
         }
      }
   }
}
int main(){
   vector<int>arr={23,12,34,89,21};
   bubblesort(arr);
   for(int i:arr){
      cout<<i<<" ";
   }
   return 0;
}