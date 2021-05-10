// do not use any gaps and any special characters in naming the C++ file
//underscors can be use while naming the files
#include <iostream>
// there are two type  scopes in c++
// 1.globlal variable
// 2.local variable
// global variable :
// global variable can be acessed every where in the programm
// local variable :
// local variable can be accessed inside only the function where it is defined

// Data Types :
// there are 3 types of data types :
// 1.built in data types(int ,float,char,double,bool)
// 2.userdefined datatypes (struct,union,enium)
// 3.derived data types (array, pointer,etc)
using namespace std;
int main()
{
    int a = 5;
    // int data type
    int e = 5, b = 6, c = 8;
    // declaring multiple same data type at a time
    float d = 1.234;
    // float data type
    char f = 'd'; //do not use double quote to declare the char,it throws an error
    // char data type
    double g = 1.23243435566767678;
    bool is_true = true;
    bool is_false = false;
    // double is used to declare float variable swith more precision
    cout << a << '\n'
         << b << '\n'
         << c << '\n'
         << d << '\n'
         << e << '\n'
         << f << '\n'
         << g;
    cout << '\n'
         << is_true << '\n'
         << is_false;
    // generally the bool is printed true is taken as 1, and value of false is prnted as 0
    printf("%d",a);
    // printf and scanf can also be used to take input and print output 
    // printf and scanf are used while workig with the millions of inputs and outputs because they are quite fast than cout and cin 
}

// RULES FOR DECLARTING THE VARIABLE NAMES :
// variable names should start with only alphabets and under scores only bu tnot with numbers;
// variable names should not be the reversed key words
// variable names can be long upto 255 characters
