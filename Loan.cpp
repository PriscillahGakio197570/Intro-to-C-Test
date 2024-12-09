#include <iostream>
#include <string>
using namespace std;
int main()
{
    string userName; 
    string message;
    int age; 
    int bankBalance;
    int accountAge;

    message= (age >= 22, bankBalance >= 50,000, accountAge >= 6) ? "Eligible for loan" : "Not Eligible for Loan";

    cout <<" Please input your bank details: " <<endl;
    cout <<"Full name: " <<endl;
    getline(cin, userName);
    cout <<"Age: " <<endl;
    cin >>age; 
    cout<<"Bank Balance: " <<endl;
    cin >>bankBalance; 
    cout<<"Account Age in months: " <<endl;
    cin >>accountAge;

    
    cout <<userName <<" is " <<message <<endl;
    
}