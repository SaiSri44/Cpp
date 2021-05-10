// structures are the user defined data types 
// structures are the data types which holds the different data types 
// syntax is struct identifier 
// there are two types of structures
// 1.Global structures (this can be accessed anywhere in the programmm)
// 2.local structures()(this is accessed only inside the function)
struct employee
{
    /* data */
    int emp_id;
    float emp_salary;
    char name;
};

#include<iostream>

using namespace std;

int main() 

{
         struct employee e;
        //   here struct employee is the data type ,e is the variable of data type struct employee
        // user defined data type may have combination of words,whereas primitive data types like int,float,char,double,has only single word 

        // #-------declaring the data types of the struct employee------------
        e.emp_id = 10002;
        e.emp_salary = 343434.0;
        e.name = 's' ;

        // --------Acessing the data--------
        // data can be accessed using the acccesssor operator nothing but the '.' 
        cout<<e.emp_id<<endl;
        cout<<e.emp_salary<<endl;
        cout<<e.name<<endl;


    //   Array of structures 
         struct employee k[3];
         for (int i = 0; i < 3; i++)
         {
             cout<<"enter the id of employee " <<i+1<<endl;
             cin>>k[i].emp_id;
             cout<<"Enter the salary of the employee "<<i+1<<endl;
             cin>>k[i].emp_salary;
             cout<<"Enter the character of the employee "<<i+1<<endl;
             cin>>k[i].name;
            
             
         }

         for (int i = 0; i < 3; i++)
         {
             /* code */
             cout<<k[i].emp_id <<k[i].emp_salary << k[i].name<<endl;
         }  
         
         
          return 0;

}
