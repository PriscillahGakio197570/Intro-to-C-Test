#include <iostream>
#include <string>
using namespace std;
int main()
{
    string userName; 
    string CRB;
    int age; 
    int bankBalance;
    int accountAge;
    
    string message= (CRB == "Good" && age > 22 && bankBalance > 50000 && accountAge > 6)?  "Eligible For Loan" : "Ineligible For Loan";
    
    cout <<" Please input your bank details: " <<endl;
    cout <<" Full name: " <<endl;
    getline(cin, userName);
    cout <<" Age: " <<endl;
    cin >>age; 
    cout <<" Bank Balance: " <<endl;
    cin >>bankBalance;
    cout <<" CRB Status: " <<endl;
    cin >>CRB; 
    cout <<" Account Age in months: " <<endl;
    cin >>accountAge;

    cout <<userName <<" is " <<message <<endl;

    return 0;
    
}