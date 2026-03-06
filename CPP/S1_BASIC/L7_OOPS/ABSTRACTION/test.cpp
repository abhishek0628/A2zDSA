#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
    virtual ~shape(){};
};
class circle :public shape{
    public:
    void draw(){
        cout<<"drawing circle"<<endl;
    }
};
class rectangle :public shape{
    public:
    void draw(){
        cout<<"drawing rectangle";
    }
};
int main(){
    shape *s1=new circle();
    shape *s2=new rectangle();
    s1->draw();
    s2->draw();
    return 0;

}