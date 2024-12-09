#include <iostream>
using namespace std;

int main()
{
 double base, height, hypotenuse; //Variable declaration 
 cout << "Input the base, height and hypotenuse respectively: " <<endl; //Asking user for input
 cin >> base >> height >> hypotenuse; //User input
 double perimeter = base + height + hypotenuse; //Calculating Perimeter
 cout << "Perimeter is: " << perimeter <<endl;
 double area = 0.5 * base * hypotenuse; //Calculating Area
 cout << "Area is: " << area <<endl;

 return 0;
}