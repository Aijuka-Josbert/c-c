//a simple program to analyse entered narks
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main() {
// variable declaration and initialization
int pass = 0, failures = 0, studentcounter = 0, results = 0;
while (studentcounter =10)
{
    cout << "Enter the result of Student (1=pass, 2=failure): ";
    cin >> results;
    if(results == 1)
        +++pass;
        else //if (results == 2)
        ++failures;
        ++studentcounter;
}
// printing the summarry of he reuslts 
cout<<"The summary of the results\n";
cout<<pass<<"student pass.\n";
cout<<failures<<"students failed.";
if(pass > 8)
cout<<"raise tuition.\n";
return 0;
}
