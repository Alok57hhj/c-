#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // int a =34;
    // cout<<"the value of a was:"<<a;
    // a=45;
    // cout<<"the value of a is :"<<a;

    // constance in c++

    // const int a =3;
    // cout<<"the value of a is :"<<a;
    // a = 67 you will get an error because u cant change constence.

    // manipulators endl is also a type of manupletor
    // int a = 3,b =78, c = 1233;
    // cout<< "the value of without setw a is:"<<a<<endl;
    // cout<< "the value of without setw b is:"<<b<<endl;
    // cout<< "the value of without setw c is:"<<c<<endl;



    // cout<< "the value of a is:"<<setw(4)<<a<<endl;
    // cout<< "the value of b is:"<<setw(4)<<b<<endl;
    // cout<< "the value of c is:"<<setw(4)<<c<<endl;

    // operator precedence.
    int a =3, b =4;
    // int c = (a*5)+b;
    int c =((((a*5)+b) -45)+87);
    cout<<c;

    return 0;
}