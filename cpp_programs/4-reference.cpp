// Only used in Cpp Language not in C
#include<iostream>
using namespace std;
int main(){
    int a=10; 
    int &r=a; // Reference variable r requires an initializer (a) (to which it is referring to...whose nickname is r)
    int b=20;
    r=b; // This doesn't mean r is referring to b; it means that the value of b is stored in r(so in a(as it is a same variable))
    cout << r << ", " << a;    
}
// Note :: Reference doesn't consume memory. It uses same memory of a. As it is a same variable. Variable a have a nickname i.e., r(reference variable).
// Used in Parameter Passing.
// For writing small functions, we use references instead of pointer.
// a --> variable. [int a; or can also be initialised -> int a=10;]
// &r --> reference var [int &r=a;(it it important to initialize a reference variable after declaring it. In a same line.)]
// *p --> pointer which can store address [int *p; p=a; or can also be initialised -> int *p=&a;]