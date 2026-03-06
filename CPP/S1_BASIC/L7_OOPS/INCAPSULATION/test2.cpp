#include<iostream>
using namespace std;
class counter{
    private:
    static int count;
    public:
    counter(){
        count++;
    }
    static int  getcount(){
        return count;
    }
};
class mathutils{
    public:
    static int max(int a,int b){
        if(a>b)return a;
        else return b;
    }
};
int counter::count=0;
int main(){
    counter c1,c2;
    cout<<counter::getcount();
    // mathutils m;
    cout<<mathutils::max(29,54)<<endl;
    return 0;
}