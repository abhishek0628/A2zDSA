#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
    string getinfo(){
        return "Name: "+name+
        ", Age: "+to_string(age);
    }
};
int main(){
    person p("alex",23);
    cout<<p.getinfo();
    return 0;
}