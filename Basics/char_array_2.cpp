// in thsi we will look at the char array 
// there are different ways for defining the array of characters 
// let us look at one by one 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() 

  {      
    //    -------declaration of char array-------------


        //  ---------------1st method------------
        char s[10] = "saisri";
        cout<< s<<endl;
        // ------------------2nd method-----------
        char s1[] ="angajala";
        cout<< s1<<endl;
        // -------------3rd method----------------
        char s3[] = {'y','a','m','u','n','a','\0'}; // null character is compulsaty at the end of the char array
        cout<< s3<<endl;
        // --------4th method using the  ascii values------
        char s4[] = {65,66,67,68,69,0};//ascii value of null character is 0
        cout<< s4<<endl;
        // ------5th method pointer method-------
        char *p = "krishnamurhty"; 
        cout<< p<<endl; //pointer method is not supported in the latest compilers,avoiding using this,it raises warining in the compiler
 
        //  ------ways of reading input from the keyboard-------------;
        // we can read the input from the keyboard in three ways
        // 1.using cin function 
        // 2.using the get function 
        // 3.using the getline function 
      
        // --------------using cin function------------
        // cin functions reads the input until the null character is encountered after that even though there are more characters it does not read them 
        // char sai[100];
        // cout<< "enter the character array   : "<<endl;
        // cin>>sai;
        // cout<< sai<<endl; 

        // --------------get function---------------
        // get function  takes two argumetns 1 is the character array and other is the maximum number of characters that to be read, it can also read the multiple words with in the range of characters ,it reads until the next line chararcter is encountered
        char yamuna[100];
        cout<< "enter the char array yamuna : "<<endl;
        cin.get(yamuna,90);
        // yamuna is the 1st argument and 90 is the 2nd argument which determines the maximum no of characters that the get function reads from the standard input  
        cout<< yamuna<<endl;
         
        //  -----------getline function-----------
        // getline function is also same as the get function ,but there is a little difference 
        char angajala[233];
        cout<< "enter the character array angajala  : " <<endl;
        cin.getline(angajala,50);
        cout<< angajala<<endl;

        //do not write the get functions consecutively or getline function consecutively or one get and getline function 
        // because suppose for the first getline function we enterd the string after that we will enter the enter,the another function that it may be get or getline after the first get function will read the enter and stores it,and prints so that what we desired that cannot be achieved so avoid writing the get functions consecutively 

        

         return 0;

}