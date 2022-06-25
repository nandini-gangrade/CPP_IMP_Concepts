#include<stdio.h>
#include<iostream>
using namespace std;

// Call by Value
// int add(int x, int y){
//     int z;
//     z=x+y;
//     return z;
// }
// int main(){
//     int a,b,c;
//     a=10;
//     b=20;
//     c=add(a,b);
//     cout<<a<<"+"<<b<<"="<<c;
// }

// Call by Address
// void swap(int *x, int *y){ // * for pointer -> pointing to an address
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(&a,&b); // address
//     cout<<"First variable "<<a<<endl; // 20
//     cout<<"Second variable "<<b; // 10
// }

// Call by Reference
// void swap(int &x, int &y){ // & for reference -> x means a, y means b (nicknames)
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     swap(a,b); 
//     cout<<"First variable "<<a<<endl; // 20
//     cout<<"Second variable "<<b; // 10
// }