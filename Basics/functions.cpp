// functions help in do not writing the code again and again
// function includes the three steps  :
// 1.function declaration
// 2.function definition
// 3.function calling

// ----------function declaration---------
// this mean that by declaring the function we are saying the program that the you will find the function in the programm .float

// ----------function calling------------
// function calling mean we are calling the function to get executed. whenever we require the use of function we call it

// ------------function definition
// this is the body of the function,whatever we want the function to do we write it here

// NoTE :
// FUNCtions can also be defined without using the function declaration , in such case function defimition should be written before the function calling ,otherwise it raises the errror

// by writing the function declaration we can write the function definition anywhere in the programm, we can write it before the function call or after the function call

#include <iostream>

using namespace std;

void saisri(); //function declaration

void angajala() //writing the function definiton before the function call 
{
    cout << "this is the second function,for this we did not defined the function definiton" << endl;
}
int main()

{
    saisri();   //function calling
    angajala(); //function calling,

    return 0;
}

void saisri()
{
    cout << "this is the first function,for this we defined the decalration" << endl;
}