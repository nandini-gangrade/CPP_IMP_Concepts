//Program
// #include<stdio.h>
// #include<iostream>
// using namespace std;
// class Arithmatic{
//     private:
//         int a;
//         int b;
//     public:
//         Arithmatic(int a, int b){
//             this->a=a;
//             this->b=b;
//         }
//         int add(){
//             int c=a+b;
//             return c;
//         }
//         int sub(){
//             int c=a-b;
//             return c;
//         }
// };
// int main(){
//     Arithmatic ar(10,5),ar1(20,10);
//     cout<<"Add: "<<ar.add()<<endl<<"Sub: "<<ar.sub()<<endl;
//     cout<<"Add: "<<ar1.add()<<endl<<"Sub: "<<ar1.sub()<<endl;
// }

//Functions outside the class
// #include<stdio.h>
// #include<iostream>
// using namespace std;
// class Arithmatic{
//     private:
//         int a;
//         int b;
//     public:
//         Arithmatic(int a, int b);
//         int add();
//         int sub();

// };
// Arithmatic::Arithmatic(int a, int b){
//     this->a=a;
//     this->b=b;
// }
// int Arithmatic::add(){
//     int c=a+b;
//     return c;
// }
// int Arithmatic::sub(){
//     int c=a-b;
//     return c;
// }
// int main(){
//     Arithmatic ar(10,5),ar1(20,10);
//     cout<<"Add: "<<ar.add()<<endl<<"Sub: "<<ar.sub()<<endl;
//     cout<<"Add: "<<ar1.add()<<endl<<"Sub: "<<ar1.sub()<<endl;
// }

// Converting the above program into template
#include<stdio.h>
#include<iostream>
using namespace std;
template<class T>
class Arithmatic{
    private:
        T a;
        T b;
    public:
        Arithmatic(T a, T b);
        T add();
        T sub();
        T no();
};
template<class T>
Arithmatic<T>::Arithmatic(T a, T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmatic<T>::add(){
    T c=a+b;
    return c;
}
template<class T>
T Arithmatic<T>::sub(){
    T c=a-b;
    return c;
}
template<class T>
T Arithmatic<T>::no(){
    return a;
}
int main(){
    Arithmatic<int> ar(10,5);
    Arithmatic<float> ar1(2.55,2.44);
    Arithmatic<char> r('A','B');
    cout<<"Add: "<<ar.add()<<endl<<"Sub: "<<ar.sub()<<endl;
    cout<<"Add: "<<ar1.add()<<endl<<"Sub: "<<ar1.sub()<<endl;
    cout<<"A:"<<(int)r.no();
}