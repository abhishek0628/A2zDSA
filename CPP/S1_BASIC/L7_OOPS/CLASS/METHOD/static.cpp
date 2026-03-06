#include<iostream>
using namespace std;
class counter{
    private:
    static int count;
    public:
    counter(){
        count++;
    }
    static int getcount(){
        return count;
    }
};
int counter:: count=0;
int main()
{
    counter c1;
    cout<<counter::getcount();//static method is called by class only
    return 0;
}
