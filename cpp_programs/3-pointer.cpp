#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

// how to use pointer
// NOTE :: For declaration and initialization of pointer we use *
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     cout << a << endl; //10
//     cout << *p << endl; //10
//     cout << &a << endl; //address: 0x3463dffc24
//     cout << p << endl; //address: 0x3463dffc24
// }

// Using Pointer in Array 
// int main(){
//     int A[5]={1,2,3,4,5};
//     int *p;
//     // p=A; // directly accessing array
//     p=&A[0]; // accessing 0th index array (indirectly accessing array)    
//     for(int i=0;i<10;i++){
//         cout << p[i] << endl;
//     }
// }

// Using Pointer for accessing Heap Memory
// int main(){
//     int *p;
//     // Using malloc() in C Language to allocate memory
//     // p=(int *)malloc(5*sizeof(int)); // 5 is size of array....or something you are creating (5 bytes * 4byte(int) = 20bytes of memory will be allocated)
//     p = new int[5]; // Using new in Cpp Language to allocate memory
//     p[0]=1,p[1]=2,p[2]=3,p[3]=4,p[4]=5;
//     for(int i=0;i<5;i++){
//         cout<<p[i]<<" "; //1 2 3 4 5
//     }
//     delete [] p; // To deallocate memory in Cpp Language
//     // free(p); // To deallocate memory in C Language
// }
// Note:: When memory is not required you should delete the memory; if the program is very short, heap memory is automatically deleted; u can skip them in ds also

// Important thing about Pointer
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int main(){
//     int *p1; // 4 bytes
//     char *p2; // 1 byte
//     float *p3; // 4 bytes
//     double *p4; // 8 bytes
//     struct Rectangle *p5;
//     cout << sizeof(p1) << " bytes" <<endl; // 8 bytes
//     cout << sizeof(p2) << " bytes" <<endl; // 8 bytes
//     cout << sizeof(p3) << " bytes" <<endl; // 8 bytes
//     cout << sizeof(p4) << " bytes" <<endl; // 8 bytes
//     cout << sizeof(p5) << " bytes" <<endl; // 8 bytes  
// }
// Note:: Size of a Pointer is Independent of its Datatype