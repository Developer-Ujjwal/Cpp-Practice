#include<iostream>
using namespace std;
class Car{
public:
void display1(){
cout<<"\nCar Class";
}
};
class FuelCar:public Car{
public:
void display2(){
cout<<"\nFuel Class";
}
};
class ElectricCar:public Car{
public:
void display3(){
cout<<"\nElectric Class";
}
};
class HybridCar:public Car,public FuelCar,public ElectricCar{
public:
void display4(){
cout<<"\nHybrid Class";
}
};
int main(){
    HybridCar H;
    
    H.display2();
    H.display3();
    H.display4();

}