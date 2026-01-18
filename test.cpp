#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(23);
    v.push_back(24);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}