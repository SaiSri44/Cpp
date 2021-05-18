// in this we will look at the ternary operator in cpp 
// ternary opeator takes three expressions 
// ternary operator is also known as the conditional operator

// syntax is exp1 ? exp2 : exp3

// working if the exp1 is true then the exp2 will excute else then ex;3 will excuter
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main() 

{
        //  let us check whether number is even or odd using the ternary operator
        int n;
        cin >> n;
        string result = n & 1 ? "odd" : "even";
        cout << "the number is: " << result << endl; 
        // ternary operator is frequently used to avoid the simple if and else conditonal statments that has only single statement to excute 
        // and it is frequently used in recursion

        return 0; 

}