/************************************************************************************************************

Write a program in C to read n number of values in an array and display them in reverse order.

This task requires writing a C++ program to read a user-defined number of integer values into an 
array and then display these values in reverse order. 
After storing the values, the program should first print them in the original order and then 
print them in the reversed order.

Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2

************************************************************************************************************/

/************************************************************************************************************
 * Library Include Files
************************************************************************************************************/
#include <iostream>

/************************************************************************************************************
 * Application Include Files
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Feature Include Files
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Featire Macro Definitions
************************************************************************************************************/
#define OFFSET_1 1

/************************************************************************************************************
 * Feature Level Type Definitions
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Feature Level External Variables
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Task Local Function Prototypes
************************************************************************************************************/
void Display_Array(int Array[], int num);

using namespace std;

int main()
{
    int arr[10];
    int i, num;

    do
    {
        cout << "Input the number of elements in Array (max 10): \n";
        cin >> num;
    } while (num <= 0);
    
    for (i = 0; i < num; i++)
    {
        cout << "Enter element " << i + OFFSET_1 << " : ";
        cin >> arr[i];
    }

    cout << "You entered: ";
    Display_Array(arr, num);

    cout << "Reversed array: ";
    for (i = num - 1; i >= 0; i--)
    {   
        cout << "\n";
        cout << "Element " << i + OFFSET_1 << " is " << arr[i] << " ";
    }
}

void Display_Array(int Array[], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {   
        cout << "\n";
        cout << "Element " << i + OFFSET_1 << " is " << Array[i] << " ";
    }
    cout << "\n";
}
