#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    float marks;
    mutable int seatno;//now it is allowed to make change in const function
    public:
    student(int l,int m,int s){
        roll=l;
        marks=m;  
        seatno=s; 
    }
    int getroll() const{
        // roll=3; not allowed
        return roll;
    }
    float getmarks() const{
        return marks;
    }
    int getseatno() const{
        // seatno=9; it is allowed now
        return seatno;
    }

};
int main(){
    student s1(2,78,5);
    cout<<s1.getroll()<<endl;
    cout<<s1.getmarks()<<endl;
    cout<<s1.getseatno();
    return 0;

}