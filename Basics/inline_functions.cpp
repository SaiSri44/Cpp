// suppose we defined a function , when the function is called the console moves from the function call to the function definition,and returns back to
// the function call this takes the time, can we write the functions which execute there itself. 

// -----------------inline functions---------
// innline functions are the functioms which execute at the function call itself 
// inorder to define a inline function we should write the keyword inline before the function definition 

#include<iostream>

using namespace std;
inline void saisri() 
{
    cout<<"this is an inline function" << endl;
}

int main() 

{
         

          saisri();//function execution will be done here itself.
          return 0;

}

// ------------Disadvantages of inline functions---------
// inline functions cannnot work properly for the large functions,so it is not a good strategy to use inline functions more oftenly. 
// use inline functions for performing the smaller tasks , such as printing,adding, etc..
// Never use inline functions for recursive calls ,
// do not use inline functions in recursion 
