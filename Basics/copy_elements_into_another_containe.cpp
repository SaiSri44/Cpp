// in this we will look at the ways how can we copy the elements from one container to another container
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;
bool odd(int a)
{
    if (a % 2 == 0)
        return false;
    else
        return true;
}
int main()

{
    //  let us first copy the elements from one vector to another vector
    // there are many ways to copy elements in stl
    // let us look at one by one ,these are all included in the algorthim header file

    // ------------copy---------
    vector<int> v = {2, 3, 4, 5, 66, 2};
    // let us traverse it
    // we can traverse it using the iterator and the for loop
    cout << "iterating through the iterator" << endl;
    vector<int>::iterator itr;
    for (itr = v.begin(); itr < v.end(); itr++)
    {
        cout << *itr << endl;
    }
    cout << "iterating using the for loop : " << endl;
    // iterating using the for loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int> v2(v.size());
    // while declaring the vector for copying we should mention the size ,if not mention then elements are not copies
    // let us copy the elements of vector v into vector v2

    // ------copy-------------

    // copy function takes the 3 arguments
    //1. iterator of the element from which we want to copy
    // 2.iterator of the element upto which we want to copy
    // 3.iterator of the container from where we should copy

    copy(v.begin(), v.end(), v2.begin());
    // here 1.v.begin() 2.v.end() that mean we want are copying the from first element to last into the starting of the v2
    cout << "the elements of the vector v2 is : " << endl;
    for (auto x : v2)
        cout << x << endl;

    // let we again copy the  5 6 element in vector v to the  3 4 of the vecotr v2
    cout << "arbitary copying" << endl;
    copy(v.begin() + 4, v.begin() + 6, v2.begin() + 2);
    for (auto x : v2)
        cout << x << endl;

    // -------copy_n----------
    // there is also the function called copy_n which copies elements into another container
    // it is like the copy but the here we given 2nd argument as number,the number denotes the number of elemetns to be copied
    vector<int> v3(6);
    // if the size exceeds the copying elements then remaining all the elements are assinged to zero
    cout << "copy_n function " << endl;
    copy_n(v.begin(), 5, v3.begin());
    // here v.begin() is also included in the 5 elements
    // this will copy the elements from starting to 5 elements
    for (auto x : v3)
        cout << x << endl;

    //   ---------copy_if-----------
    //   it is similar like the copy function but it takes one another extra argument,that is function ,for every value to be copied it checks aganist the function if the function returns the true then it will copy it otherwise it does not
    // let us copy all the odd numbers in vector v into the another vector v4
    vector<int> v4(3);
    copy_if(v.begin(), v.end(), v4.begin(), odd);
    cout << "the elements of the vector v4 after coppying odd elements is :" << endl;
    for (auto x : v4)
        cout << x << endl;

    // let us try to copy the elements of one container into the another container
    // let us try to copy vector elements into the list
    list<int> l(6);
    copy(v.begin(), v.end(), l.begin());
    cout << "the elements of the list are : " << endl;
    for (auto x : l)
        cout << x << endl;

    // so we can copy the elements from one container to another container also
    return 0;
}