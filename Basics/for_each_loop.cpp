// for each loop is similar to "for each in x " in python, it mean for each element in array 
// for each loop is used over an collecttion like , array,strings etc '

#include<iostream> 

using namespace std;

int main() 

{  
         int sai[5]= {1,2,3,4,4};
         cout << "array elements before referencing" << endl;
         for (int x : sai)
            cout << x << endl;

        // notice that the all the values copy into x one by one, modifying the for each loop  iteration variable does not changes the original one 

        // for(int x : sai)
            //  cout << "value after changing the x " <<  ++x << endl; 
             
    //    here incrementing the x value does not chnage actual value in array 
    //  if we want to change the value , then we should use referencing 
        cout << "array elemets after referencing" <<  endl;
       for(int &x : sai)  
           ++x;

          for(int x : sai) 
           cout << "array elements after incrementing by 1 is :  " << x << endl ;

          return 0;
}