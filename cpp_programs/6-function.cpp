#include<stdio.h>
#include<iostream>
using namespace std;
//   Function
int add(int a, int b)// Declaration of function
{ // Defination of a function
    int  c;    
    c=a+b;
    return c;
}
int main(){
    int x=2,y=3,z;
    z=add(x,y); // Function Calling
    cout<<z;
}