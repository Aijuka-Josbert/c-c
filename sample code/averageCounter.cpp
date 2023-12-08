// Counter-controlled repetition program to
// compute the average marks of ten students 
// from a quiz
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int total, gradeCounter, grade, average; // declaring variables

    // initializing the variables
    total = 0;
    gradeCounter = 1;

    // starting the while loop and picking the grade from the user
    while(gradeCounter <= 10)
    {
        cout<<"Enter the grade for student "<<gradeCounter<<": ";
        cin>>grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }
    // cout<<"gradeCounter: "<<gradeCounter<<endl;
    // computing the class average
    average = total/(gradeCounter - 1);
    cout<<"The class average from the quiz is: "<<average<<endl;
    return 0;
}