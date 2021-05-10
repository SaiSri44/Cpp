// in this we will look at the pointer to the object
// let us define the class
#include <iostream>
#include <string>

using namespace std;

class mobile
{
public: // by default attributes are private,do not foreget to write the public keyword if you want to access them in main function.
    string company;
    string operating_systrem;
    int os_version;
    int price;
    int storage;
    int ram;

    void call()
    {
        cout << "we are inside the call method" << endl;
    } 
    void play_music()
    {
        cout << "we are inside the play_music function"<<endl;
    }  
}; //do not forget to write the semi colon after the definition of the class or structure 
int main() 

{

    mobile v1, v2; //declaring the object
    mobile *p; // declaring the pointer of type class mobile
    p = &v1; //assing the address of the object v1 to the pointer
    // both the objects and the pointers are created in the stack .pointer stores the address of the object and starts pointing towards the object 
    // we can acess the attributes by using the arrow operator  
    // arrow operator is nothing but the *(p).ram this mean that the *(p)  is the object v1 and *(p).ram is equal to v1.ram 

    p->os_version = 11;
    p->company = "vivo"; 
    p->storage = 64; 
    v1.ram = 3;
    p->ram = 4;
    p->operating_systrem = "android";
    p->price = 13000;

    cout << p->ram << endl ;
    p->call();
    p->play_music();
    // ----------NOTE ------- 
    // do not call the functions of return type void in the cout statement 
    
    
    
    // --------------CREATING THE OBJECT INSIDE THE HEAP---------

   
    // till now we have seen the object is created in the stack, now we will look at how to create the object in the heap 
    mobile v3;
    mobile *q;
    q = new mobile ; ///this is similar to the creation of memory in heap for array
    //here q ia pointer which is in stack,and points to the object in the heap

    q->company = "redmi";
    q->os_version = 11;
    cout << "the version of the mobile is " << q->os_version << endl;
    q->call() ;

    return 0;  

}     