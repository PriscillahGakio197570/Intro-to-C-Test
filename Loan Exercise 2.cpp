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

    cout <<" Please input your bank details: " <<endl;
    cout <<"Name" <<endl;
    getline (cin, userName);
    cout <<"Age" <<endl;
    cin >>age; 
    cout<<"Bank Balance" <<endl;
    cin >>bankBalance; 
    cout<<"Account Age in months" <<endl;
    cin >>accountAge;

    if (age >= 22) 
    {
        cout <<"Eligible For Loan" <<endl;
    } else 
    cout <<"Ineligible For Loan" <<endl;

    if (bankBalance >= 50000)
    {
        cout <<"Eligible For Loan" <<endl;
    } else
    cout <<"Ineligible For Loan" <<endl;

    if (CRB = "Good")
    {
        cout <<"Eligible For Loan" <<endl;
    } else 
    cout <<"Ineligible For Loan" <<endl;

    if (accountAge >= 6)
    {
        cout <<"Eligible For Loan" <<endl;
    } else
    cout <<"Ineligible For Loan" <<endl;

    return 0;
 
}