// in this we will look at the constructors
// we are already seen the need of constructors in the oop of  python
// refer the constuctor python file in oop of python

// in c++ syntax for constructor is different from that of python
// constructor is the function inside the class which has the name that of class name and had no return type

// there are three types of constructors in c++
// 1.non paramaterised constructor
// 2.paramaterised constructor
// 3.copy constructors

// we will look at each of the constructor
#include <iostream>

using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle() //non paramaterised constructor,that mean no parameters
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int l, int b) //paramateised constructor,having parameters
    {
        set_details(l, b);
        // this is will take care of intialising the values,
    }
    rectangle (rectangle &r) // copy constructores 
    {
        length= r.length;
        breadth = r.breadth;
    } 
    // see that the three constructors are the examples of overloading
    void set_details(int l, int b)
    {
        if (l >= 0)
            length = l;
        else
        {
            cout << "inappropriate value of length" << endl;
            length = 0;
        }
        if (b >= 0)
            breadth = b;
        else
        {
            cout << "inappropriate value of breadth" << endl;
            breadth = 0;
        }
    }

    void get_details()
    {
        cout << " the value of length is " << length << endl;
        cout << " the value of breadth is " << breadth << endl;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()

{

    rectangle r1;       //object of non paramaterised constructor
    rectangle r2(19, 28); //object of parameterised constructor
    rectangle r3(r1); //copy constructor 
    cout << "the area and the perimeter of the object r1 is " << r1.area() << " " << r1.perimeter() <<endl;
    cout << "the area and the perimeter of the object r2 is " << r2.area() << " " << r2.perimeter()<< endl;
    cout << "the area and the perimeter of the object r3 is " << r3.area() << " " << r3.perimeter();
    // in coppy constructors we copy the value of object into other object 
    // here we copy the length and breadth of the object r3 into r1 

    return 0;
}
