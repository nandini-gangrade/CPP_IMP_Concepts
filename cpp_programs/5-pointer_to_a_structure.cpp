#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
// int main(){
//     struct Rectangle r={10,20};
//     struct Rectangle *p=&r;
//     r.length=15;
//     (*p).breadth=25;
//     cout<<r.length<<endl;
//     cout<<p->breadth<<endl;
// }

//Create the object dynamically in the heap using pointer
// int main(){
//     struct Rectangle *p;
//     p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
//     p->length=10;
//     p->breadth=20;
//     cout<<p->length<<endl;
//     cout<<p->breadth<<endl;
// }