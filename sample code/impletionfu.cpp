//implement a function in c++ that swaps the values of two varaibles without using a temporary variable
//implement a function in c++ that swaps the values of two varaibles without
//using a temporary variable
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    }
    int main()
    {
        int x = 5, y = 10;
        cout << "Before swapping: x = " << x << " y = " <<
        y << endl;
        swap(x, y);
        cout << "After swapping: x = " << x << " y = " <<
        y << endl;
        return 0;
        }
