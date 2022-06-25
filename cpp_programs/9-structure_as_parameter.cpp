#include<stdio.h>
#include<iostream>
using namespace std;

// 1. Call by Value
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void area(struct Rectangle r1){ // Formal Parameters
//     r1.length++; //changes in formal parameters will not change actual parameters :: 10++=11
//     cout<<"Area Function: "<<r1.length<<"*"<<r1.breadth<<"="<<r1.length*r1.breadth<<endl;  //11*5=55
// }
// int main(){
//     struct Rectangle r={10,5}; // Actual Parameters
//     area(r);
//     cout<<"Main Function: "<<r.length<<"*"<<r.breadth<<"="<<r.length*r.breadth<<endl; //10*5=50
// }
// Important :: When we pass rectangle structure as parameter then both the values(length and breadth) will be  copied in r1, a new structure will be created

//2. Call by Reference
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void area(struct Rectangle &r1){ // Formal Parameters
//     r1.length++; //changes in formal parameters will change actual parameters :: 10++=11
//     cout<<"Area Function: "<<r1.length<<"*"<<r1.breadth<<"="<<r1.length*r1.breadth<<endl;  //11*5=55
// }
// int main(){
//     struct Rectangle r={10,5}; // Actual Parameters
//     area(r);
//     cout<<"Main Function: "<<r.length<<"*"<<r.breadth<<"="<<r.length*r.breadth<<endl; //11*5=55
// }
// Actually r1 and r are same...alias/nickname

//3.  Call by Address
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void area(struct Rectangle *p){ 
//     p->length++; // Change on formal parameters will also change actual parameters ::  10++ = 11
//     cout<<"Area Function: "<<p->length<<"*"<<p->breadth<<"="<<p->length*p->breadth<<endl; // 11*5=55
// }
// int main(){
//     struct Rectangle ptr={10,5};
//     area(&ptr);
//     cout<<"Main Function: "<<ptr.length<<"*"<<ptr.breadth<<"="<<ptr.length*ptr.breadth<<endl; // 11*5=55
// }

//=> Structure can be passed by Call by Value even if it is having an Array (as array is passed by address only so how it it possible)
// Actually, when a structure is passed by Value, even if it is having an array, an array will be created separately in the member and it is filled.   
// So  imagine all these values are called by  compiler automatically just done by the compiler. So this is Time Consuming. This is the reason arrays are passed by reference.
// struct Test{
//     int A[5];
//     int n;
// };
// void fun(struct Test t1){ // array will be  copied on a formal parameter
//     t1.A[0]=10; // As it is passed by value...there will be no change in actual parameters
//     t1.A[1]=9;
//     cout<<"func:-"<<endl;
//     for(int i=0;i<t1.n;i++){
//         cout<<t1.A[i]<<endl;
//     }
// }
// int  main(){
//     struct Test t={{1,2,3,4,5},5};
//     fun(t);
//     cout<<"Main:-"<<endl;
//     for(int i=0;i<5;i++){
//         cout<<t.A[i]<<endl;
//     }
// }

//=> Creating a variable of type structure on heap inside a function and return its address
// struct Rectangle{
//     int length;
//     int breadth;
// };
// struct Rectangle *func(){
//      struct Rectangle *ptr;
//      ptr=new Rectangle; // will create an object of type rectangle on heap
//     // ptr=(struct Rectangle *)malloc(sizeof(struct Rectangle));
//     ptr->length=10;
//     ptr->breadth=5;
//     return ptr;
// }
// int main(){
//     struct Rectangle *p=func();
//     cout << "length: "<< p->length<<endl<<"breadth: "<<p->breadth<<endl;
//     return 0;
// }