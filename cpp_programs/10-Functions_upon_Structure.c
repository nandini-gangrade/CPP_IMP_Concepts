// #include<iostream>
// using namespace std;
#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}
void changeLength(struct Rectangle *r,int l){
    r->length=20;
}
int area(struct Rectangle r){
    return r.length*r.breadth;
}
int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    printf("Initial Length=%d\nBreadth=%d\n",r.length,r.breadth);
    //cout<<"length: "<<r.length<<" and breadth: "<<r.breadth<<endl;
    // area(r); => //not working, there need to assign it into another variable
    int rec=area(r); 
    printf("Area=%d*%d=%d\n",r.length,r.breadth,rec);
    changeLength(&r,10);
    printf("Changed Length=%d\n",r.length);
    //cout<<"Changed length: "<<r.length;
}