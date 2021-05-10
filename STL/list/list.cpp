// in this we will look at the lists in STL .there are 2 types of lists in the STL they are 
// 1. forward list it is nothing but the single linked list 
// 2. list it is nothing but the double linked list 
// we will loook at the  double linked list in this file 
#include<iostream>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

void print_list(list<int> &sai) //here we are referencing to the original list so it avoides the unnecessary copying of list elements 
{
    for(list<int> :: iterator it = sai.begin();  it!=sai.end(); it++)
      cout<< *it <<endl;
}
int main() 

{
         
    //  list data structure is in the list header file,it is in the standard namespace 

    // list functions are :

    // size() , max_size()
    // =
    // front(), back()
    // empty()
    // begin(),end(),rebegin(),rend()
    // insert(), erase(),remove()
    // clear()
    // push_back(), push_front(), pop_back(), pop_front() 

    // let us see the declaration and acessing of elements and functions associated with the list 

    //    ------------declaring the list ---------------
    list<int> sai = {1,2,3,4,5,6};//list intializer is introduced in  c++ 11 onlly before that we cannot intialize the list 
    cout<< "the list elements of sai are : " <<endl;
    print_list(sai);

    // now copy the our list elements to the another list 
    list<int> sri;
    sri = sai;//assignment operator does not pass the reference to list it actually copies the list  
    // let us print the elements of the list sri
    cout<< "the elements of the list sri are : " <<endl;
    print_list(sri);
    
    // ------size function--------
    cout<< "the size of the list sai is : " << sai.size() <<endl;

    // --------front and back function -----------
    cout<< "the first element or front element of the list sai is :  "<<sai.front() <<endl;
    cout<< "the back element of the list sai is : " << sai.back() <<endl; 


    // we can get the first and last element by dereferencing the begin iterator and the rbegin iterator
    cout<< "front = " << *sai.begin() << "end = " << *sai.rbegin() <<endl;

    // -------empty function------------
    // empty returns the boolean 
    cout<< sai.empty() <<endl;

    // ----------insert---------
    // unlike in vector list does not insert in constant time,we should provide the iterator pointing to the position at which we want to insert 
     
    //  suppose we want to insert 999 in position 3(indexing starts from 0) we want to provide an iterator pointing to the  position and the value that need to be inserted in that position 
    
    list<int>:: iterator it = sai.begin();
    int count = 0;
    while(count < 3)
    {
        it++;
        count++;
    } 
    sai.insert(it,999);
    cout<< "the elements of the list sai after inserting the 999 in 3rd position is : " <<endl;
    print_list(sai);
    
    // ---------------erase----------
    // erase function also requires the iterator pointing to position at which the value that we wish to erase is present 
    // now let us remove the 999 from the list sai
    sai.erase(it); //it is pointing to the number 4 so it removes the 4 from the list
    cout<< "elements of the list after removing the 4 is : " <<endl;
    print_list(sai);

    // ---------remove--------
    // remove function iterators over the list and remove the all occurences of the given value in the list
    // let us remove the 999 from our list 
    sai.remove(999);
    // it takes the linear time complexity 

    // ---------------clear---------
    // clear will empty the list 
    // let us clear the list sri and check whether it is empty or not 
    sri.clear();
    if (sri.empty())
      cout<< "clear function cleared the list" <<endl;
    else 
     cout<< "clear function not cleared the list" <<endl;  

    //  ----push_back(),pop_back(),push_front(),pop_front()-----------
    // push_back() will push the given value at the last of the list 
    sai.push_back(99);
    // let us check it 
    cout<< "the last element of the list is : " << *sai.rbegin() <<endl;

    // pop_back() will remove the last element of the list 
    sai.pop_back();
    cout<< "the last element of the list after removing 99 is  : " << *sai.rbegin() <<endl;  

    // push_front() will push the provided value to the front of the list 
    sai.push_front(1000);
    cout<< "the first element of the list is : " << *sai.begin()  <<endl;    

    // pop_front() will remove the first element of the list /
    sai.pop_front();
    cout<< "the first element of the list after removing 1000 is  : " <<*sai.begin() <<endl; 
          return 0;
 
}