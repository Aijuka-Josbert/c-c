// A program to compute the age based on user input
#include <iostream>
int main()
using namespace std;
{
    // variable declaration
    int birthYear, currentYear, age; 
    // variable initialization
    currentYear = 2023;
    // prompting the user to enter their birth year
    std::cout<<"Please enter your year of birth:\n";
    // get the birth year from the keyboard
    std::cin>>birthYear;
    // compute the age for the user
    age = currentYear - birthYear;
    // display the age on the screen
    std::cout<<"Your age is: ";
    std::cout<<age;
    // exit the program
    return 0;
}