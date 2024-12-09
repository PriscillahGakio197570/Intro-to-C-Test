#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter the first number"; 
    cin >> num1; 
    cout <<"Enter the second number";
    cin >> num2;
    
    double sum= num1 + num2;
    cout << "Sum is " << sum <<endl;
    cin >>num1 >>num2;

    double difference= num1 - num2;
    cout <<" Difference is " << difference <<endl;
    cin >>num1 >>num2;

    double mult= num1 * num2;
    cout << "Product is " << mult <<endl;
    cin >> num1 >> num2;

    double div= num1/num2;
    cout <<"Divided number is " << div <<endl;
    cin >> num1 >> num2;

    cout << "Please Input The Function Required";
    cin >>sum >>difference >>mult >>div; 


     if (sum)
    {
        cout<<"The result of this operation is " <<sum; 
    } else if (difference){
        cout<<"The result of this operation is " <<difference;
    } else if (mult){
        cout<<"The result of this operation is " <<mult;
    } else if (div){
        cout<<"The result of this operation is " <<div; 
    } 
    
    return 0;
}