// in this we will look at the template class 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int add(int a ,int b)
{
    return a + b;
}

template<class t> //we should specify the template class syntax inorder say that it is template class
//here t is the generic variable it can be of any data type
t template_add(t a, t b)
{
    return a + b;
}
int main() 

{
        //  suppose let us take simple function to add the numbers
        int a, b;
        cin >> a;
        cin >> b;
        cout << "the sum of numbers is : " << add(a, b) << endl;
        // notice that the function add is able to add only two integers what if we want to add two floats 
        // do we want to declare a another function,no c++ provides the template functionlaity 
        // using templates we can perform any actions on any data type without prior knowing the data type 
        // let us create the function template_add function which adds any numbers of same data type 
       cout<< "the sum of integers is  : " << template_add(a,b) <<endl;
    //    let us add two doubles 
    cout<< "the addition of the doubles is : " <<template_add(3.5,5.3) <<endl;
    
        return 0;

} 