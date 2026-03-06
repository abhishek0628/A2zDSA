#include<iostream>
using namespace std;
class math{
    public:
    inline int cube(int x);
};
inline int math:: cube(int x){
    return x*x*x;
}
int main()
{
    math m;
    cout<<m.cube(4);
    return 0;
}