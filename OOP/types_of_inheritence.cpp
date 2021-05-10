// Inheritence of 4 types 
// 1.single inheritence
// 2.Multiple inheritence
// 3.Multi level inheritence
// 4.Hirarchial inheritence

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// ---------Single Inheritence--------------
class base 
{
    public :
    int a = 6;
    string s1 ="saisri";

    void base_class_function()
    {
        cout<< "this is the function in base class"<<endl;
    }
};
class single_inherited: public base //inherting the only one class
{  
  public :
   void single_inherited_class_function()
   {
       cout<< "this is the function in single inherited class" <<endl;
   } 
};


// ------------Multiple inheritecne-------------
class voice_recorder
{
    public :
    void voice_recorder_function()
    {
      cout<< "this is the fucntion of voice recoreder class"<<endl;
    }
};

class camera
{
    public :
    void camera_fucntion()
    {
        cout<< "this is function of the camera class "<<endl;
    }
};

class mobile : public voice_recorder,public camera //inherting the muliple class
{
    public :
    void mobile_class_function()
    {
        cout<< "this is the mobile class fucntion "<<endl;
    }
};

// --------------Multi level Inheritence------------
class grand_parents
{
    public :
    void grand_parents_function()
    {
        cout<< "this is the grand parents clas function" <<endl;
    }
};
class parents : public grand_parents //single inheritence
{
    public :
    void parents_fucntion()
    {
        cout<< "this is the parents class function " <<endl;
    }
};
class children : public parents //multi level inheritence
{
    public :
    void children_class_function()
    {
        cout<< "this the children class function "<<endl;
    }
};

// -----Hirarchial inheritence-------------
// it is nothing but the inherting the class by many other class 
// that mean many other classes inhert only the one class 
class base1 
{
    public :
    void base1_function()
    {
        cout<< "this is the function of base1 class "<<endl;
    }
};
class derived1 : public base1 
{
    public :
    void derived1_function()
    {
        cout<< "this is the fucntion of derived1 class"<<endl;
    }
};
class derived2 : public base1 
{
    public :
    void derived2_function()
    {
        cout<< "this is the function of derived2 class"<<endl;
    }
};
// here both the derived1 and derived2 class inhert the same class that is base1 
// so this is the example of herarchial inheritence
int main() 

{
         

       
          return 0;

}