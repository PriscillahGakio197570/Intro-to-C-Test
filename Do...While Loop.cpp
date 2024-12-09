#include <iostream>
using namespace std;
int main()
{
    string food;
    char resp;

    do{
        cout <<"Please enter a food you like: ";
        cin >> food; //Asks a user to input their food
        cout <<"Do you wish to continue (Y/N)? ";
        cin >>resp; 

    } while (resp != 'N'); //Creates the condition that the response must not be N. If it is N then the loop stops.
    return 0;
}