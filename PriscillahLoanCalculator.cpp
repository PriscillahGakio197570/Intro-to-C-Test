#include <iostream>
using namespace std;
int main()
{
    string userName;
    cout <<"Please Input The Client's Name" <<endl;
    getline (cin, userName);
    
    int age;
    cout <<"Please Input The Client's Age" <<endl;
    cin >>age;
   
    double bankBalance;
    cout <<"Please Input The Client's Bank Balance" <<endl;
    cin >>bankBalance;
    
    string CRB;
    cout <<"Please Input The Client's CRB Status" <<endl;
    getline (cin, CRB);
    
    double accountAge;
    cout <<"Please Input The Client's Account Age";
    cin >>accountAge;

    string PriscillahLoanCalculator;
{ 
    string PriscillahLoanCalculator= (age > 22, bankBalance > 50000, CRB = "Good", accountAge > 6)? "Eligible For Loan" : "Ineligible For Loan";
    cout <<PriscillahLoanCalculator <<endl;  
    }