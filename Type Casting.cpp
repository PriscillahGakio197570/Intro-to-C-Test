#include <iostream>
using namespace std;

int main()
{
    double myNum= 15.5234; //Variable declaration
    int myNewNum= myNum;  //Casting the double to an integer
    cout <<myNewNum<<endl; //Outputing the integer

    float mySecondNum=35.4568;
    double myThirdNum= mySecondNum;
    cout <<myThirdNum<<endl;

    bool notTrue= false;
    cout<< notTrue <<endl;
    bool isTrue= 15;
    cout<< isTrue <<endl;
}