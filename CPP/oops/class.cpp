#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    void drive()
    {
        cout<<brand<<" "<<"is driving "<<model<<endl;
    }
};
int main()
{
    Car mycar;
    mycar.brand="toyota";
    mycar.model="corolla";
    mycar.drive();
    return 0;
}