#include <iostream>

using namespace std;

// add something in the parentheses
void setNum1(int num1);  // pass by value
void setNum2(int& num2);  // pass by reference
void sumArray(int arr[], int size); // pass in an array

int main( )
{
    int num1 = 10;
    int num2 = 100;

    cout << "before setNum1(), num1: " << num1 << endl;

    setNum1(num1);

    cout << "after setNum1(), num1: " << num1 << endl;

    cout << "------------------------------" << endl;

    cout << "before setNum2(), num2: " << num2 << endl;

    setNum2(num2);

    cout << "after setNum2(), num2: " << num2 << endl;

    cout << "------------------------------" << endl;

    int N = 10;
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The sum of the array is ";

    sumArray(a, N);

    return 0;
}


void setNum1(int num1)  // add something in the parentheses
{
    cout << "before setting1, num1: " << num1 << endl;

    num1 *= 2;

    cout << "after setting1, num1: " << num1 << endl;
}

void setNum2(int& num2)  // add something in the parentheses
{
    cout << "before setting2, num2: " << num2 << endl;

    num2 *= 2;

    cout << "after setting2, num2: " << num2 << endl;
}

void sumArray(int arr[], int size) // add something in the parentheses
{
    int i, sum = 0;
    for(i = 0 ; i < size ; i++)
        sum += arr[i];
    
    printf("%d\n", sum);
    // please complete this function
}