//4.	Write a program that takes user input for a number and determines whether it's prime or not.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
bool isPrime(int num)
{
    if (num <= 1)
    return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        return false;
        }
        return true;
        }
        int main()
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (isPrime(num))
            cout << num << " is a prime number." << endl;
            else
            cout << num << " is not a prime number." << endl;
            return 0;
            }
            