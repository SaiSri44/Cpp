#include <iostream>
using namespace std;

int main()
{
    cout << "this file is about type casting and reference  variables" << endl;
    int a = 5;
    float n = 4.54;
    // we can pass the value by changing its type here comes the example

    cout << "the value of 4.54 is taken as double by the complier " << sizeof(4.54) << endl;
    // by default the value of 4.54 will be doubel not float ,double occupies 8 bytes of memory
    cout << "converting the double value to float " << sizeof(4.54f) << endl;

    // the size of the double is 8 bytes, now the size of the 4.54f will be only the 4 bytes because by using the subscript f we converting the
    // double to float,which has only sixe of 4 bytes

    cout << "convering the double value to long double " << sizeof(4.54l) << endl;
    //   converitng the float value to long double,which has 16 bytes memory

    //  Reference Variables

    //   suppose lets take the int x which hsa value of 8
    int x = 8;
    int &y = x;
    //  here we didin't assign the value of y to 8, explicitly but the  value of y is also 8,becasue y is reference to x
    //  that mean teh y holds points to the same location that x points
    // this is known as reference , if we change the value of x then the automatically the the value of y changes
    // lets's check it
    cout << x << endl;
    cout << y << endl;

    //  type casting

    // type casting is nothing but the changing the type of the variable
    // we can do it in two ways
    // let's convert float 4.54 to int
    // method 1 (int)4.54 --------> (datatype)value
    // method 2 int(4.54) ---------> datatype(value) ------>similar to python type casting
    // let's code it
    float z = 5.4646;
    int m = 54;
    cout << "type casting to int by method1 " << (int)z << endl;
    cout << "type casting to int by method2  " << int(z) << endl;
    cout << "type csstig to flaot by method2  " << float(m) << endl;
    cout << "type casting to float by method1 " << (float)m << endl;

    return 0;
}