#include<iostream>
using namespace std;
class Rectangle{
    //default is private
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void area(){
        cout<<length*breadth;
    }

};
int main()
{
    Rectangle r(34,89);
    r.area();
    return 0;
}