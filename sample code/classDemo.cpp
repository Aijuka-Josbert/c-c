/* A program to demonstrate the use of simple if, if/else, nested if/else
and compound statements 
Author: KGWV
*/
#include <iostream>
using std::cout;
using std::cin;
int main() {
    int marks;
    cout<<"Please enter your marks: ";
    cin>>marks;
    if (marks>=90) 
        cout<<"That's an A.\n";
    else if (marks>=80)
        cout<<"That's a B.\n";
    else if (marks>=70)
        cout<<"That's a C.\n";
    else if (marks>=60)
        cout<<"That's a D.\n";
    else 
    {
        cout<<"That's an F!\n";
        cout<<"You'll have to retake the course again next year!\n";
    }
        
    cout<<"\n-------------------\n";
    cout<<"End of the program.";
    cout<<"\n-------------------\n";
    return 0;    
}