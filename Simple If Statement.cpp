#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    cout << "Please enter the age: " <<endl;
    cin >>age;

    if (age >= 4) //If Statement
    {
        cout << "Admit to school" <<endl;
    }
    else { //Else Statement
        cout << "Declined! Minimum Age Not Reached" <<endl;
    }

//Using Ternary Operator
cout << "Using ternary operator" <<endl;
string message= (age >= 4) ? "Admit to school" : "Declined! Minimum Age Not Reached";
cout <<message <<endl;

    return 0;
}

