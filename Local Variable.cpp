#include <iostream>
using namespace std;

void myFunction()
{
    //Function code block
    //Local variable declarations and initialization
    int locallVar=30;
    const int age=25; //Constant local variable
    cout << "myFunction localVar="<<locallVar <<endl;
}
int main()
{
    //Function code block
    //Local variable declarations and initialization
    int locallVar=31;
    const int age=25; //Constant local variable
    cout <<" main localVar =" <<locallVar <<endl;
    myFunction();
}