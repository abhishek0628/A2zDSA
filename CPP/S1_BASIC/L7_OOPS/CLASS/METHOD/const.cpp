#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int roll;
    float marks;
    mutable int seatno;//now it is allowed to make change in const function
    public:
    student(string name,int age,int roll,float marks,int seatno){
        this->name=name;
        this->age=age;
        this->roll=roll;
        this->marks=marks;
        this->seatno=seatno;
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
    string getinfo(){
    return "Name: " + name + 
           ", Age: " + to_string(age) + 
           ", Seat: " + to_string(seatno);
}

};
int main(){
    student s1("alex",12,2,78,5);
    cout<<s1.getroll()<<endl;
    cout<<s1.getmarks()<<endl;
    cout<<s1.getseatno()<<endl;
    cout<<s1.getinfo();
    return 0;

}