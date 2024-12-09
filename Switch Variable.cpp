#include <iostream>
#include <string>
using namespace std;

int main()
{
    int option; //Switch variable
    cout << " Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout << " \n 1.Monday \n 2.Tuesday \n 3.Wednesday \n 4.Thursday \n 5.Friday " <<endl;
    cout << " Please select day of choice " <<endl;
    cin >>option;

    switch (option){
    case 1:
    cout <<"Monday Classes \n" <<endl;
    cout <<"\t1. BBIT 1106: Math for Biz" <<endl;
    cout <<"\t2. BBIT 1102: Intro to Programming" <<endl;
    break;

    case 2:
    cout <<"Tuesday Classes \n" <<endl;
    cout <<"\t 1. BBIT 1102:Intro to Programs" <<endl;
    cout <<"\t2. BBIT 1104:Intro to Ethics" <<endl;
    break;

    case 3:
    cout <<"Wednesday Classes \n" <<endl;
    cout <<"t 1.BBIT 1106: Math for Business" <<endl;
    cout <<"\t 2.BBIT 1102: Theology" <<endl;
    cout <<"\t 3.BBIT 1102: Fundamentals Of IT" <<endl;
    break;

    case 4:
    cout <<"Thursday Classes \n" <<endl;
    cout <<"\t 1.BBIT 1105: Accounting" <<endl;
    cout <<"\t 2.BBIT 1101: Fundamentals Of IT" <<endl;
    break;

    case 5:
    cout <<"Friday Classes \n" <<endl;
    cout <<"\t 1.BBIT 1103: Business Computing" <<endl;
    break;

    default:
    cout <<"Invalid Input" ;
    break;
    }
    return 0;
}