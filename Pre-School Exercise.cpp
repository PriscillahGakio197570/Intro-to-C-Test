#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string childName;
    string interest;

    cout <<"Please Insert Your Child's Name" <<endl;
    cin >> childName;
    cout <<"Please Insert Your Child's Interest" <<endl;
    cin >> interest;

    string message= (age >= 4 && age <=10)? "Please Input Your Child's Interest" :  "Age Input is Invalid";
    cin >> interest;
    
    if (interest == "soccer") 
    {
        cout <<childName <<" has been assigned to the Soccer Play Group" <<endl;
    } else if (interest == "art") 
    {
        cout <<childName <<" has been assigned to the Art Play Group" <<endl;
    } else if (interest == "music")
    {
        cout <<childName <<" has been assigned to the Music Play Group" <<endl;
    } else if (interest == "athletics")
    {
        cout <<childName <<" has been assigned to the Athletics Play Group" <<endl;
    } else if (interest == "toys")
    {
        cout <<childName <<" has been assigned to the Toys Play Group" <<endl;
    } else 
    cout <<childName <<" has been assigned to other groups" <<endl;

    return 0;
    
}