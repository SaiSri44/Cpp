// there are some built in functions which can be applied on the character array,in this we will look into them
// the functions we will discuss are
// 1.strlen
// 2.strcat
// 3.strncat
// 4.strcpy
// 5.strncpy
// 6.strcmp
// 7.strstr
// 8.strchr
// let us look at each function in detail
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main()

{
    //  let us create the char array
    char s[100] = "saisri";
    char s2[100] = "angajala";

    // these all functions are included in the cstring header file , first we should include it in the
    // prograamm
    //    ----------------strlen---------------
    // strlen function is used to find the length of the string
    // now let us find the length of the string1 and string2
    cout << "the length of the string1 is : " << strlen(s) << endl;
    cout << "the length of the string 2 is : " << strlen(s2) << endl;

    // -------------strcat -----------------
    // strcat stands for string concatatenation it adds the one string at the end of the other string
    strcat(s, s2);
    // strcat function will add the string2 at the end of the string1,this is the permanent change
    // let us print the first string
    cout << s << endl;
    // note that now the
    // s = saisriangajala
    // s2 = angajala

    // -----strncat-----------------
    // strncat contcatenates the n characters of the second string to the first string
    // let us concatenate the 4 characters from the second string to the first string
    strncat(s, s2, 5);
    cout << s << endl;
    // note now the first string is
    // s = saisriangajalaangaj
    // s2 = angajala

    //    ---------------strcpy----------------
    char s3[] = "yamuna";
    char s4[] = "";
    // note that the here s3 is yamuna and s4 is nothing /
    // now let us copy the first string into the second string
    strcpy(s4, s3);
    cout << s4 << endl;
    // strcpy takes two arguments destination string(string in which we want to copy) source_string(string from which we want to copy)
    // note here
    // s3 = yamuna
    // s4 = yamuna

    // -----------------strncpy------------------
    //   strncpy is similar toe the strncat
    // strncpy copies the n characters from the second string into first string
    // now let us copy the 3 characters from second string into the first string

    strncpy(s4, s3, 2);
    cout << s4 << endl;
    //    copy is done from the starting,the copying will overwrite the existing the string
    // before s4 is yamuna ,now we are copying 3 characters from string s4

    //    -------------strcmp----------------
    // strcmp is used to compare the two strings.it compares the two strings character by character if the strings are equal then it returns 0 if not equal then it returns 1,this may be negative or positive

    // negative -1 mean the first string comes first than the second string in dictionary order
    // positive +1 mean the second string comes first than the first in dictonary order
    // if characters differ only by the Capitals and Smalls like hello  and Hello then also ascii values are compared, hello and Hello are not equal

    // let us see example of these four situations
    char p1[] = "saisri";
    char p2[] = "angajala";
    char p3[] = "Saisri";
    char p4[] = "saisri";
    cout << strcmp(p1, p4) << endl;
    cout << strcmp(p1, p2) << endl;
    cout << strcmp(p2, p1) << endl;
    cout << strcmp(p1, p3) << endl;

    // ----------strstr-------------
    // this is used to find the substring in the parent string
    // it returns the string from the character where the substring starts till the last character of the origainal string
    //  for example strstr(p1,"ai")
    //  will return the aisri because ai is the substring and sri is the string after that
    //    if given substring is not presented in the string it raises error
    // be careful while using this
    cout << strstr(p1, "ai") << endl;
    // cout << strstr(p1, "angajala") << endl;

    // ------strchr--------------
    // strchr is used to find out whether the character is present in the string or not
    char *m = strchr(p1, 'a');
    // m is the pointer pointing to the address address of the 'a', m variable contains the address of the character 'a' in array
    // let us print the postion of the character in the array
    cout << m - p1 << endl;
    // output is 1 that mean the pointer pointing to the first charcter of the array
    // if the character is not the part of the string it returns the null pointer
    // let us check it
    char *n = strchr(p1, 'p');
    // as the character p is not present it returns the null pointer ,so the n is the null pointer
    if (n == NULL)
        cout << "p is not present in the string" << endl;

    return 0;
}