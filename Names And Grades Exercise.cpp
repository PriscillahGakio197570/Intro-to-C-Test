#include <iostream>
using namespace std;

int main()
{
    int grade;
    string fullName;

    cout <<"Please Enter The Student's Full Name" <<endl;
    getline(cin, fullName); 
    
    string message= (grade >= 0 && grade <= 100)? "Please Enter The Student's Grade" : "Invalid";
    cout <<"Please Enter The Student's Grade" <<endl;
    cin >>grade;

       if (grade >=70 && grade <=100)
       {
        cout <<fullName <<" has received an A" <<endl;
        } else if (grade >= 60 && grade < 70) 
        {
        cout <<fullName <<" has received a B" <<endl;
        } else if (grade >= 50 && grade < 60) 
        {
        cout <<fullName <<" has received a C" <<endl;
        } else if (grade >= 40 && grade < 50) 
        {
        cout <<fullName <<" has received a D" <<endl;
        } else if (grade >= 0 && grade < 40) 
        {
        cout <<fullName <<" has received a F" <<endl;
        } else {
        cout <<"Invalid" <<endl;
        }
         return 0;
}