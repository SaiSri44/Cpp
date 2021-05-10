// in this we will look at the float precision
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h> //round ,ceil,floor is included in this header file 
#include<iomanip> //setprecison is included in this header file
using namespace std;

int main() 

{
         float sai = 5.1123;
        //  precision can be done using the floor,ceil,round,and fixed precision ;
        // let us look at one by one 

        // ------------------floor--------------
        // floor will round of the float value to the largest integer that is nearer to it  
        // floor is included in the math.h header file 
        cout<< "the floor value of " << sai << "is  " << floor(sai) <<endl;
       
        // --------------ceil------------
        // ceil will round of the float value to the smallest integer that is grater than it  
        cout<< "the ceil value of the " <<sai << "is  " << ceil(sai) <<endl;
 
        // ------------round---------
        // if the first digit of the decimal part is less than 5 then round function wil round off it to the before integer 
        // if first digit is greater than 5 then round off to next integer  
        cout<< "the round of the "<<sai<<"is  "<<round(sai) <<endl;
        
        // setting precision that we desire 
        // for this we should use the fixed and the setprecision() function 
        cout << fixed << setprecision(3) << sai <<endl;
          return 0;

}