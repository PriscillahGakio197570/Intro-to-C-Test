#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare a string variable
    string myName; //Prompt use for full name
    string description; //Prompt use for description
    cout << "Please enter your full name";
    getline (cin, myName);
    //Prompt user for their description
    cout << "Please describe yourself: ";
    getline (cin, description);
 
    cout << "Your name is " <<myName <<endl;
    cout << "You said the following about yourself: " <<description <<endl;
}