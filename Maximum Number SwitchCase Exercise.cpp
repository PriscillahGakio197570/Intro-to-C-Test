 #include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
    int num1, num2;
    cout <<"Please input the first number" <<endl;
    cin >>num1;
    cout <<"Please input the second number" <<endl;
    cin >>num2;
    
    switch (num1 < num2) {
        case 0: (num1 > num2);
        cout <<"The first number is greater than the second number" <<endl;
        break;

        case 1: (num1 < num2);
        cout <<"The second number is greater than the first number" <<endl;
        break;

        case 2: (num1 = num2);
        cout<<"These two numbers are equal" <<endl;
        break;

        default: 
        cout <<"No numbers have been inputted" <<endl;
        break;

    }

    return 0;
 }