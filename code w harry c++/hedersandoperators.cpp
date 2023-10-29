
// there are to types of heders files:
// 1. system heder files.
#include<iostream>
// 2. user defined heder files.
// #include"this.h"
using namespace std;
int main()
{
    int a =4,b=5;
    cout<<"operators in c++:"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    // Aarthematic operators
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;

    // assiengment operators used to assigne value.
    // int a=3,int b=9;
    // char d= 'd';

    // comparison operators
    cout<<"following are the comparison operators\n";
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;

    // logical operator
    cout<<"following are the logical operators\n\n";
    cout<<"the value of this ((a==b) &&(a<b)) logical operator  is "<<((a==b) &&(a<b))<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;

    return 0;
}