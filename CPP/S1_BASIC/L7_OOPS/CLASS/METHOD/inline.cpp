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

/*🔹 Normal function call
int cube(int x){
    return x*x*x;
}

int main(){
    cube(4);
}

Execution (conceptually):

Jump to function
Execute
Return

That jump has a tiny overhead.*/

/*🔹 With inline
inline int cube(int x){
    return x*x*x;
}

Compiler may convert:

cube(4);

into:

4*4*4;

No function call. No jump. Just direct code.*/