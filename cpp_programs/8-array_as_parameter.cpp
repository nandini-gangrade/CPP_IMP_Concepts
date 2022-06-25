#include<stdio.h>
#include<iostream>
using namespace std;

// void func(int A[],int n){ // []-> specifically for arrays, can use * also for pointing integer or array
// // arrays are passed by address; n-> passed by value
// // printing all the elements of array
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<endl;
//     }
// }
// int main(){
//     int A[]={1,2,3,4,5};
//     func(A,5);
// }

// Size of an  array
// void func(int A[],int n){
// //    for(int a:A){ cout<<a<<endl; } // (not allowed) It depend on Size of an array
// //    We cannot use for each loop on pointer; we can use for each loop on an array
//     for(int i=0;i<n;i++){
//         cout<<"func :: "<<A[i]<<endl;
//     }
//     cout<<"Size of Array Function Parameter :: "<<sizeof(A)/sizeof(int)<<endl; // 'sizeof' on array function parameter 'A' will return size of 'int*'
//     // size of integer pointer is 8 -> so (size of pointer)/(size of int) = 8/4 = 2
//     A[0]=6; // Value will be  changed in actual array also 
// }
// int main(){
//     int A[]={1,2,3,4,5}; 
//     int n=5;
//     func(A,n);
//     cout<<"Size of Main Function :: "<<sizeof(A)/sizeof(int)<<endl;
//     // cout<<func<<endl;
    // for(int x:A){
//         cout<<"Main :: "<<x<<endl; // Actual parameters changed because we have changed value of A[0]=6 in array function, as [] pointer is pass by address.
//     }
// }

// Returning array as parameter
// int * func(int size){
//     int *p;
//     p = new int[size];
//     for(int i=0;i<size;i++)//array is created in a heap
//         p[i]=i+1;
    
//     return p;
// }
// int main(){
//     int *ptr, sz=5;
//     ptr=func(sz);
//     for(int i=0;i<sz;i++)
//     cout<<ptr[i]<<endl;
// }
// So this is the benefit of Dynamic Memory Arrays is created in heap and is created inside function func,
// but even main function can access it because main function is getting its pointer.
// So if you create anything in a heap then it can be accessed anywhere in the program if you have pointer is available on it