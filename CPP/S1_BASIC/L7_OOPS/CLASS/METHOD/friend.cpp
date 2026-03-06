#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    friend int calculatearea(Rectangle r);
};
class A {
    friend class B;
private:
    int x;
};

class B {
public:
    void show(A a) {
        cout << a.x;
    }
};
int calculatearea(Rectangle r){
    return r.length * r.breadth;
}
int main(){
    Rectangle r(10,20);
    cout<<calculatearea(r);
    return 0;

}