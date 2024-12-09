#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;
    cout << "Please Input Your First Name: " <<firstName <<endl;
    getline (cin, firstName);
    cout << "Please Input Your Last Name: " <<lastName <<endl;
    getline (cin, lastName);
    cout<< "Please Input Your Full Name: " <<fullName <<endl;
    getline (cin, fullName);
    cout <<"Please Input Your Favourite Meal: " <<favoriteMeal <<endl;
    getline (cin, favoriteMeal);
    cout<< "Please Input Your Favourite Movie: " <<favoriteMovie <<endl;
    getline (cin, favoriteMovie);

    cout <<firstName <<endl <<lastName <<endl <<fullName <<endl <<favoriteMeal <<endl <<favoriteMovie <<endl;

    return 0;
}