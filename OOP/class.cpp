// int this we will look at the object oriented programmming
// we use the class keyword to define the class 
class rectangle
{   
    public :   //making the attributes to public
       int length;  //deffining the attributes or properties
       int breadth;
       int area()  //defining the function or methods
          {
              return length*breadth;
          }
       int perimeter()
       {
           return 2*(length + breadth) ;
       }    
};  
#include<iostream>

using namespace std;

int main() 

{
         rectangle r1; //declaring the class rectangle object 
         //here r1 is the object of the class rectangle

        //  ---------------------NOTE---------------
        // by default the attributes of the class are private,in order to acess them into the main function we should declare them as public
         r1.length = 30; //changing the attribute vallues
         r1.breadth = 40;
         cout << "the area of the rectangle is : " << r1.area() << endl;
         cout << "the perimeter of the rectangle is : "<< r1.perimeter() << endl;
         return 0; 

}

// ----------Memory Allocation of classes----------
// Main function and the functions defined in the class will be in the code section 
// only memory is allocated for the atttributes,memory is not allocated for the methods,memory is allocated in the stack 