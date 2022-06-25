#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle ()//Default Constructor
        {
            length=0;
            breadth=0;
        }
        Rectangle (int l,int b);//Parameterized Constructor
        // {
        //     length=l;
        //     breadth=b;
        // }
        int area();//Facilitator
        // {
        //     return length*breadth;
        // }
        int peri();//Facilitator
        // {
        //     return 2*(length+breadth);
        // }
        int getLength()//Accessor
        {
            return length;
        }         
        int setLength(int l)//Mutator
        {
            return l;
        }
        ~Rectangle();//Destructor
        // {
        //     cout<<"I'm Destructor";
        // }
};
//Can write functions outside class
Rectangle::Rectangle(int l,int b){//:: Scope Resolution
    length=l;
    breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::peri(){
    return 2*(length+breadth);
}
Rectangle::~Rectangle(){
    cout<<"I'm Destructor";
}
int main(){
    Rectangle r(5,2);
    // int A = r.area();
    // int P = r.peri();
    // int G = r.getLength();
    // int S = r.setLength(10);
    // cout<<"Length: "<<<<endl;    
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Peri: "<<r.peri()<<endl;
    cout<<"GetLength: "<<r.getLength()<<endl;
    cout<<"SetLength: "<<r.setLength(10)<<endl;
}