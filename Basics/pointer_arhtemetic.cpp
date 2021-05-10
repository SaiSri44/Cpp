// 5 operations can be used on the pointers 
// 1.post increment
// 2.post decrement
// 3.additon
// 4.subtraction
// 5.difference of pointers 

#include<iostream>

using namespace std;

int main() 

{
         int sai[5] = {1,2,3,4,4}; 
         int* first_ptr = sai ;
         int * second_ptr;

        //  here first_ptr is pointing to the first element of the arrary 
        // now let us apply post increment to the first_ptr ;
        first_ptr++;
        cout << "pointer pointing to second element " << *(first_ptr) << endl;
        // now the pointer points to second element of the arrary,hence the value is 2 

        // lets apply post decrement to first_ptr 
        first_ptr--;

        cout << "pointer pointing to first element " <<  *(first_ptr) << endl;
        // before the pointer is pointing to the second element , as we post decrement the pointer , the pointer starts to pointing towards the first element ,hence the output would be 1

        first_ptr = first_ptr + 2;
        cout <<"pointer pointing to third element  " <<  *(first_ptr) << endl;

        // as the pointer is pointing to the first element , upon increasing the pointer  by 2 it starts pointing towaeds the third element 
        // hence the output is 3 
    
        first_ptr = first_ptr -2 ;
        // as the pointer is pointing to third element ,uupon decreasing by 2 it starts pointing towards the fiest element 
        cout << "pointer pointing to the first element " << *(first_ptr) <<  endl; 

        // lets make the second_ptr pointing to third element 
        second_ptr = &sai[2];

       int difference = second_ptr - first_ptr;
       cout << difference << endl;
    //  if difference is positive mean the first term in subtraction is farther and second term in subtraction is nearer and vice versa 
    // here second_ptr is pointing to third element,and first_ptr is pointing to first element,so there is 2 elements difference between them 
    // so the answer is 2 ,difference between pointers says that how much far the pointers are from each other 
       int difference2 = first_ptr - second_ptr ;
    //    here the output is -2 
       cout << difference2 << endl;


      //    Apart from these five operations no other operations cannnot be used on pointers 
          return 0;

}