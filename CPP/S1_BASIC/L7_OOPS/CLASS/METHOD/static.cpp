#include<iostream>
using namespace std;
class counter{
    private:
    static int count;
   // static int x=0; can not initialize
    public:
    counter(){
        count++;
    }
    static int getcount(){
        return count;
    }
};
int counter:: count=0;//initialize;
int main()
{
    counter c1;
    cout<<counter::getcount();//static method is called by class only
    return 0;
}
