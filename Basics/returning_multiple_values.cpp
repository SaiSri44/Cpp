// in this we will discuss about how the function can return the multiple values 
// unfortunately in c or c++ functions canoot return multiple values /
// this can be acheived using some clever techniques 

// now we will see how we can get multiple values from function using 

// 1.pointers
// // 2.structures 
// 3.array 
// 4.reference 

#include<iostream>
#include<string>
#include<algorithm>
struct greater_smaller
{
    int great, small;
};
void using_pointer(int a,int b, int*greater,int*smaller)
{
    if(a>b)
    {
        *greater = a;
        *smaller = b;
    } 
    else{
        *greater = b;
        *smaller = a;
    }
} 
struct greater_smaller using_struct(int a,int b)
{
    greater_smaller s;
    if (a > b)
    {
        s.great = a;
        s.small = b;
     } 
     else{
         s.great = b;
         s.small = a;
     }
     return s;
}

void using_array(int a,int b,int *array)
{
  
    if(a > b)
    {
        array[0] = a;
        array[1] = b;
    } 
    else 
    {
        array[0] = b;
        array[1] = a;
    }
    
} 
void using_reference(int a, int b,int &great ,int &small)
{ 
   if(a>b)
   {
       great = a;
       small = b;
   } 
   else
   {
       great = b;
       small = a;
   }
}
using namespace std;
int main() 

{
         
        // let us find the smallest and greatest number among two numbers
        int a, b,greater,smaller;
        // in this we are creating extra variables to store teh values that calculated in the function 
        cin >> a >> b;
        using_pointer(a, b,&greater,&smaller);
        cout<< "using the pointer method: " <<endl;
        cout<< "the geratest and smallest elements are "<< greater <<" " <<smaller <<endl;
        
         cout<< "using the structure : " <<endl;
         struct greater_smaller result = using_struct(a, b);
        //  in this we are returning the struct so that the struct has our desired values 
         cout<< "the greatest and smallest numbers are : " << result.great << " "<< result.small<<endl;

         cout<< "using the array : " <<endl;
         int arr[2];
         using_array(a, b,arr);
         cout<< "the greatest and smallest elements are "<<arr[0] <<" "<<arr[1] <<endl;

         cout<< "using reference : " <<endl;
         int gr, sm;
         using_reference(a, b,gr,sm);
         cout<< "the greatest and smallest elements are : " << gr << "  " << sm <<endl;
         return 0;
         
} 
