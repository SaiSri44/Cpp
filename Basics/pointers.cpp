// in this we would discuss about pointers
//  ----------------Pointer ---------------
// pointer is nothing but the data type which holds the address of the another data type 
// syntax for representing the pointer is datatype *name 
#include<iostream>

using namespace std;

int main() 

{
         int a = 8;
         int *b = &a;
         cout<<endl;
         cout<<"the value of a is "<<a<<endl;
         cout<<"the address of a is "<<&a<<endl;
         cout<<"the value of b is equal to the address of the a  "<< b <<endl;
         cout<<"the b holds the address of the a ,and the pointert to b is equal to the value of a "<< *b<<endl;
             
    //    -----------pointer to pointer -------
    // the syntax for declaring the pointer to ponter is data type**name 
    int** c = &b;
    // here c is the pointer to pointer to variable ,it holds the address of the another pointer 
    cout<<endl<<endl;
    cout << "the address of b is "<<&b <<endl;
    cout << "the value at c is equal to the addresss of the  b is "<< c <<endl;
    cout << "the pointer to pointer value of c is "<< **c <<endl;

    return 0;
    
   
   
   
    
   
}