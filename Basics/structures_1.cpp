// structures are the user defined data types
// structures are the data types which holds the different data types
// syntax is struct identifier
// there are two types of structures
// 1.Global structures (this can be accessed anywhere in the programmm)
// 2.local structures()(this is accessed only inside the function)
#include <iostream>
#include <string.h>

using namespace std;

struct employee
{
    /* data */
    int emp_id;
    float emp_salary;
    string name;
};

struct applicant_name
{
    string first_name;
    string last_name;
};

void call_by_value(struct applicant_name sri)
{
    cout << "we are inside the call by value function" << endl;
    cout << "the first name of applicant is : " << sri.first_name << endl;
    cout << "the last name of the applicant is : " << sri.last_name << endl;
}

void call_by_reference(struct applicant_name &sri)
{
    cout << "we are inside the call by reference function : " << endl;
    // any changes made here will reflect in the original variables
    // let us change the last name and print it
    sri.last_name = "Angajala";
    cout << "the last name after changing inside the call by reference method is : " << sri.last_name << endl;
}

void call_by_address(struct applicant_name *sri)
{
    cout << "we are inside the call by reference function : " << endl;
    // any changes made here also will reflect in the original functions
    sri->last_name = "ANGAJALA";
    cout << "the last name after changing in call by address function is : " << sri->last_name << endl;
}

int main()

{
    struct employee e;
    //   here struct employee is the data type ,e is the variable of data type struct employee
    // user defined data type may have combination of words,whereas primitive data types like int,float,char,double,has only single word

    // #-------declaring the data types of the struct employee------------
    e.emp_id = 10002;
    e.emp_salary = 343434.0;
    e.name = "anuradha";

    // --------Acessing the data--------
    // data can be accessed using the acccesssor operator nothing but the '.'
    cout << e.emp_id << endl;
    cout << e.emp_salary << endl;
    cout << e.name << endl;

    //   Array of structures
    struct employee k[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "enter the id of employee " << i + 1 << endl;
        cin >> k[i].emp_id;
        cout << "Enter the salary of the employee " << i + 1 << endl;
        cin >> k[i].emp_salary;
        cout << "Enter the hame of the employee " << i + 1 << endl;
        cin >> k[i].name;
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << k[i].emp_id << " " << k[i].emp_salary << "  " << k[i].name << endl; 
    }
    cout<< " " <<endl;

    //  -------------structure as a parameter------------
    // now we will see how to pass the structure as parameter
    // we will look at
    // 1.pass by value
    // 2.pass by reference
    // 3.pass by address
    struct applicant_name sai;
    sai.first_name = "saisri";
    sai.last_name = "angajala";
    call_by_value(sai);
    cout<< " " <<endl;

    call_by_reference(sai);
    cout << "the last name of the applicant in main function after call by reference is  : " << sai.last_name << endl;
    cout<< " " <<endl;

    call_by_address(&sai);
    cout << "the last name of the aplicant in main function after call_by_address is : " << sai.last_name << endl;
    return 0;
}
