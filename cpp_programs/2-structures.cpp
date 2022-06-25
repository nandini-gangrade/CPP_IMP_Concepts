#include<stdio.h>
#include<iostream>
using namespace std;


//Memory
// struct Rectangle{
//     int length;  //4bytes
//     int breadth;  //4bytes
//     char color;  //1byte
// };

// int main(){
//     struct Rectangle r1 = {1,2};
//     printf("%lu bytes of memory",sizeof(r1)); //but here it will allocate char 4 bytes of memory and uses 1 byte = 4+4+4 = 12 bytes of memory
// }

// //Ways of declaring variable
// struct Rectangle{
//     int length;  //4bytes
//     int breadth;  //4bytes
// }r1; //global
// struct Rectangle r2 = {3,2}; //global
// int main(){
//     struct Rectangle r3 = {1,2}; 
//     printf("%lu \n",r1); // = 0
//     printf("%lu \n",r2.length*r2.breadth); // 3*2 = 6
//     printf("%lu",r3.length*r3.breadth); // 1*2 = 2
// }