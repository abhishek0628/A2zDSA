#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"this is the base class"<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"this is the derived class"<<endl;
    }
};
int main()
{
    base* b;
    derived d;
    b=&d;
    b->show();
    d.show();
    return 0;
}