// A simple program to analyze entered marks
#include <iostream>
using std::cout;
using std::cin;
int main()
{
    // variable declaration and initialization
    int passes = 0, failures = 0, studentCounter = 1, result = 0;
    while (studentCounter <= 10)
    {
        cout<<"Enter the result (1=pass, 2=failure): ";
        cin>>result;
        if (result == 1)
            passes = passes + 1;
        else // if (result == 2)
            failures = failures + 1;
        studentCounter = studentCounter + 1;
    }
    // printing the summary of the results
    cout<<"The Summary of the results\n";
    cout<<passes<<" students passed.\n";
    cout<<failures<<" students failed.\n";
    if(passes > 8)
        cout<<"Raise tuition\n";
    return 0;
}