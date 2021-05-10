// lets do the binary search
// note the array should be in sorted order
#include <iostream>
#include <string>

using namespace std;
string first_occurence(int *array, int mid, int target)
{
    if (array[mid] == target)
    {
        if (mid >= 0 && array[mid - 1] != array[mid])
            return "found";
        else
            return "left";
    }
    else if (array[mid] > target)
        return "left";
    else
        return "right";
}
void bubble_sort(int *array, int n) //aatually we are passing integer pointer ,which points to the array,we are  not passing the whole array.
// we can declare int pointer as int *  or int arra[],
// here we can also write int array[] instead of int * array,which in turn equals to int * array
// int *array is same as int array[], we can use any of them.
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()

{
    int sai[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << "Enter the element " << i << " of the array : " << endl;
        cin >> sai[i];
    }
    int key;
    bool flag = true;
    cout << "Enter the value that you wish to search in array : " << endl;
    cin >> key;
    int low = 0, high = 10, mid;
    bubble_sort(sai, 10);
    for (int x : sai)
        cout << x << " ";
    while (low <= high)
    {
        mid = (low + high) / 2;

        string result = first_occurence(sai, mid, key);
        if (result == "found")
        {
            cout << "element found at the location  :  " << mid << endl;
            flag = false;
            break;
        }
        else if (result == "left")
            high = mid - 1;

        else
            low = mid + 1;
    } 
    if (flag)
        cout << "element not found" << endl;

    return 0;
}
