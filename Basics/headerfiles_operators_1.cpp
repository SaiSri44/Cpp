// there are two types of header files
// system header files these header files are included in the compiler itself
/*example :*/ #include <iostream>
    // user defined header files these files are created by the user
    // #include "saisri"
    // note that user defined header files should be in the directorary
    using namespace std;
int main()
{
    cout << "this is header fileas and operators tutorial" << endl;

    // operators are as follows:
    // 1.Arthematic operators
    // 2.Comparisioon  operators
    // 3.logvcal operators
    // 4.bitwise operators

    // Arthemetic operators

    int a = 3, b = 5;
    cout << "addition  " << a + b << endl;
    cout << "subtraction " << a - b << endl;
    cout << "multiplication " << a * b << endl;
    cout << "division " << a / b << endl;
    cout << " post incremernt operator " << a++ << endl;
    cout << "posr decrement operator " << a-- << endl;
    cout << "pre increment operator " << ++a << endl;
    cout << "pre decrement operator " << --a << endl;

    //   Comparision operators
    cout << endl;
    cout << "he value of a is > b " << (a > b) << endl;
    cout << "he value of a is < b " << (a < b) << endl;
    cout << "he value of a is >= b " << (a >= b) << endl;
    cout << "he value of a is <= b " << (a <= b) << endl;
    cout << "he value of a is == b " << (a == b) << endl;
    cout << "he value of a is != b " << (a != b) << endl;

    // logical operators
    cout << ((a == b) && (a != b)) << endl; //logical and operator
    cout << ((a == b) || (a != b)) << endl; //or operator
    cout << ((!a == b)) << endl;            //not operator

    // Assingment operators

    // asssingm,ent operators nothing like =
    // int a=3,b=5;
    // char c= "f"; etc

    return 0;
}
