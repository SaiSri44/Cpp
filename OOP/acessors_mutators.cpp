// in this we will look at the acessors and mutators
// let us define the class

#include <iostream>

using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
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
    rectangle r1;
    // here r1 is the object, let us write the length and breadth
    // let class be the product,and the length and breadth are provided by the users

    // ---------phiolophosy behind the acessors and mutators------------

    // the users may give the inappropriate values for the length and breadth, that mean they can provide the negative values, in that case our class should do something to coreect it ,but for our class we did n't specify any seperate functions which handle these inappropriates,at this time acessors and mutators come into picture

    // here the get_details is the accessor,through which we are getting the data
    // set_details is the mutator, through which we are settting the attributes

    // these mutators and acessors take care of the problems with the inputs
    r1.set_details(10, 5);
    r1.get_details();
    cout << "the area of the rectangle is : " << r1.area() << endl;
    cout << "the perimeter of the rectangle is : " << r1.perimeter() << endl;

    return 0;
}

// -------same concept can also be found in the python in getters and setters file-------