// Class average program using sentinel-controlled repetition
#include <iostream>
#include <iomanip> // for manipulating inputs/outputs
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::setprecision;
int main()
{
    // variable declaration
    int total, gradeCounter, grade;
    float average;
    // variable initialization
    total = 0;
    gradeCounter = 0;
    // processing
    cout<<"Before the loop\n";
    cout<<"Enter a grade (0 - 100), or any negative value to end the program: ";
    cin>>grade;
    // while loop starts here
    while (grade > -1)
    {  
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout<<"Inside the loop\n";
        cout<<"Enter a grade (0 - 100), or any negative value to end the program: ";
        cin>>grade;
    }

    // termination
    if (gradeCounter != 0)
    {
        average = float(total)/gradeCounter;
        cout<<"The class average is: "<<setprecision(2)
                                    << setiosflags(ios::fixed | ios::showpoint)
                                    <<average<<endl;
    }
    else
        cout<<"No grades were entered\n";

    return 0;
}