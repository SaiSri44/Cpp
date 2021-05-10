// there are two ways in which the one class can get the properties and functionalites of other class 
// 1.Through inhertience
// 2.Through object of that class 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
class base{
    public :
     void base_function()
     {
         cout<< "this is the function of the base class"  <<endl;
     }
};
class inherited_class :public base
{
     public :
     void inherited_class_function()
     {
         cout<< "this is the function of the inherited class"<<endl;
     }
};
class object_class
{
   base b;
//    throgh this object the functonalities and properties of the base class can be get into this class /

}; 
int main() 

{
         
            // ------------isA and haA demonostration------
            // suppose consider the base class and  the inherited class if there is no inherited_class_function method in the inherited_class then it is equal to the base class, so we can say that the inherited_class is also a base  class 
            // here we use isA to say whether it is inherted class of base class or not 

            // consider the base class and the object_class we explictly did not inhert base class into the object_class class but we got the all the  functionlites and the properties of the base class into the object_class . so this mean that the object_class has the base class.in this type of situation we ue hasA 

          return 0;

}