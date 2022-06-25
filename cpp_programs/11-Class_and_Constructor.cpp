// Converting 10-Functions-upon_Structure.c to Class_and_Construuctor.cpp
// Converting C Program to Cpp Program //class
#include<iostream>
using namespace std;
class Rectangle{
    private: // Only member functions can access them
        int length; //data members
        int breadth; //data members
    public:
        Rectangle(int l, int b){ //Constructor //member function
           length=l;
           breadth=b; 
        }
        int area(){ //member function
            return length*breadth;
        }
        int changeLength(int l){//member function
            length=l;
            return length;
        }
};
int main(){
    Rectangle r(10,5); //Declaration and initialization of Object
    // r.area();
    cout<<"Area: "<<r.area()<<endl; //50
    // r.changeLength(20);    
    cout<<"Changed Length: "<<r.changeLength(20)<<endl; //20
}