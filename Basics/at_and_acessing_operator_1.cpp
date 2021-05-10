// in this we will look at the difference betwenn the  at and []
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main()

{
    //  both at and [] are used to acess the elements from the container ,but there is a small difference beteween them

    // -----------difference------------
    // at will raise an error when we give the index that is greater than the size of the container whereas the [] will not raise such error
    // let us code and see
    std::vector<int> v(5, 9);
    // here we created a vector v of size 5 and intialised all the elements of the vector with 9
    // let us access the elements using the at and []
    std::cout << "saisri angajala" << std::endl;
    std::cout << v.capacity() << std::endl;

    return 0;
}