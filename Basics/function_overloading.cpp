// function overload is nothing but the where the two functions have same name but the different parameters 
// this is an example of polymorphism in C++
// first proggram check for the exact match for the function,if not found then char ,unsigned char,short,are promoted to int
// float is promoted to double
#include<iostream>

using namespace std;
// for the below three functions the function name is same,but the arguments are different,so this is an example of function overloading 
void print(int a,int b ) 
{
     cout<<"the sum of a and b are "<< a+b <<endl;
}
void print(float  b )  
{
     cout<<"the value of float b is  " << b <<endl;
}
void print(int a, int b ,int c ) 
{
     cout<<"the sum of three integers is  "<< a + b + c  <<endl;
}
// in function overloading if the no of arguments are different or data types are different then the function overloading occurs, if for the two functions no of arguments and the data type of the arguments are also same,they only differ by return type then it does not belongs to function overloading 
// example 
// void overloading(int a, int b);
// int overloading(int a ,int b);
// here the both the overloading functions differ only by the return type , so they are not belong to function overloading 

// -----------------NOTE---------------------
// SUppose if we pass 10.2 to a function , by default all the float values are doubles ,so if we want only float we should pass them after adding f at the end of the float,this mean we  want only float not the double 
// 10.2 is double 10.2f is the float 
int main() 

{
         
        print(5,10);
        print(4.20 );   
        print(23,34,54) ;
 
          return 0;

} 