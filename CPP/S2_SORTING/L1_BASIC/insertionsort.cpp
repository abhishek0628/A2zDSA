#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>&v){
   int n=v.size();
   for(int i=1;i<n;i++){
      int key=v[i];
      int j=i-1;
      while(j>=0 && key<v[j]){
         v[j+1]=v[j];
         j--;
      }
      v[j+1]=key;
   }
}
int main(){
   vector<int>arr={23,12,34,89,21};
   insertionsort(arr);
   for(int i:arr){
      cout<<i<<" ";
   }
   return 0;
}