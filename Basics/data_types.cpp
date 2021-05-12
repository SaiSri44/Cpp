// in this we will look at the data types in cpp
// there are 3 types of data types in cpp
// they are
// 1. primitive data types
// 2.Derived data types
// 3.User defined data types

// --------primitive datatypes ------------
// 1.int
// 2.char
// 3.bool
// 4.float
// 5.double
// 6.void
// 7.wide_character 

// ----------derived data types-----------
// 1.array
// 2.pointer
// 3.functions
// 4.references 

// ------------user defined data types -----------
// 1.class
// 2.structures
// 3.enum
// 4.unions

// int can be furhter divided into
// 1.shor int
// 2.int
// 3. unsigned int
// 4.long int
// 5.unsigned long int
// 6.long long int
// 7.unsigned long long int

#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 
long long int binomail_exponentiation(int a, int b)
{
    long long result =1;
    while (b > 0)
    {
        if(b & 1) 
         result*=a;
        a*=a;
        b>>=1; 
    }
    return result;
    
}
int main()

{
    cout << " the size of the short int is : " << sizeof(short int) << " bytes" << endl;
    cout << "the size of the int is : " << sizeof(int) << " bytes" << endl;
    cout << "the size of the unsigned int is : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "the size of the long int is : " << sizeof(long int) <<  " bytes" << endl;
    cout << "the size of the unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "the size of the long long int : " << sizeof(long long int) << " bytes" << endl;
   
    //  finding ranges of the different types of int 

    //  Data type                 size(in bytes)                     Range
    // short int                         2                             -32,768 to 32,768
    // unsigned short int                2                               0 to 65,535 
    // unsigned int                      4                               0 to 4,294,967,295 
    // int                               4                              -2,147,483,648 to 2,147,483,647
    // long int                          4                               -2,147,483,648 to 2,147,483,647
    // unsigned long int                 8                               0 to 4,294,967,295 
    // long long int                     8                                -2^63 to 2^63-1
    // unsigned long long int            8                               0 to 2^128 
    // signed char                       1                               -128 to 127 
    // unsigned char                     1                                0 to 255 
    // float                             4
    // double                            8 
    // long double                       12  


    return 0;
}  